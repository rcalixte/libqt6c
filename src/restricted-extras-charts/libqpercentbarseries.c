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
#include "libqpercentbarseries.hpp"
#include "libqpercentbarseries.h"

/// https://doc.qt.io/qt-6/qpercentbarseries.html

/// q_percentbarseries_new constructs a new QPercentBarSeries object.
///
///
QPercentBarSeries* q_percentbarseries_new() {
    return QPercentBarSeries_new();
}

/// q_percentbarseries_new2 constructs a new QPercentBarSeries object.
///
/// ``` QObject* parent ```
QPercentBarSeries* q_percentbarseries_new2(void* parent) {
    return QPercentBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QPercentBarSeries* self ```
QMetaObject* q_percentbarseries_meta_object(void* self) {
    return QPercentBarSeries_MetaObject((QPercentBarSeries*)self);
}

/// ``` QPercentBarSeries* self, const char* param1 ```
void* q_percentbarseries_metacast(void* self, const char* param1) {
    return QPercentBarSeries_Metacast((QPercentBarSeries*)self, param1);
}

/// ``` QPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_percentbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPercentBarSeries_Metacall((QPercentBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)(QPercentBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_percentbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QPercentBarSeries_OnMetacall((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPercentBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_percentbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QPercentBarSeries_QBaseMetacall((QPercentBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_percentbarseries_tr(const char* s) {
    libqt_string _str = QPercentBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qpercentbarseries.html#type)
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_type(void* self) {
    return QPercentBarSeries_Type((QPercentBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QPercentBarSeries* self, int64_t (*slot)() ```
void q_percentbarseries_on_type(void* self, int64_t (*slot)()) {
    QPercentBarSeries_OnType((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_qbase_type(void* self) {
    return QPercentBarSeries_QBaseType((QPercentBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_percentbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QPercentBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_percentbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QPercentBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QPercentBarSeries* self, double width ```
void q_percentbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QPercentBarSeries* self, QBarSet* set ```
bool q_percentbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QPercentBarSeries* self, QBarSet* sets[] ```
bool q_percentbarseries_append_with_sets(void* self, void* sets[]) {
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
/// ``` QPercentBarSeries* self, int index, QBarSet* set ```
bool q_percentbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QBarSet* */ q_percentbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QPercentBarSeries* self, const char* format ```
void q_percentbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QPercentBarSeries* self, double angle ```
void q_percentbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_percentbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QPercentBarSeries* self ```
int64_t q_percentbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QPercentBarSeries* self, int precision ```
void q_percentbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QPercentBarSeries* self, bool status, int index, QBarSet* barset ```
void q_percentbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_percentbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QPercentBarSeries* self, int index, QBarSet* barset ```
void q_percentbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_percentbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_percentbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_percentbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QPercentBarSeries* self, const char* format ```
void q_percentbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_percentbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QPercentBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_percentbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_percentbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QPercentBarSeries* self, double angle ```
void q_percentbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_percentbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QPercentBarSeries* self, int precision ```
void q_percentbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_percentbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QPercentBarSeries* self, QBarSet* sets[] ```
void q_percentbarseries_barsets_added(void* self, void* sets[]) {
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
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_percentbarseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QPercentBarSeries* self, QBarSet* sets[] ```
void q_percentbarseries_barsets_removed(void* self, void* sets[]) {
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
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_percentbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QPercentBarSeries* self, bool visible ```
void q_percentbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QPercentBarSeries* self, const char* name ```
void q_percentbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QPercentBarSeries* self ```
double q_percentbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QPercentBarSeries* self, double opacity ```
void q_percentbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QPercentBarSeries* self ```
QChart* q_percentbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QPercentBarSeries* self, QAbstractAxis* axis ```
bool q_percentbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QPercentBarSeries* self, QAbstractAxis* axis ```
bool q_percentbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_percentbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_percentbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_percentbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_percentbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QPercentBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_percentbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QPercentBarSeries* self, bool visible ```
void q_percentbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QPercentBarSeries* self, bool enable ```
void q_percentbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QPercentBarSeries* self ```
const char* q_percentbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QPercentBarSeries* self, const char* name ```
void q_percentbarseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QPercentBarSeries* self ```
bool q_percentbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QPercentBarSeries* self, bool b ```
bool q_percentbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QPercentBarSeries* self ```
QThread* q_percentbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QPercentBarSeries* self, QThread* thread ```
void q_percentbarseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPercentBarSeries* self, int interval ```
int32_t q_percentbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QPercentBarSeries* self, int id ```
void q_percentbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QPercentBarSeries* self ```
libqt_list /* of QObject* */ q_percentbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QPercentBarSeries* self, QObject* parent ```
void q_percentbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QPercentBarSeries* self, QObject* filterObj ```
void q_percentbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QPercentBarSeries* self, QObject* obj ```
void q_percentbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_percentbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPercentBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_percentbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_percentbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_percentbarseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QPercentBarSeries* self, const char* name, QVariant* value ```
bool q_percentbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QPercentBarSeries* self, const char* name ```
QVariant* q_percentbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QPercentBarSeries* self ```
const char** q_percentbarseries_dynamic_property_names(void* self) {
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
/// ``` QPercentBarSeries* self ```
QBindingStorage* q_percentbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QPercentBarSeries* self ```
QBindingStorage* q_percentbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QPercentBarSeries* self, void (*slot)(QObject*) ```
void q_percentbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QPercentBarSeries* self, const char* classname ```
bool q_percentbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QPercentBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_percentbarseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_percentbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QPercentBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_percentbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QPercentBarSeries* self, QObject* param1 ```
void q_percentbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QPercentBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_percentbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
bool q_percentbarseries_event(void* self, void* event) {
    return QPercentBarSeries_Event((QPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
bool q_percentbarseries_qbase_event(void* self, void* event) {
    return QPercentBarSeries_QBaseEvent((QPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QEvent*) ```
void q_percentbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QPercentBarSeries_OnEvent((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_percentbarseries_event_filter(void* self, void* watched, void* event) {
    return QPercentBarSeries_EventFilter((QPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* watched, QEvent* event ```
bool q_percentbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QPercentBarSeries_QBaseEventFilter((QPercentBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QObject*, QEvent*) ```
void q_percentbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QPercentBarSeries_OnEventFilter((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QTimerEvent* event ```
void q_percentbarseries_timer_event(void* self, void* event) {
    QPercentBarSeries_TimerEvent((QPercentBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QTimerEvent* event ```
void q_percentbarseries_qbase_timer_event(void* self, void* event) {
    QPercentBarSeries_QBaseTimerEvent((QPercentBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QTimerEvent*) ```
void q_percentbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QPercentBarSeries_OnTimerEvent((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QChildEvent* event ```
void q_percentbarseries_child_event(void* self, void* event) {
    QPercentBarSeries_ChildEvent((QPercentBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QChildEvent* event ```
void q_percentbarseries_qbase_child_event(void* self, void* event) {
    QPercentBarSeries_QBaseChildEvent((QPercentBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QChildEvent*) ```
void q_percentbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QPercentBarSeries_OnChildEvent((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
void q_percentbarseries_custom_event(void* self, void* event) {
    QPercentBarSeries_CustomEvent((QPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QEvent* event ```
void q_percentbarseries_qbase_custom_event(void* self, void* event) {
    QPercentBarSeries_QBaseCustomEvent((QPercentBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QEvent*) ```
void q_percentbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QPercentBarSeries_OnCustomEvent((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_connect_notify(void* self, void* signal) {
    QPercentBarSeries_ConnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_qbase_connect_notify(void* self, void* signal) {
    QPercentBarSeries_QBaseConnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QPercentBarSeries_OnConnectNotify((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_disconnect_notify(void* self, void* signal) {
    QPercentBarSeries_DisconnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
void q_percentbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QPercentBarSeries_QBaseDisconnectNotify((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, void (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QPercentBarSeries_OnDisconnectNotify((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_sender(void* self) {
    return QPercentBarSeries_Sender((QPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self ```
QObject* q_percentbarseries_qbase_sender(void* self) {
    return QPercentBarSeries_QBaseSender((QPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QObject* (*slot)() ```
void q_percentbarseries_on_sender(void* self, QObject* (*slot)()) {
    QPercentBarSeries_OnSender((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_sender_signal_index(void* self) {
    return QPercentBarSeries_SenderSignalIndex((QPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self ```
int32_t q_percentbarseries_qbase_sender_signal_index(void* self) {
    return QPercentBarSeries_QBaseSenderSignalIndex((QPercentBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)() ```
void q_percentbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QPercentBarSeries_OnSenderSignalIndex((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, const char* signal ```
int32_t q_percentbarseries_receivers(void* self, const char* signal) {
    return QPercentBarSeries_Receivers((QPercentBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, const char* signal ```
int32_t q_percentbarseries_qbase_receivers(void* self, const char* signal) {
    return QPercentBarSeries_QBaseReceivers((QPercentBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, int32_t (*slot)(QPercentBarSeries*, const char*) ```
void q_percentbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QPercentBarSeries_OnReceivers((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
bool q_percentbarseries_is_signal_connected(void* self, void* signal) {
    return QPercentBarSeries_IsSignalConnected((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QPercentBarSeries* self, QMetaMethod* signal ```
bool q_percentbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QPercentBarSeries_QBaseIsSignalConnected((QPercentBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QPercentBarSeries* self, bool (*slot)(QPercentBarSeries*, QMetaMethod*) ```
void q_percentbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QPercentBarSeries_OnIsSignalConnected((QPercentBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QPercentBarSeries* self ```
void q_percentbarseries_delete(void* self) {
    QPercentBarSeries_Delete((QPercentBarSeries*)(self));
}