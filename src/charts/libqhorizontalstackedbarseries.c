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
#include "libqhorizontalstackedbarseries.hpp"
#include "libqhorizontalstackedbarseries.h"

/// https://doc.qt.io/qt-6/qhorizontalstackedbarseries.html

/// q_horizontalstackedbarseries_new constructs a new QHorizontalStackedBarSeries object.
///
///
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new() {
    return QHorizontalStackedBarSeries_new();
}

/// q_horizontalstackedbarseries_new2 constructs a new QHorizontalStackedBarSeries object.
///
/// ``` QObject* parent ```
QHorizontalStackedBarSeries* q_horizontalstackedbarseries_new2(void* parent) {
    return QHorizontalStackedBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHorizontalStackedBarSeries* self ```
QMetaObject* q_horizontalstackedbarseries_meta_object(void* self) {
    return QHorizontalStackedBarSeries_MetaObject((QHorizontalStackedBarSeries*)self);
}

/// ``` QHorizontalStackedBarSeries* self, const char* param1 ```
void* q_horizontalstackedbarseries_metacast(void* self, const char* param1) {
    return QHorizontalStackedBarSeries_Metacast((QHorizontalStackedBarSeries*)self, param1);
}

/// ``` QHorizontalStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalstackedbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalStackedBarSeries_Metacall((QHorizontalStackedBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)(QHorizontalStackedBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_horizontalstackedbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHorizontalStackedBarSeries_OnMetacall((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalstackedbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalStackedBarSeries_QBaseMetacall((QHorizontalStackedBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_horizontalstackedbarseries_tr(const char* s) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalstackedbarseries.html#type)
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_type(void* self) {
    return QHorizontalStackedBarSeries_Type((QHorizontalStackedBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalStackedBarSeries* self, int64_t (*slot)() ```
void q_horizontalstackedbarseries_on_type(void* self, int64_t (*slot)()) {
    QHorizontalStackedBarSeries_OnType((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_qbase_type(void* self) {
    return QHorizontalStackedBarSeries_QBaseType((QHorizontalStackedBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_horizontalstackedbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_horizontalstackedbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHorizontalStackedBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QHorizontalStackedBarSeries* self, double width ```
void q_horizontalstackedbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* set ```
bool q_horizontalstackedbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
bool q_horizontalstackedbarseries_append_with_sets(void* self, void* sets[]) {
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
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* set ```
bool q_horizontalstackedbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QBarSet* */ q_horizontalstackedbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QHorizontalStackedBarSeries* self, const char* format ```
void q_horizontalstackedbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QHorizontalStackedBarSeries* self, double angle ```
void q_horizontalstackedbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QHorizontalStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalstackedbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QHorizontalStackedBarSeries* self ```
int64_t q_horizontalstackedbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QHorizontalStackedBarSeries* self, int precision ```
void q_horizontalstackedbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalStackedBarSeries* self, bool status, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalStackedBarSeries* self, int index, QBarSet* barset ```
void q_horizontalstackedbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalstackedbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalstackedbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalstackedbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalStackedBarSeries* self, const char* format ```
void q_horizontalstackedbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_horizontalstackedbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalstackedbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_horizontalstackedbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalStackedBarSeries* self, double angle ```
void q_horizontalstackedbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_horizontalstackedbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalStackedBarSeries* self, int precision ```
void q_horizontalstackedbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_horizontalstackedbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
void q_horizontalstackedbarseries_barsets_added(void* self, void* sets[]) {
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
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalstackedbarseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalStackedBarSeries* self, QBarSet* sets[] ```
void q_horizontalstackedbarseries_barsets_removed(void* self, void* sets[]) {
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
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalstackedbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalStackedBarSeries* self, bool visible ```
void q_horizontalstackedbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name ```
void q_horizontalstackedbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QHorizontalStackedBarSeries* self ```
double q_horizontalstackedbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QHorizontalStackedBarSeries* self, double opacity ```
void q_horizontalstackedbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QHorizontalStackedBarSeries* self ```
QChart* q_horizontalstackedbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QHorizontalStackedBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalstackedbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QHorizontalStackedBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalstackedbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_horizontalstackedbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalstackedbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalStackedBarSeries* self, bool visible ```
void q_horizontalstackedbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalStackedBarSeries* self, bool enable ```
void q_horizontalstackedbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char* q_horizontalstackedbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name ```
void q_horizontalstackedbarseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHorizontalStackedBarSeries* self ```
bool q_horizontalstackedbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHorizontalStackedBarSeries* self, bool b ```
bool q_horizontalstackedbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHorizontalStackedBarSeries* self ```
QThread* q_horizontalstackedbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalStackedBarSeries* self, QThread* thread ```
void q_horizontalstackedbarseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int interval ```
int32_t q_horizontalstackedbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int id ```
void q_horizontalstackedbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHorizontalStackedBarSeries* self ```
libqt_list /* of QObject* */ q_horizontalstackedbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* parent ```
void q_horizontalstackedbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* filterObj ```
void q_horizontalstackedbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* obj ```
void q_horizontalstackedbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_horizontalstackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_horizontalstackedbarseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name, QVariant* value ```
bool q_horizontalstackedbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHorizontalStackedBarSeries* self, const char* name ```
QVariant* q_horizontalstackedbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHorizontalStackedBarSeries* self ```
const char** q_horizontalstackedbarseries_dynamic_property_names(void* self) {
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
/// ``` QHorizontalStackedBarSeries* self ```
QBindingStorage* q_horizontalstackedbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalStackedBarSeries* self ```
QBindingStorage* q_horizontalstackedbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QObject*) ```
void q_horizontalstackedbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHorizontalStackedBarSeries* self, const char* classname ```
bool q_horizontalstackedbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalStackedBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_horizontalstackedbarseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalstackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalStackedBarSeries* self, QObject* param1 ```
void q_horizontalstackedbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_horizontalstackedbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
bool q_horizontalstackedbarseries_event(void* self, void* event) {
    return QHorizontalStackedBarSeries_Event((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
bool q_horizontalstackedbarseries_qbase_event(void* self, void* event) {
    return QHorizontalStackedBarSeries_QBaseEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QEvent*) ```
void q_horizontalstackedbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalstackedbarseries_event_filter(void* self, void* watched, void* event) {
    return QHorizontalStackedBarSeries_EventFilter((QHorizontalStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalstackedbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QHorizontalStackedBarSeries_QBaseEventFilter((QHorizontalStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QObject*, QEvent*) ```
void q_horizontalstackedbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHorizontalStackedBarSeries_OnEventFilter((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QTimerEvent* event ```
void q_horizontalstackedbarseries_timer_event(void* self, void* event) {
    QHorizontalStackedBarSeries_TimerEvent((QHorizontalStackedBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QTimerEvent* event ```
void q_horizontalstackedbarseries_qbase_timer_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseTimerEvent((QHorizontalStackedBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QTimerEvent*) ```
void q_horizontalstackedbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnTimerEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QChildEvent* event ```
void q_horizontalstackedbarseries_child_event(void* self, void* event) {
    QHorizontalStackedBarSeries_ChildEvent((QHorizontalStackedBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QChildEvent* event ```
void q_horizontalstackedbarseries_qbase_child_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseChildEvent((QHorizontalStackedBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QChildEvent*) ```
void q_horizontalstackedbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnChildEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
void q_horizontalstackedbarseries_custom_event(void* self, void* event) {
    QHorizontalStackedBarSeries_CustomEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QEvent* event ```
void q_horizontalstackedbarseries_qbase_custom_event(void* self, void* event) {
    QHorizontalStackedBarSeries_QBaseCustomEvent((QHorizontalStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QEvent*) ```
void q_horizontalstackedbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnCustomEvent((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_connect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_ConnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_qbase_connect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_QBaseConnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnConnectNotify((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_disconnect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_DisconnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
void q_horizontalstackedbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QHorizontalStackedBarSeries_QBaseDisconnectNotify((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, void (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnDisconnectNotify((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_sender(void* self) {
    return QHorizontalStackedBarSeries_Sender((QHorizontalStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
QObject* q_horizontalstackedbarseries_qbase_sender(void* self) {
    return QHorizontalStackedBarSeries_QBaseSender((QHorizontalStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QObject* (*slot)() ```
void q_horizontalstackedbarseries_on_sender(void* self, QObject* (*slot)()) {
    QHorizontalStackedBarSeries_OnSender((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_sender_signal_index(void* self) {
    return QHorizontalStackedBarSeries_SenderSignalIndex((QHorizontalStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self ```
int32_t q_horizontalstackedbarseries_qbase_sender_signal_index(void* self) {
    return QHorizontalStackedBarSeries_QBaseSenderSignalIndex((QHorizontalStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)() ```
void q_horizontalstackedbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHorizontalStackedBarSeries_OnSenderSignalIndex((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, const char* signal ```
int32_t q_horizontalstackedbarseries_receivers(void* self, const char* signal) {
    return QHorizontalStackedBarSeries_Receivers((QHorizontalStackedBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, const char* signal ```
int32_t q_horizontalstackedbarseries_qbase_receivers(void* self, const char* signal) {
    return QHorizontalStackedBarSeries_QBaseReceivers((QHorizontalStackedBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, int32_t (*slot)(QHorizontalStackedBarSeries*, const char*) ```
void q_horizontalstackedbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHorizontalStackedBarSeries_OnReceivers((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
bool q_horizontalstackedbarseries_is_signal_connected(void* self, void* signal) {
    return QHorizontalStackedBarSeries_IsSignalConnected((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, QMetaMethod* signal ```
bool q_horizontalstackedbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QHorizontalStackedBarSeries_QBaseIsSignalConnected((QHorizontalStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalStackedBarSeries* self, bool (*slot)(QHorizontalStackedBarSeries*, QMetaMethod*) ```
void q_horizontalstackedbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHorizontalStackedBarSeries_OnIsSignalConnected((QHorizontalStackedBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHorizontalStackedBarSeries* self ```
void q_horizontalstackedbarseries_delete(void* self) {
    QHorizontalStackedBarSeries_Delete((QHorizontalStackedBarSeries*)(self));
}