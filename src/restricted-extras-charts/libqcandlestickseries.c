#include "libqabstractaxis.hpp"
#include "libqabstractseries.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "libqcandlestickset.hpp"
#include "libqchart.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcandlestickseries.hpp"
#include "libqcandlestickseries.h"

/// https://doc.qt.io/qt-6/qcandlestickseries.html

/// q_candlestickseries_new constructs a new QCandlestickSeries object.
///
///
QCandlestickSeries* q_candlestickseries_new() {
    return QCandlestickSeries_new();
}

/// q_candlestickseries_new2 constructs a new QCandlestickSeries object.
///
/// ``` QObject* parent ```
QCandlestickSeries* q_candlestickseries_new2(void* parent) {
    return QCandlestickSeries_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCandlestickSeries* self ```
QMetaObject* q_candlestickseries_meta_object(void* self) {
    return QCandlestickSeries_MetaObject((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, const char* param1 ```
void* q_candlestickseries_metacast(void* self, const char* param1) {
    return QCandlestickSeries_Metacast((QCandlestickSeries*)self, param1);
}

/// ``` QCandlestickSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickseries_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSeries_Metacall((QCandlestickSeries*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)(QCandlestickSeries*, enum QMetaObject__Call, int, void*) ```
void q_candlestickseries_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCandlestickSeries_OnMetacall((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickSeries* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_candlestickseries_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCandlestickSeries_QBaseMetacall((QCandlestickSeries*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_candlestickseries_tr(const char* s) {
    libqt_string _str = QCandlestickSeries_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#append)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_append(void* self, void* set) {
    return QCandlestickSeries_Append((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#remove)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_remove(void* self, void* set) {
    return QCandlestickSeries_Remove((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#append)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* sets[] ```
bool q_candlestickseries_append_with_sets(void* self, void* sets[]) {
    QCandlestickSet** sets_arr = (QCandlestickSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QCandlestickSet*)sets},
    };
    return QCandlestickSeries_AppendWithSets((QCandlestickSeries*)self, sets_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#remove)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* sets[] ```
bool q_candlestickseries_remove_with_sets(void* self, void* sets[]) {
    QCandlestickSet** sets_arr = (QCandlestickSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QCandlestickSet*)sets},
    };
    return QCandlestickSeries_RemoveWithSets((QCandlestickSeries*)self, sets_list);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#insert)
///
/// ``` QCandlestickSeries* self, int index, QCandlestickSet* set ```
bool q_candlestickseries_insert(void* self, int index, void* set) {
    return QCandlestickSeries_Insert((QCandlestickSeries*)self, index, (QCandlestickSet*)set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#take)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
bool q_candlestickseries_take(void* self, void* set) {
    return QCandlestickSeries_Take((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#clear)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_clear(void* self) {
    QCandlestickSeries_Clear((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#sets)
///
/// ``` QCandlestickSeries* self ```
libqt_list /* of QCandlestickSet* */ q_candlestickseries_sets(void* self) {
    libqt_list _arr = QCandlestickSeries_Sets((QCandlestickSeries*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#count)
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_count(void* self) {
    return QCandlestickSeries_Count((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#type)
///
/// ``` QCandlestickSeries* self ```
int64_t q_candlestickseries_type(void* self) {
    return QCandlestickSeries_Type((QCandlestickSeries*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCandlestickSeries* self, int64_t (*slot)() ```
void q_candlestickseries_on_type(void* self, int64_t (*slot)()) {
    QCandlestickSeries_OnType((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCandlestickSeries* self ```
int64_t q_candlestickseries_qbase_type(void* self) {
    return QCandlestickSeries_QBaseType((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setMaximumColumnWidth)
///
/// ``` QCandlestickSeries* self, double maximumColumnWidth ```
void q_candlestickseries_set_maximum_column_width(void* self, double maximumColumnWidth) {
    QCandlestickSeries_SetMaximumColumnWidth((QCandlestickSeries*)self, maximumColumnWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#maximumColumnWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_maximum_column_width(void* self) {
    return QCandlestickSeries_MaximumColumnWidth((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setMinimumColumnWidth)
///
/// ``` QCandlestickSeries* self, double minimumColumnWidth ```
void q_candlestickseries_set_minimum_column_width(void* self, double minimumColumnWidth) {
    QCandlestickSeries_SetMinimumColumnWidth((QCandlestickSeries*)self, minimumColumnWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#minimumColumnWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_minimum_column_width(void* self) {
    return QCandlestickSeries_MinimumColumnWidth((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBodyWidth)
///
/// ``` QCandlestickSeries* self, double bodyWidth ```
void q_candlestickseries_set_body_width(void* self, double bodyWidth) {
    QCandlestickSeries_SetBodyWidth((QCandlestickSeries*)self, bodyWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_body_width(void* self) {
    return QCandlestickSeries_BodyWidth((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBodyOutlineVisible)
///
/// ``` QCandlestickSeries* self, bool bodyOutlineVisible ```
void q_candlestickseries_set_body_outline_visible(void* self, bool bodyOutlineVisible) {
    QCandlestickSeries_SetBodyOutlineVisible((QCandlestickSeries*)self, bodyOutlineVisible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyOutlineVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_body_outline_visible(void* self) {
    return QCandlestickSeries_BodyOutlineVisible((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setCapsWidth)
///
/// ``` QCandlestickSeries* self, double capsWidth ```
void q_candlestickseries_set_caps_width(void* self, double capsWidth) {
    QCandlestickSeries_SetCapsWidth((QCandlestickSeries*)self, capsWidth);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsWidth)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_caps_width(void* self) {
    return QCandlestickSeries_CapsWidth((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setCapsVisible)
///
/// ``` QCandlestickSeries* self, bool capsVisible ```
void q_candlestickseries_set_caps_visible(void* self, bool capsVisible) {
    QCandlestickSeries_SetCapsVisible((QCandlestickSeries*)self, capsVisible);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_caps_visible(void* self) {
    return QCandlestickSeries_CapsVisible((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setIncreasingColor)
///
/// ``` QCandlestickSeries* self, QColor* increasingColor ```
void q_candlestickseries_set_increasing_color(void* self, void* increasingColor) {
    QCandlestickSeries_SetIncreasingColor((QCandlestickSeries*)self, (QColor*)increasingColor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#increasingColor)
///
/// ``` QCandlestickSeries* self ```
QColor* q_candlestickseries_increasing_color(void* self) {
    return QCandlestickSeries_IncreasingColor((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setDecreasingColor)
///
/// ``` QCandlestickSeries* self, QColor* decreasingColor ```
void q_candlestickseries_set_decreasing_color(void* self, void* decreasingColor) {
    QCandlestickSeries_SetDecreasingColor((QCandlestickSeries*)self, (QColor*)decreasingColor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#decreasingColor)
///
/// ``` QCandlestickSeries* self ```
QColor* q_candlestickseries_decreasing_color(void* self) {
    return QCandlestickSeries_DecreasingColor((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setBrush)
///
/// ``` QCandlestickSeries* self, QBrush* brush ```
void q_candlestickseries_set_brush(void* self, void* brush) {
    QCandlestickSeries_SetBrush((QCandlestickSeries*)self, (QBrush*)brush);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#brush)
///
/// ``` QCandlestickSeries* self ```
QBrush* q_candlestickseries_brush(void* self) {
    return QCandlestickSeries_Brush((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#setPen)
///
/// ``` QCandlestickSeries* self, QPen* pen ```
void q_candlestickseries_set_pen(void* self, void* pen) {
    QCandlestickSeries_SetPen((QCandlestickSeries*)self, (QPen*)pen);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#pen)
///
/// ``` QCandlestickSeries* self ```
QPen* q_candlestickseries_pen(void* self) {
    return QCandlestickSeries_Pen((QCandlestickSeries*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#clicked)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_clicked(void* self, void* set) {
    QCandlestickSeries_Clicked((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_clicked(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_Clicked((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#hovered)
///
/// ``` QCandlestickSeries* self, bool status, QCandlestickSet* set ```
void q_candlestickseries_hovered(void* self, bool status, void* set) {
    QCandlestickSeries_Hovered((QCandlestickSeries*)self, status, (QCandlestickSet*)set);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, bool, QCandlestickSet*) ```
void q_candlestickseries_on_hovered(void* self, void (*slot)(void*, bool, void*)) {
    QCandlestickSeries_Connect_Hovered((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#pressed)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_pressed(void* self, void* set) {
    QCandlestickSeries_Pressed((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_pressed(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_Pressed((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#released)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_released(void* self, void* set) {
    QCandlestickSeries_Released((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_released(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_Released((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#doubleClicked)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* set ```
void q_candlestickseries_double_clicked(void* self, void* set) {
    QCandlestickSeries_DoubleClicked((QCandlestickSeries*)self, (QCandlestickSet*)set);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*) ```
void q_candlestickseries_on_double_clicked(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_DoubleClicked((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#candlestickSetsAdded)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* sets[] ```
void q_candlestickseries_candlestick_sets_added(void* self, void* sets[]) {
    QCandlestickSet** sets_arr = (QCandlestickSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QCandlestickSet*)sets},
    };
    QCandlestickSeries_CandlestickSetsAdded((QCandlestickSeries*)self, sets_list);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*[]) ```
void q_candlestickseries_on_candlestick_sets_added(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_CandlestickSetsAdded((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#candlestickSetsRemoved)
///
/// ``` QCandlestickSeries* self, QCandlestickSet* sets[] ```
void q_candlestickseries_candlestick_sets_removed(void* self, void* sets[]) {
    QCandlestickSet** sets_arr = (QCandlestickSet**)sets;
    size_t sets_len = 0;
    while (sets_arr[sets_len] != NULL) {
        sets_len++;
    }
    libqt_list sets_list = {
        .len = sets_len,
        .data = {(QCandlestickSet*)sets},
    };
    QCandlestickSeries_CandlestickSetsRemoved((QCandlestickSeries*)self, sets_list);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QCandlestickSet*[]) ```
void q_candlestickseries_on_candlestick_sets_removed(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_Connect_CandlestickSetsRemoved((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#countChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_count_changed(void* self) {
    QCandlestickSeries_CountChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_count_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_CountChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#maximumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_maximum_column_width_changed(void* self) {
    QCandlestickSeries_MaximumColumnWidthChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_maximum_column_width_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_MaximumColumnWidthChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#minimumColumnWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_minimum_column_width_changed(void* self) {
    QCandlestickSeries_MinimumColumnWidthChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_minimum_column_width_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_MinimumColumnWidthChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_body_width_changed(void* self) {
    QCandlestickSeries_BodyWidthChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_body_width_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_BodyWidthChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#bodyOutlineVisibilityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_body_outline_visibility_changed(void* self) {
    QCandlestickSeries_BodyOutlineVisibilityChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_body_outline_visibility_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_BodyOutlineVisibilityChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsWidthChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_caps_width_changed(void* self) {
    QCandlestickSeries_CapsWidthChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_caps_width_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_CapsWidthChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#capsVisibilityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_caps_visibility_changed(void* self) {
    QCandlestickSeries_CapsVisibilityChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_caps_visibility_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_CapsVisibilityChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#increasingColorChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_increasing_color_changed(void* self) {
    QCandlestickSeries_IncreasingColorChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_increasing_color_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_IncreasingColorChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#decreasingColorChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_decreasing_color_changed(void* self) {
    QCandlestickSeries_DecreasingColorChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_decreasing_color_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_DecreasingColorChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#brushChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_brush_changed(void* self) {
    QCandlestickSeries_BrushChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_brush_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_BrushChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcandlestickseries.html#penChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_pen_changed(void* self) {
    QCandlestickSeries_PenChanged((QCandlestickSeries*)self);
}

/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*) ```
void q_candlestickseries_on_pen_changed(void* self, void (*slot)(void*)) {
    QCandlestickSeries_Connect_PenChanged((QCandlestickSeries*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_candlestickseries_tr2(const char* s, const char* c) {
    libqt_string _str = QCandlestickSeries_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_candlestickseries_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCandlestickSeries_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setName)
///
/// ``` QCandlestickSeries* self, const char* name ```
void q_candlestickseries_set_name(void* self, const char* name) {
    QAbstractSeries_SetName((QAbstractSeries*)self, qstring(name));
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#name)
///
/// ``` QCandlestickSeries* self ```
const char* q_candlestickseries_name(void* self) {
    libqt_string _str = QAbstractSeries_Name((QAbstractSeries*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_set_visible(void* self) {
    QAbstractSeries_SetVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#isVisible)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_visible(void* self) {
    return QAbstractSeries_IsVisible((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacity)
///
/// ``` QCandlestickSeries* self ```
double q_candlestickseries_opacity(void* self) {
    return QAbstractSeries_Opacity((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setOpacity)
///
/// ``` QCandlestickSeries* self, double opacity ```
void q_candlestickseries_set_opacity(void* self, double opacity) {
    QAbstractSeries_SetOpacity((QAbstractSeries*)self, opacity);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_set_use_open_g_l(void* self) {
    QAbstractSeries_SetUseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGL)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_use_open_g_l(void* self) {
    return QAbstractSeries_UseOpenGL((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#chart)
///
/// ``` QCandlestickSeries* self ```
QChart* q_candlestickseries_chart(void* self) {
    return QAbstractSeries_Chart((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachAxis)
///
/// ``` QCandlestickSeries* self, QAbstractAxis* axis ```
bool q_candlestickseries_attach_axis(void* self, void* axis) {
    return QAbstractSeries_AttachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#detachAxis)
///
/// ``` QCandlestickSeries* self, QAbstractAxis* axis ```
bool q_candlestickseries_detach_axis(void* self, void* axis) {
    return QAbstractSeries_DetachAxis((QAbstractSeries*)self, (QAbstractAxis*)axis);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#attachedAxes)
///
/// ``` QCandlestickSeries* self ```
libqt_list /* of QAbstractAxis* */ q_candlestickseries_attached_axes(void* self) {
    libqt_list _arr = QAbstractSeries_AttachedAxes((QAbstractSeries*)self);
    return _arr;
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#show)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_show(void* self) {
    QAbstractSeries_Show((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#hide)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_hide(void* self) {
    QAbstractSeries_Hide((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#nameChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_name_changed(void* self) {
    QAbstractSeries_NameChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_name_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_NameChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#visibleChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_visible_changed(void* self) {
    QAbstractSeries_VisibleChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_visible_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_VisibleChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#opacityChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_opacity_changed(void* self) {
    QAbstractSeries_OpacityChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_opacity_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_OpacityChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#useOpenGLChanged)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_use_open_g_l_changed(void* self) {
    QAbstractSeries_UseOpenGLChanged((QAbstractSeries*)self);
}

/// Inherited from QAbstractSeries
///
/// ``` QCandlestickSeries* self, void (*slot)(QAbstractSeries*) ```
void q_candlestickseries_on_use_open_g_l_changed(void* self, void (*slot)(void*)) {
    QAbstractSeries_Connect_UseOpenGLChanged((QAbstractSeries*)self, (intptr_t)slot);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setVisible)
///
/// ``` QCandlestickSeries* self, bool visible ```
void q_candlestickseries_set_visible1(void* self, bool visible) {
    QAbstractSeries_SetVisible1((QAbstractSeries*)self, visible);
}

/// Inherited from QAbstractSeries
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractseries.html#setUseOpenGL)
///
/// ``` QCandlestickSeries* self, bool enable ```
void q_candlestickseries_set_use_open_g_l1(void* self, bool enable) {
    QAbstractSeries_SetUseOpenGL1((QAbstractSeries*)self, enable);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCandlestickSeries* self ```
const char* q_candlestickseries_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCandlestickSeries* self, const char* name ```
void q_candlestickseries_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCandlestickSeries* self ```
bool q_candlestickseries_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCandlestickSeries* self, bool b ```
bool q_candlestickseries_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCandlestickSeries* self ```
QThread* q_candlestickseries_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCandlestickSeries* self, QThread* thread ```
void q_candlestickseries_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSeries* self, int interval ```
int32_t q_candlestickseries_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCandlestickSeries* self, int id ```
void q_candlestickseries_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCandlestickSeries* self ```
libqt_list /* of QObject* */ q_candlestickseries_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCandlestickSeries* self, QObject* parent ```
void q_candlestickseries_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCandlestickSeries* self, QObject* filterObj ```
void q_candlestickseries_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCandlestickSeries* self, QObject* obj ```
void q_candlestickseries_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_candlestickseries_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSeries* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_candlestickseries_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_candlestickseries_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_candlestickseries_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCandlestickSeries* self, const char* name, QVariant* value ```
bool q_candlestickseries_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCandlestickSeries* self, const char* name ```
QVariant* q_candlestickseries_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCandlestickSeries* self ```
const char** q_candlestickseries_dynamic_property_names(void* self) {
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
/// ``` QCandlestickSeries* self ```
QBindingStorage* q_candlestickseries_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCandlestickSeries* self ```
QBindingStorage* q_candlestickseries_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCandlestickSeries* self, void (*slot)(QObject*) ```
void q_candlestickseries_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCandlestickSeries* self, const char* classname ```
bool q_candlestickseries_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCandlestickSeries* self, int interval, enum Qt__TimerType timerType ```
int32_t q_candlestickseries_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickseries_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCandlestickSeries* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_candlestickseries_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCandlestickSeries* self, QObject* param1 ```
void q_candlestickseries_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCandlestickSeries* self, void (*slot)(QObject*, QObject*) ```
void q_candlestickseries_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
bool q_candlestickseries_event(void* self, void* event) {
    return QCandlestickSeries_Event((QCandlestickSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
bool q_candlestickseries_qbase_event(void* self, void* event) {
    return QCandlestickSeries_QBaseEvent((QCandlestickSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QEvent*) ```
void q_candlestickseries_on_event(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSeries_OnEvent((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* watched, QEvent* event ```
bool q_candlestickseries_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSeries_EventFilter((QCandlestickSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* watched, QEvent* event ```
bool q_candlestickseries_qbase_event_filter(void* self, void* watched, void* event) {
    return QCandlestickSeries_QBaseEventFilter((QCandlestickSeries*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QObject*, QEvent*) ```
void q_candlestickseries_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCandlestickSeries_OnEventFilter((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QTimerEvent* event ```
void q_candlestickseries_timer_event(void* self, void* event) {
    QCandlestickSeries_TimerEvent((QCandlestickSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QTimerEvent* event ```
void q_candlestickseries_qbase_timer_event(void* self, void* event) {
    QCandlestickSeries_QBaseTimerEvent((QCandlestickSeries*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QTimerEvent*) ```
void q_candlestickseries_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_OnTimerEvent((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QChildEvent* event ```
void q_candlestickseries_child_event(void* self, void* event) {
    QCandlestickSeries_ChildEvent((QCandlestickSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QChildEvent* event ```
void q_candlestickseries_qbase_child_event(void* self, void* event) {
    QCandlestickSeries_QBaseChildEvent((QCandlestickSeries*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QChildEvent*) ```
void q_candlestickseries_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_OnChildEvent((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
void q_candlestickseries_custom_event(void* self, void* event) {
    QCandlestickSeries_CustomEvent((QCandlestickSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QEvent* event ```
void q_candlestickseries_qbase_custom_event(void* self, void* event) {
    QCandlestickSeries_QBaseCustomEvent((QCandlestickSeries*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QEvent*) ```
void q_candlestickseries_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_OnCustomEvent((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_connect_notify(void* self, void* signal) {
    QCandlestickSeries_ConnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_qbase_connect_notify(void* self, void* signal) {
    QCandlestickSeries_QBaseConnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_OnConnectNotify((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_disconnect_notify(void* self, void* signal) {
    QCandlestickSeries_DisconnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
void q_candlestickseries_qbase_disconnect_notify(void* self, void* signal) {
    QCandlestickSeries_QBaseDisconnectNotify((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, void (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCandlestickSeries_OnDisconnectNotify((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_sender(void* self) {
    return QCandlestickSeries_Sender((QCandlestickSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self ```
QObject* q_candlestickseries_qbase_sender(void* self) {
    return QCandlestickSeries_QBaseSender((QCandlestickSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QObject* (*slot)() ```
void q_candlestickseries_on_sender(void* self, QObject* (*slot)()) {
    QCandlestickSeries_OnSender((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_sender_signal_index(void* self) {
    return QCandlestickSeries_SenderSignalIndex((QCandlestickSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self ```
int32_t q_candlestickseries_qbase_sender_signal_index(void* self) {
    return QCandlestickSeries_QBaseSenderSignalIndex((QCandlestickSeries*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)() ```
void q_candlestickseries_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCandlestickSeries_OnSenderSignalIndex((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, const char* signal ```
int32_t q_candlestickseries_receivers(void* self, const char* signal) {
    return QCandlestickSeries_Receivers((QCandlestickSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, const char* signal ```
int32_t q_candlestickseries_qbase_receivers(void* self, const char* signal) {
    return QCandlestickSeries_QBaseReceivers((QCandlestickSeries*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, int32_t (*slot)(QCandlestickSeries*, const char*) ```
void q_candlestickseries_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCandlestickSeries_OnReceivers((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
bool q_candlestickseries_is_signal_connected(void* self, void* signal) {
    return QCandlestickSeries_IsSignalConnected((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCandlestickSeries* self, QMetaMethod* signal ```
bool q_candlestickseries_qbase_is_signal_connected(void* self, void* signal) {
    return QCandlestickSeries_QBaseIsSignalConnected((QCandlestickSeries*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCandlestickSeries* self, bool (*slot)(QCandlestickSeries*, QMetaMethod*) ```
void q_candlestickseries_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCandlestickSeries_OnIsSignalConnected((QCandlestickSeries*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCandlestickSeries* self ```
void q_candlestickseries_delete(void* self) {
    QCandlestickSeries_Delete((QCandlestickSeries*)(self));
}