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
#include "libqhorizontalpercentbarseries.hpp"
#include "libqhorizontalpercentbarseries.h"

/// https://doc.qt.io/qt-6/qhorizontalpercentbarseries.html

/// q_horizontalpercentbarseries_new constructs a new QHorizontalPercentBarSeries object.
///
///
QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new() {
    return QHorizontalPercentBarSeries_new();
}

/// q_horizontalpercentbarseries_new2 constructs a new QHorizontalPercentBarSeries object.
///
/// ``` QObject* parent ```
QHorizontalPercentBarSeries* q_horizontalpercentbarseries_new2(void* parent) {
    return QHorizontalPercentBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QHorizontalPercentBarSeries* self ```
QMetaObject* q_horizontalpercentbarseries_meta_object(void* self) {
    return QHorizontalPercentBarSeries_MetaObject((QHorizontalPercentBarSeries*)self);
}

/// ``` QHorizontalPercentBarSeries* self, const char* param1 ```
void* q_horizontalpercentbarseries_metacast(void* self, const char* param1) {
    return QHorizontalPercentBarSeries_Metacast((QHorizontalPercentBarSeries*)self, param1);
}

/// ``` QHorizontalPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalpercentbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalPercentBarSeries_Metacall((QHorizontalPercentBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalPercentBarSeries* self, int32_t (*slot)(QHorizontalPercentBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_horizontalpercentbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QHorizontalPercentBarSeries_OnMetacall((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_horizontalpercentbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QHorizontalPercentBarSeries_QBaseMetacall((QHorizontalPercentBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_horizontalpercentbarseries_tr(const char* s) {
    libqt_string _str = QHorizontalPercentBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhorizontalpercentbarseries.html#type)
///
/// ``` QHorizontalPercentBarSeries* self ```
int64_t q_horizontalpercentbarseries_type(void* self) {
    return QHorizontalPercentBarSeries_Type((QHorizontalPercentBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QHorizontalPercentBarSeries* self, int64_t (*slot)() ```
void q_horizontalpercentbarseries_on_type(void* self, int64_t (*slot)()) {
    QHorizontalPercentBarSeries_OnType((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QHorizontalPercentBarSeries* self ```
int64_t q_horizontalpercentbarseries_qbase_type(void* self) {
    return QHorizontalPercentBarSeries_QBaseType((QHorizontalPercentBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_horizontalpercentbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QHorizontalPercentBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_horizontalpercentbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QHorizontalPercentBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QHorizontalPercentBarSeries* self, double width ```
void q_horizontalpercentbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QHorizontalPercentBarSeries* self ```
double q_horizontalpercentbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* set ```
bool q_horizontalpercentbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* set ```
bool q_horizontalpercentbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* set ```
bool q_horizontalpercentbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* sets[] ```
bool q_horizontalpercentbarseries_append_with_sets(void* self, void* sets[]) {
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
/// ``` QHorizontalPercentBarSeries* self, int index, QBarSet* set ```
bool q_horizontalpercentbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QHorizontalPercentBarSeries* self ```
int32_t q_horizontalpercentbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QHorizontalPercentBarSeries* self ```
libqt_list /* of QBarSet* */ q_horizontalpercentbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QHorizontalPercentBarSeries* self, const char* format ```
void q_horizontalpercentbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QHorizontalPercentBarSeries* self ```
const char* q_horizontalpercentbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QHorizontalPercentBarSeries* self, double angle ```
void q_horizontalpercentbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QHorizontalPercentBarSeries* self ```
double q_horizontalpercentbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QHorizontalPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalpercentbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QHorizontalPercentBarSeries* self ```
int64_t q_horizontalpercentbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QHorizontalPercentBarSeries* self, int precision ```
void q_horizontalpercentbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QHorizontalPercentBarSeries* self ```
int32_t q_horizontalpercentbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QHorizontalPercentBarSeries* self, int index, QBarSet* barset ```
void q_horizontalpercentbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalpercentbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QHorizontalPercentBarSeries* self, bool status, int index, QBarSet* barset ```
void q_horizontalpercentbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_horizontalpercentbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QHorizontalPercentBarSeries* self, int index, QBarSet* barset ```
void q_horizontalpercentbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalpercentbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QHorizontalPercentBarSeries* self, int index, QBarSet* barset ```
void q_horizontalpercentbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalpercentbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QHorizontalPercentBarSeries* self, int index, QBarSet* barset ```
void q_horizontalpercentbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_horizontalpercentbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalpercentbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_horizontalpercentbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QHorizontalPercentBarSeries* self, const char* format ```
void q_horizontalpercentbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_horizontalpercentbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QHorizontalPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_horizontalpercentbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_horizontalpercentbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QHorizontalPercentBarSeries* self, double angle ```
void q_horizontalpercentbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_horizontalpercentbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QHorizontalPercentBarSeries* self, int precision ```
void q_horizontalpercentbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_horizontalpercentbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* sets[] ```
void q_horizontalpercentbarseries_barsets_added(void* self, void* sets[]) {
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
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalpercentbarseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QHorizontalPercentBarSeries* self, QBarSet* sets[] ```
void q_horizontalpercentbarseries_barsets_removed(void* self, void* sets[]) {
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
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_horizontalpercentbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QHorizontalPercentBarSeries* self, bool visible ```
void q_horizontalpercentbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QHorizontalPercentBarSeries* self, const char* name ```
void q_horizontalpercentbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QHorizontalPercentBarSeries* self ```
const char* q_horizontalpercentbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QHorizontalPercentBarSeries* self ```
double q_horizontalpercentbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QHorizontalPercentBarSeries* self, double opacity ```
void q_horizontalpercentbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QHorizontalPercentBarSeries* self ```
QChart* q_horizontalpercentbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QHorizontalPercentBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalpercentbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QHorizontalPercentBarSeries* self, QAbstractAxis* axis ```
bool q_horizontalpercentbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QHorizontalPercentBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_horizontalpercentbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalpercentbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalpercentbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalpercentbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_horizontalpercentbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QHorizontalPercentBarSeries* self, bool visible ```
void q_horizontalpercentbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QHorizontalPercentBarSeries* self, bool enable ```
void q_horizontalpercentbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QHorizontalPercentBarSeries* self ```
const char* q_horizontalpercentbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QHorizontalPercentBarSeries* self, const char* name ```
void q_horizontalpercentbarseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QHorizontalPercentBarSeries* self ```
bool q_horizontalpercentbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QHorizontalPercentBarSeries* self, bool b ```
bool q_horizontalpercentbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QHorizontalPercentBarSeries* self ```
QThread* q_horizontalpercentbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QHorizontalPercentBarSeries* self, QThread* thread ```
void q_horizontalpercentbarseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalPercentBarSeries* self, int interval ```
int32_t q_horizontalpercentbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QHorizontalPercentBarSeries* self, int id ```
void q_horizontalpercentbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QHorizontalPercentBarSeries* self ```
libqt_list /* of QObject* */ q_horizontalpercentbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* parent ```
void q_horizontalpercentbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* filterObj ```
void q_horizontalpercentbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* obj ```
void q_horizontalpercentbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_horizontalpercentbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_horizontalpercentbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_horizontalpercentbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_horizontalpercentbarseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QHorizontalPercentBarSeries* self, const char* name, QVariant* value ```
bool q_horizontalpercentbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QHorizontalPercentBarSeries* self, const char* name ```
QVariant* q_horizontalpercentbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QHorizontalPercentBarSeries* self ```
const char** q_horizontalpercentbarseries_dynamic_property_names(void* self) {
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
/// ``` QHorizontalPercentBarSeries* self ```
QBindingStorage* q_horizontalpercentbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QHorizontalPercentBarSeries* self ```
QBindingStorage* q_horizontalpercentbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QObject*) ```
void q_horizontalpercentbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QHorizontalPercentBarSeries* self ```
QObject* q_horizontalpercentbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QHorizontalPercentBarSeries* self, const char* classname ```
bool q_horizontalpercentbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QHorizontalPercentBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_horizontalpercentbarseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalpercentbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_horizontalpercentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QHorizontalPercentBarSeries* self, QObject* param1 ```
void q_horizontalpercentbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_horizontalpercentbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QEvent* event ```
bool q_horizontalpercentbarseries_event(void* self, void* event) {
    return QHorizontalPercentBarSeries_Event((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QEvent* event ```
bool q_horizontalpercentbarseries_qbase_event(void* self, void* event) {
    return QHorizontalPercentBarSeries_QBaseEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, bool (*slot)(QHorizontalPercentBarSeries*, QEvent*) ```
void q_horizontalpercentbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnEvent((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalpercentbarseries_event_filter(void* self, void* watched, void* event) {
    return QHorizontalPercentBarSeries_EventFilter((QHorizontalPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_horizontalpercentbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QHorizontalPercentBarSeries_QBaseEventFilter((QHorizontalPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, bool (*slot)(QHorizontalPercentBarSeries*, QObject*, QEvent*) ```
void q_horizontalpercentbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QHorizontalPercentBarSeries_OnEventFilter((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QTimerEvent* event ```
void q_horizontalpercentbarseries_timer_event(void* self, void* event) {
    QHorizontalPercentBarSeries_TimerEvent((QHorizontalPercentBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QTimerEvent* event ```
void q_horizontalpercentbarseries_qbase_timer_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseTimerEvent((QHorizontalPercentBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QHorizontalPercentBarSeries*, QTimerEvent*) ```
void q_horizontalpercentbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnTimerEvent((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QChildEvent* event ```
void q_horizontalpercentbarseries_child_event(void* self, void* event) {
    QHorizontalPercentBarSeries_ChildEvent((QHorizontalPercentBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QChildEvent* event ```
void q_horizontalpercentbarseries_qbase_child_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseChildEvent((QHorizontalPercentBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QHorizontalPercentBarSeries*, QChildEvent*) ```
void q_horizontalpercentbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnChildEvent((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QEvent* event ```
void q_horizontalpercentbarseries_custom_event(void* self, void* event) {
    QHorizontalPercentBarSeries_CustomEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QEvent* event ```
void q_horizontalpercentbarseries_qbase_custom_event(void* self, void* event) {
    QHorizontalPercentBarSeries_QBaseCustomEvent((QHorizontalPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QHorizontalPercentBarSeries*, QEvent*) ```
void q_horizontalpercentbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnCustomEvent((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
void q_horizontalpercentbarseries_connect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_ConnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
void q_horizontalpercentbarseries_qbase_connect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_QBaseConnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QHorizontalPercentBarSeries*, QMetaMethod*) ```
void q_horizontalpercentbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnConnectNotify((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
void q_horizontalpercentbarseries_disconnect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_DisconnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
void q_horizontalpercentbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QHorizontalPercentBarSeries_QBaseDisconnectNotify((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, void (*slot)(QHorizontalPercentBarSeries*, QMetaMethod*) ```
void q_horizontalpercentbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnDisconnectNotify((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self ```
QObject* q_horizontalpercentbarseries_sender(void* self) {
    return QHorizontalPercentBarSeries_Sender((QHorizontalPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self ```
QObject* q_horizontalpercentbarseries_qbase_sender(void* self) {
    return QHorizontalPercentBarSeries_QBaseSender((QHorizontalPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QObject* (*slot)() ```
void q_horizontalpercentbarseries_on_sender(void* self, QObject* (*slot)()) {
    QHorizontalPercentBarSeries_OnSender((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self ```
int32_t q_horizontalpercentbarseries_sender_signal_index(void* self) {
    return QHorizontalPercentBarSeries_SenderSignalIndex((QHorizontalPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self ```
int32_t q_horizontalpercentbarseries_qbase_sender_signal_index(void* self) {
    return QHorizontalPercentBarSeries_QBaseSenderSignalIndex((QHorizontalPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, int32_t (*slot)() ```
void q_horizontalpercentbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QHorizontalPercentBarSeries_OnSenderSignalIndex((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, const char* signal ```
int32_t q_horizontalpercentbarseries_receivers(void* self, const char* signal) {
    return QHorizontalPercentBarSeries_Receivers((QHorizontalPercentBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, const char* signal ```
int32_t q_horizontalpercentbarseries_qbase_receivers(void* self, const char* signal) {
    return QHorizontalPercentBarSeries_QBaseReceivers((QHorizontalPercentBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, int32_t (*slot)(QHorizontalPercentBarSeries*, const char*) ```
void q_horizontalpercentbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QHorizontalPercentBarSeries_OnReceivers((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
bool q_horizontalpercentbarseries_is_signal_connected(void* self, void* signal) {
    return QHorizontalPercentBarSeries_IsSignalConnected((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, QMetaMethod* signal ```
bool q_horizontalpercentbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QHorizontalPercentBarSeries_QBaseIsSignalConnected((QHorizontalPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QHorizontalPercentBarSeries* self, bool (*slot)(QHorizontalPercentBarSeries*, QMetaMethod*) ```
void q_horizontalpercentbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QHorizontalPercentBarSeries_OnIsSignalConnected((QHorizontalPercentBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QHorizontalPercentBarSeries* self ```
void q_horizontalpercentbarseries_delete(void* self) {
    QHorizontalPercentBarSeries_Delete((QHorizontalPercentBarSeries*)(self));
}