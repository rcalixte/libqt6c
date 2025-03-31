#include "libqabstractaxis.hpp"
#include "libqabstractbarseries.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "libqbarset.hpp"
#include "../libqbindingstorage.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqhorizontalbarseries.hpp"
#include "libqhorizontalbarseries.h"

/// https://doc.qt.io/qt-6/qhorizontalbarseries.html

/// q_horizontalbarseries_new constructs a new QHorizontalBarSeries object.
///
///
QHorizontalBarSeries* q_horizontalbarseries_new() {
    return QHorizontalBarSeries_new();
}

/// q_horizontalbarseries_new2 constructs a new QHorizontalBarSeries object.
///
/// ``` QObject* parent ```
QHorizontalBarSeries* q_horizontalbarseries_new2(void* parent) {
    return QHorizontalBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHorizontalBarSeries* self ```
QMetaObject* q_horizontalbarseries_meta_object(void* self) {
    return QHorizontalBarSeries_MetaObject((QHorizontalBarSeries*)self);
}

/// ``` QHorizontalBarSeries* self, const char* param1 ```
void* q_horizontalbarseries_metacast(void* self, const char* param1) {
    return QHorizontalBarSeries_Metacast((QHorizontalBarSeries*)self, param1);
}

/// ``` QHorizontalBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalBarSeries_Metacall((QHorizontalBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)(QHorizontalBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_horizontalbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHorizontalBarSeries_OnMetacall((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalBarSeries_QBaseMetacall((QHorizontalBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_horizontalbarseries_tr(const char* s) {
    libqt_string _str = QHorizontalBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalbarseries.html#type)
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_type(void* self) {
    return QHorizontalBarSeries_Type((QHorizontalBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalBarSeries* self, int64_t (*slot)() ```
void q_horizontalbarseries_on_type(void* self, int64_t (*slot)()) {
    QHorizontalBarSeries_OnType((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_qbase_type(void* self) {
    return QHorizontalBarSeries_QBaseType((QHorizontalBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_horizontalbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QHorizontalBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_horizontalbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHorizontalBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QHorizontalBarSeries* self, double width ```
void q_horizontalbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QHorizontalBarSeries* self, QBarSet* set ```
bool q_horizontalbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalBarSeries* self, QBarSet* sets[] ```
bool q_horizontalbarseries_append_with_sets(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    return QAbstractBarSeries_AppendWithSets((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#insert)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* set ```
bool q_horizontalbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QBarSet* */ q_horizontalbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QHorizontalBarSeries* self, const char* format ```
void q_horizontalbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QHorizontalBarSeries* self, double angle ```
void q_horizontalbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QHorizontalBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QHorizontalBarSeries* self ```
int64_t q_horizontalbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QHorizontalBarSeries* self, int precision ```
void q_horizontalbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalBarSeries* self, bool status, int index, QBarSet* barset ```
void q_horizontalbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_horizontalbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalBarSeries* self, int index, QBarSet* barset ```
void q_horizontalbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalBarSeries* self, const char* format ```
void q_horizontalbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_horizontalbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_horizontalbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalBarSeries* self, double angle ```
void q_horizontalbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_horizontalbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalBarSeries* self, int precision ```
void q_horizontalbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_horizontalbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalBarSeries* self, QBarSet* sets[] ```
void q_horizontalbarseries_barsets_added(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    QAbstractBarSeries_BarsetsAdded((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalbarseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalBarSeries* self, QBarSet* sets[] ```
void q_horizontalbarseries_barsets_removed(void* self, void* sets[]) {
    QBarSet** sets_arr = (QBarSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QBarSet*)sets},
    };
    QAbstractBarSeries_BarsetsRemoved((QAbstractBarSeries*)self, sets_list);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalBarSeries* self, bool visible ```
void q_horizontalbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QHorizontalBarSeries* self, const char* name ```
void q_horizontalbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QHorizontalBarSeries* self ```
double q_horizontalbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QHorizontalBarSeries* self, double opacity ```
void q_horizontalbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QHorizontalBarSeries* self ```
QChart* q_horizontalbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QHorizontalBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QHorizontalBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_horizontalbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalBarSeries* self, bool visible ```
void q_horizontalbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalBarSeries* self, bool enable ```
void q_horizontalbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHorizontalBarSeries* self ```
const char* q_horizontalbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHorizontalBarSeries* self, const char* name ```
void q_horizontalbarseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHorizontalBarSeries* self ```
bool q_horizontalbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHorizontalBarSeries* self, bool b ```
bool q_horizontalbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHorizontalBarSeries* self ```
QThread* q_horizontalbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalBarSeries* self, QThread* thread ```
void q_horizontalbarseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalBarSeries* self, int interval ```
int32_t q_horizontalbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalBarSeries* self, int id ```
void q_horizontalbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHorizontalBarSeries* self ```
libqt_list /* of QObject* */ q_horizontalbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHorizontalBarSeries* self, QObject* parent ```
void q_horizontalbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHorizontalBarSeries* self, QObject* filterObj ```
void q_horizontalbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHorizontalBarSeries* self, QObject* obj ```
void q_horizontalbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_horizontalbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_horizontalbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_horizontalbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_horizontalbarseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHorizontalBarSeries* self, const char* name, QVariant* value ```
bool q_horizontalbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHorizontalBarSeries* self, const char* name ```
QVariant* q_horizontalbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHorizontalBarSeries* self ```
const char** q_horizontalbarseries_dynamic_property_names(void* self) {
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
/// ``` QHorizontalBarSeries* self ```
QBindingStorage* q_horizontalbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalBarSeries* self ```
QBindingStorage* q_horizontalbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QObject*) ```
void q_horizontalbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHorizontalBarSeries* self, const char* classname ```
bool q_horizontalbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_horizontalbarseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalBarSeries* self, QObject* param1 ```
void q_horizontalbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_horizontalbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
bool q_horizontalbarseries_event(void* self, void* event) {
    return QHorizontalBarSeries_Event((QHorizontalBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
bool q_horizontalbarseries_qbase_event(void* self, void* event) {
    return QHorizontalBarSeries_QBaseEvent((QHorizontalBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QEvent*) ```
void q_horizontalbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnEvent((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalbarseries_event_filter(void* self, void* watched, void* event) {
    return QHorizontalBarSeries_EventFilter((QHorizontalBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QHorizontalBarSeries_QBaseEventFilter((QHorizontalBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QObject*, QEvent*) ```
void q_horizontalbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHorizontalBarSeries_OnEventFilter((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QTimerEvent* event ```
void q_horizontalbarseries_timer_event(void* self, void* event) {
    QHorizontalBarSeries_TimerEvent((QHorizontalBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QTimerEvent* event ```
void q_horizontalbarseries_qbase_timer_event(void* self, void* event) {
    QHorizontalBarSeries_QBaseTimerEvent((QHorizontalBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QTimerEvent*) ```
void q_horizontalbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnTimerEvent((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QChildEvent* event ```
void q_horizontalbarseries_child_event(void* self, void* event) {
    QHorizontalBarSeries_ChildEvent((QHorizontalBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QChildEvent* event ```
void q_horizontalbarseries_qbase_child_event(void* self, void* event) {
    QHorizontalBarSeries_QBaseChildEvent((QHorizontalBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QChildEvent*) ```
void q_horizontalbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnChildEvent((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
void q_horizontalbarseries_custom_event(void* self, void* event) {
    QHorizontalBarSeries_CustomEvent((QHorizontalBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QEvent* event ```
void q_horizontalbarseries_qbase_custom_event(void* self, void* event) {
    QHorizontalBarSeries_QBaseCustomEvent((QHorizontalBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QEvent*) ```
void q_horizontalbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnCustomEvent((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_connect_notify(void* self, void* signal) {
    QHorizontalBarSeries_ConnectNotify((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_qbase_connect_notify(void* self, void* signal) {
    QHorizontalBarSeries_QBaseConnectNotify((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnConnectNotify((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_disconnect_notify(void* self, void* signal) {
    QHorizontalBarSeries_DisconnectNotify((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
void q_horizontalbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QHorizontalBarSeries_QBaseDisconnectNotify((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, void (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnDisconnectNotify((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_sender(void* self) {
    return QHorizontalBarSeries_Sender((QHorizontalBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
QObject* q_horizontalbarseries_qbase_sender(void* self) {
    return QHorizontalBarSeries_QBaseSender((QHorizontalBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QObject* (*slot)() ```
void q_horizontalbarseries_on_sender(void* self, QObject* (*slot)()) {
    QHorizontalBarSeries_OnSender((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_sender_signal_index(void* self) {
    return QHorizontalBarSeries_SenderSignalIndex((QHorizontalBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self ```
int32_t q_horizontalbarseries_qbase_sender_signal_index(void* self) {
    return QHorizontalBarSeries_QBaseSenderSignalIndex((QHorizontalBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)() ```
void q_horizontalbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHorizontalBarSeries_OnSenderSignalIndex((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, const char* signal ```
int32_t q_horizontalbarseries_receivers(void* self, const char* signal) {
    return QHorizontalBarSeries_Receivers((QHorizontalBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, const char* signal ```
int32_t q_horizontalbarseries_qbase_receivers(void* self, const char* signal) {
    return QHorizontalBarSeries_QBaseReceivers((QHorizontalBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, int32_t (*slot)(QHorizontalBarSeries*, const char*) ```
void q_horizontalbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHorizontalBarSeries_OnReceivers((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
bool q_horizontalbarseries_is_signal_connected(void* self, void* signal) {
    return QHorizontalBarSeries_IsSignalConnected((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, QMetaMethod* signal ```
bool q_horizontalbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QHorizontalBarSeries_QBaseIsSignalConnected((QHorizontalBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalBarSeries* self, bool (*slot)(QHorizontalBarSeries*, QMetaMethod*) ```
void q_horizontalbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHorizontalBarSeries_OnIsSignalConnected((QHorizontalBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHorizontalBarSeries* self ```
void q_horizontalbarseries_delete(void* self) {
    QHorizontalBarSeries_Delete((QHorizontalBarSeries*)(self));
}