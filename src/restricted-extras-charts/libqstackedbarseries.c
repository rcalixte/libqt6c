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
#include "libqstackedbarseries.hpp"
#include "libqstackedbarseries.h"

/// https://doc.qt.io/qt-6/qstackedbarseries.html

/// q_stackedbarseries_new constructs a new QStackedBarSeries object.
///
///
QStackedBarSeries* q_stackedbarseries_new() {
    return QStackedBarSeries_new();
}

/// q_stackedbarseries_new2 constructs a new QStackedBarSeries object.
///
/// ``` QObject* parent ```
QStackedBarSeries* q_stackedbarseries_new2(void* parent) {
    return QStackedBarSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QStackedBarSeries* self ```
QMetaObject* q_stackedbarseries_meta_object(void* self) {
    return QStackedBarSeries_MetaObject((QStackedBarSeries*)self);
}

/// ``` QStackedBarSeries* self, const char* param1 ```
void* q_stackedbarseries_metacast(void* self, const char* param1) {
    return QStackedBarSeries_Metacast((QStackedBarSeries*)self, param1);
}

/// ``` QStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedbarseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedBarSeries_Metacall((QStackedBarSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QStackedBarSeries* self, int32_t (*slot)(QStackedBarSeries*, enum QMetaObject__Call, int, void*) ```
void q_stackedbarseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QStackedBarSeries_OnMetacall((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStackedBarSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_stackedbarseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QStackedBarSeries_QBaseMetacall((QStackedBarSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_stackedbarseries_tr(const char* s) {
    libqt_string _str = QStackedBarSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstackedbarseries.html#type)
///
/// ``` QStackedBarSeries* self ```
int64_t q_stackedbarseries_type(void* self) {
    return QStackedBarSeries_Type((QStackedBarSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QStackedBarSeries* self, int64_t (*slot)() ```
void q_stackedbarseries_on_type(void* self, int64_t (*slot)()) {
    QStackedBarSeries_OnType((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QStackedBarSeries* self ```
int64_t q_stackedbarseries_qbase_type(void* self) {
    return QStackedBarSeries_QBaseType((QStackedBarSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_stackedbarseries_tr2(const char* s, const char* c) {
    libqt_string _str = QStackedBarSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_stackedbarseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QStackedBarSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setBarWidth)
///
/// ``` QStackedBarSeries* self, double width ```
void q_stackedbarseries_set_bar_width(void* self, double width) {
    QAbstractBarSeries_SetBarWidth((QAbstractBarSeries*)self, width);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barWidth)
///
/// ``` QStackedBarSeries* self ```
double q_stackedbarseries_bar_width(void* self) {
    return QAbstractBarSeries_BarWidth((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QStackedBarSeries* self, QBarSet* set ```
bool q_stackedbarseries_append(void* self, void* set) {
    return QAbstractBarSeries_Append((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#remove)
///
/// ``` QStackedBarSeries* self, QBarSet* set ```
bool q_stackedbarseries_remove(void* self, void* set) {
    return QAbstractBarSeries_Remove((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#take)
///
/// ``` QStackedBarSeries* self, QBarSet* set ```
bool q_stackedbarseries_take(void* self, void* set) {
    return QAbstractBarSeries_Take((QAbstractBarSeries*)self, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#append)
///
/// ``` QStackedBarSeries* self, QBarSet* sets[] ```
bool q_stackedbarseries_append_with_sets(void* self, void* sets[]) {
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
/// ``` QStackedBarSeries* self, int index, QBarSet* set ```
bool q_stackedbarseries_insert(void* self, int index, void* set) {
    return QAbstractBarSeries_Insert((QAbstractBarSeries*)self, index, (QBarSet*)set);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#count)
///
/// ``` QStackedBarSeries* self ```
int32_t q_stackedbarseries_count(void* self) {
    return QAbstractBarSeries_Count((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barSets)
///
/// ``` QStackedBarSeries* self ```
libqt_list /* of QBarSet* */ q_stackedbarseries_bar_sets(void* self) {
    libqt_list _arr = QAbstractBarSeries_BarSets((QAbstractBarSeries*)self);
    return _arr;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clear)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_clear(void* self) {
    QAbstractBarSeries_Clear((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_set_labels_visible(void* self) {
    QAbstractBarSeries_SetLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#isLabelsVisible)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_is_labels_visible(void* self) {
    return QAbstractBarSeries_IsLabelsVisible((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsFormat)
///
/// ``` QStackedBarSeries* self, const char* format ```
void q_stackedbarseries_set_labels_format(void* self, const char* format) {
    QAbstractBarSeries_SetLabelsFormat((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormat)
///
/// ``` QStackedBarSeries* self ```
const char* q_stackedbarseries_labels_format(void* self) {
    libqt_string _str = QAbstractBarSeries_LabelsFormat((QAbstractBarSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsAngle)
///
/// ``` QStackedBarSeries* self, double angle ```
void q_stackedbarseries_set_labels_angle(void* self, double angle) {
    QAbstractBarSeries_SetLabelsAngle((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngle)
///
/// ``` QStackedBarSeries* self ```
double q_stackedbarseries_labels_angle(void* self) {
    return QAbstractBarSeries_LabelsAngle((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPosition)
///
/// ``` QStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_stackedbarseries_set_labels_position(void* self, int64_t position) {
    QAbstractBarSeries_SetLabelsPosition((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPosition)
///
/// ``` QStackedBarSeries* self ```
int64_t q_stackedbarseries_labels_position(void* self) {
    return QAbstractBarSeries_LabelsPosition((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsPrecision)
///
/// ``` QStackedBarSeries* self, int precision ```
void q_stackedbarseries_set_labels_precision(void* self, int precision) {
    QAbstractBarSeries_SetLabelsPrecision((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecision)
///
/// ``` QStackedBarSeries* self ```
int32_t q_stackedbarseries_labels_precision(void* self) {
    return QAbstractBarSeries_LabelsPrecision((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#clicked)
///
/// ``` QStackedBarSeries* self, int index, QBarSet* barset ```
void q_stackedbarseries_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_Clicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_stackedbarseries_on_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Clicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#hovered)
///
/// ``` QStackedBarSeries* self, bool status, int index, QBarSet* barset ```
void q_stackedbarseries_hovered(void* self, bool status, int index, void* barset) {
    QAbstractBarSeries_Hovered((QAbstractBarSeries*)self, status, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, bool, int, QBarSet*) ```
void q_stackedbarseries_on_hovered(void* self, void (*slot)(void*, bool, int, void*)) {
    QAbstractBarSeries_Connect_Hovered((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#pressed)
///
/// ``` QStackedBarSeries* self, int index, QBarSet* barset ```
void q_stackedbarseries_pressed(void* self, int index, void* barset) {
    QAbstractBarSeries_Pressed((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_stackedbarseries_on_pressed(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Pressed((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#released)
///
/// ``` QStackedBarSeries* self, int index, QBarSet* barset ```
void q_stackedbarseries_released(void* self, int index, void* barset) {
    QAbstractBarSeries_Released((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_stackedbarseries_on_released(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_Released((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#doubleClicked)
///
/// ``` QStackedBarSeries* self, int index, QBarSet* barset ```
void q_stackedbarseries_double_clicked(void* self, int index, void* barset) {
    QAbstractBarSeries_DoubleClicked((QAbstractBarSeries*)self, index, (QBarSet*)barset);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int, QBarSet*) ```
void q_stackedbarseries_on_double_clicked(void* self, void (*slot)(void*, int, void*)) {
    QAbstractBarSeries_Connect_DoubleClicked((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#countChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_count_changed(void* self) {
    QAbstractBarSeries_CountChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_stackedbarseries_on_count_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_CountChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsVisibleChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_labels_visible_changed(void* self) {
    QAbstractBarSeries_LabelsVisibleChanged((QAbstractBarSeries*)self);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*) ```
void q_stackedbarseries_on_labels_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractBarSeries_Connect_LabelsVisibleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsFormatChanged)
///
/// ``` QStackedBarSeries* self, const char* format ```
void q_stackedbarseries_labels_format_changed(void* self, const char* format) {
    QAbstractBarSeries_LabelsFormatChanged((QAbstractBarSeries*)self, qstring(format));
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, const char*) ```
void q_stackedbarseries_on_labels_format_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractBarSeries_Connect_LabelsFormatChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPositionChanged)
///
/// ``` QStackedBarSeries* self, enum QAbstractBarSeries__LabelsPosition position ```
void q_stackedbarseries_labels_position_changed(void* self, int64_t position) {
    QAbstractBarSeries_LabelsPositionChanged((QAbstractBarSeries*)self, position);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, enum QAbstractBarSeries__LabelsPosition) ```
void q_stackedbarseries_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QAbstractBarSeries_Connect_LabelsPositionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsAngleChanged)
///
/// ``` QStackedBarSeries* self, double angle ```
void q_stackedbarseries_labels_angle_changed(void* self, double angle) {
    QAbstractBarSeries_LabelsAngleChanged((QAbstractBarSeries*)self, angle);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, double) ```
void q_stackedbarseries_on_labels_angle_changed(void* self, void (*slot)(void*, double)) {
    QAbstractBarSeries_Connect_LabelsAngleChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#labelsPrecisionChanged)
///
/// ``` QStackedBarSeries* self, int precision ```
void q_stackedbarseries_labels_precision_changed(void* self, int precision) {
    QAbstractBarSeries_LabelsPrecisionChanged((QAbstractBarSeries*)self, precision);
}

/// Inherited from QAbstractBarSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, int) ```
void q_stackedbarseries_on_labels_precision_changed(void* self, void (*slot)(void*, int)) {
    QAbstractBarSeries_Connect_LabelsPrecisionChanged((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsAdded)
///
/// ``` QStackedBarSeries* self, QBarSet* sets[] ```
void q_stackedbarseries_barsets_added(void* self, void* sets[]) {
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
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_stackedbarseries_on_barsets_added(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsAdded((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#barsetsRemoved)
///
/// ``` QStackedBarSeries* self, QBarSet* sets[] ```
void q_stackedbarseries_barsets_removed(void* self, void* sets[]) {
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
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractBarSeries*, QBarSet*[]) ```
void q_stackedbarseries_on_barsets_removed(void* self, void (*slot)(void*, void*)) {
    QAbstractBarSeries_Connect_BarsetsRemoved((QAbstractBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractBarSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractbarseries.html#setLabelsVisible)
///
/// ``` QStackedBarSeries* self, bool visible ```
void q_stackedbarseries_set_labels_visible1(void* self, bool visible) {
    QAbstractBarSeries_SetLabelsVisible1((QAbstractBarSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QStackedBarSeries* self, const char* name ```
void q_stackedbarseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QStackedBarSeries* self ```
const char* q_stackedbarseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QStackedBarSeries* self ```
double q_stackedbarseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QStackedBarSeries* self, double opacity ```
void q_stackedbarseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QStackedBarSeries* self ```
QChart* q_stackedbarseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QStackedBarSeries* self, QAbstractAxis* axis ```
bool q_stackedbarseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QStackedBarSeries* self, QAbstractAxis* axis ```
bool q_stackedbarseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QStackedBarSeries* self ```
libqt_list /* of QAbstractAxis* */ q_stackedbarseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_stackedbarseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_stackedbarseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_stackedbarseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QStackedBarSeries* self, void (*slot)(QAbstractSeries*) ```
void q_stackedbarseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QStackedBarSeries* self, bool visible ```
void q_stackedbarseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QStackedBarSeries* self, bool enable ```
void q_stackedbarseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QStackedBarSeries* self ```
const char* q_stackedbarseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QStackedBarSeries* self, const char* name ```
void q_stackedbarseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QStackedBarSeries* self ```
bool q_stackedbarseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QStackedBarSeries* self, bool b ```
bool q_stackedbarseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QStackedBarSeries* self ```
QThread* q_stackedbarseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QStackedBarSeries* self, QThread* thread ```
void q_stackedbarseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedBarSeries* self, int interval ```
int32_t q_stackedbarseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QStackedBarSeries* self, int id ```
void q_stackedbarseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QStackedBarSeries* self ```
libqt_list /* of QObject* */ q_stackedbarseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QStackedBarSeries* self, QObject* parent ```
void q_stackedbarseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QStackedBarSeries* self, QObject* filterObj ```
void q_stackedbarseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QStackedBarSeries* self, QObject* obj ```
void q_stackedbarseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_stackedbarseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedBarSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_stackedbarseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_stackedbarseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_stackedbarseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QStackedBarSeries* self, const char* name, QVariant* value ```
bool q_stackedbarseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QStackedBarSeries* self, const char* name ```
QVariant* q_stackedbarseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QStackedBarSeries* self ```
const char** q_stackedbarseries_dynamic_property_names(void* self) {
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
/// ``` QStackedBarSeries* self ```
QBindingStorage* q_stackedbarseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QStackedBarSeries* self ```
QBindingStorage* q_stackedbarseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QStackedBarSeries* self, void (*slot)(QObject*) ```
void q_stackedbarseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QStackedBarSeries* self ```
QObject* q_stackedbarseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QStackedBarSeries* self, const char* classname ```
bool q_stackedbarseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QStackedBarSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_stackedbarseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedbarseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QStackedBarSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_stackedbarseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QStackedBarSeries* self, QObject* param1 ```
void q_stackedbarseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QStackedBarSeries* self, void (*slot)(QObject*, QObject*) ```
void q_stackedbarseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QEvent* event ```
bool q_stackedbarseries_event(void* self, void* event) {
    return QStackedBarSeries_Event((QStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QEvent* event ```
bool q_stackedbarseries_qbase_event(void* self, void* event) {
    return QStackedBarSeries_QBaseEvent((QStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, bool (*slot)(QStackedBarSeries*, QEvent*) ```
void q_stackedbarseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QStackedBarSeries_OnEvent((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_stackedbarseries_event_filter(void* self, void* watched, void* event) {
    return QStackedBarSeries_EventFilter((QStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QObject* watched, QEvent* event ```
bool q_stackedbarseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QStackedBarSeries_QBaseEventFilter((QStackedBarSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, bool (*slot)(QStackedBarSeries*, QObject*, QEvent*) ```
void q_stackedbarseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QStackedBarSeries_OnEventFilter((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QTimerEvent* event ```
void q_stackedbarseries_timer_event(void* self, void* event) {
    QStackedBarSeries_TimerEvent((QStackedBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QTimerEvent* event ```
void q_stackedbarseries_qbase_timer_event(void* self, void* event) {
    QStackedBarSeries_QBaseTimerEvent((QStackedBarSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, void (*slot)(QStackedBarSeries*, QTimerEvent*) ```
void q_stackedbarseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QStackedBarSeries_OnTimerEvent((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QChildEvent* event ```
void q_stackedbarseries_child_event(void* self, void* event) {
    QStackedBarSeries_ChildEvent((QStackedBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QChildEvent* event ```
void q_stackedbarseries_qbase_child_event(void* self, void* event) {
    QStackedBarSeries_QBaseChildEvent((QStackedBarSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, void (*slot)(QStackedBarSeries*, QChildEvent*) ```
void q_stackedbarseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QStackedBarSeries_OnChildEvent((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QEvent* event ```
void q_stackedbarseries_custom_event(void* self, void* event) {
    QStackedBarSeries_CustomEvent((QStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QEvent* event ```
void q_stackedbarseries_qbase_custom_event(void* self, void* event) {
    QStackedBarSeries_QBaseCustomEvent((QStackedBarSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, void (*slot)(QStackedBarSeries*, QEvent*) ```
void q_stackedbarseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QStackedBarSeries_OnCustomEvent((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
void q_stackedbarseries_connect_notify(void* self, void* signal) {
    QStackedBarSeries_ConnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
void q_stackedbarseries_qbase_connect_notify(void* self, void* signal) {
    QStackedBarSeries_QBaseConnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, void (*slot)(QStackedBarSeries*, QMetaMethod*) ```
void q_stackedbarseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedBarSeries_OnConnectNotify((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
void q_stackedbarseries_disconnect_notify(void* self, void* signal) {
    QStackedBarSeries_DisconnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
void q_stackedbarseries_qbase_disconnect_notify(void* self, void* signal) {
    QStackedBarSeries_QBaseDisconnectNotify((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, void (*slot)(QStackedBarSeries*, QMetaMethod*) ```
void q_stackedbarseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QStackedBarSeries_OnDisconnectNotify((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self ```
QObject* q_stackedbarseries_sender(void* self) {
    return QStackedBarSeries_Sender((QStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self ```
QObject* q_stackedbarseries_qbase_sender(void* self) {
    return QStackedBarSeries_QBaseSender((QStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QObject* (*slot)() ```
void q_stackedbarseries_on_sender(void* self, QObject* (*slot)()) {
    QStackedBarSeries_OnSender((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self ```
int32_t q_stackedbarseries_sender_signal_index(void* self) {
    return QStackedBarSeries_SenderSignalIndex((QStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self ```
int32_t q_stackedbarseries_qbase_sender_signal_index(void* self) {
    return QStackedBarSeries_QBaseSenderSignalIndex((QStackedBarSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, int32_t (*slot)() ```
void q_stackedbarseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QStackedBarSeries_OnSenderSignalIndex((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, const char* signal ```
int32_t q_stackedbarseries_receivers(void* self, const char* signal) {
    return QStackedBarSeries_Receivers((QStackedBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, const char* signal ```
int32_t q_stackedbarseries_qbase_receivers(void* self, const char* signal) {
    return QStackedBarSeries_QBaseReceivers((QStackedBarSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, int32_t (*slot)(QStackedBarSeries*, const char*) ```
void q_stackedbarseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QStackedBarSeries_OnReceivers((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
bool q_stackedbarseries_is_signal_connected(void* self, void* signal) {
    return QStackedBarSeries_IsSignalConnected((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QStackedBarSeries* self, QMetaMethod* signal ```
bool q_stackedbarseries_qbase_is_signal_connected(void* self, void* signal) {
    return QStackedBarSeries_QBaseIsSignalConnected((QStackedBarSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QStackedBarSeries* self, bool (*slot)(QStackedBarSeries*, QMetaMethod*) ```
void q_stackedbarseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QStackedBarSeries_OnIsSignalConnected((QStackedBarSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QStackedBarSeries* self ```
void q_stackedbarseries_delete(void* self) {
    QStackedBarSeries_Delete((QStackedBarSeries*)(self));
}