#include "libqabstractaxis.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "libqvalueaxis.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqcategoryaxis.hpp"
#include "libqcategoryaxis.h"

/// https://doc.qt.io/qt-6/qcategoryaxis.html

/// q_categoryaxis_new constructs a new QCategoryAxis object.
///
///
QCategoryAxis* q_categoryaxis_new() {
    return QCategoryAxis_new();
}

/// q_categoryaxis_new2 constructs a new QCategoryAxis object.
///
/// ``` QObject* parent ```
QCategoryAxis* q_categoryaxis_new2(void* parent) {
    return QCategoryAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QCategoryAxis* self ```
QMetaObject* q_categoryaxis_meta_object(void* self) {
    return QCategoryAxis_MetaObject((QCategoryAxis*)self);
}

/// ``` QCategoryAxis* self, const char* param1 ```
void* q_categoryaxis_metacast(void* self, const char* param1) {
    return QCategoryAxis_Metacast((QCategoryAxis*)self, param1);
}

/// ``` QCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_categoryaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCategoryAxis_Metacall((QCategoryAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QCategoryAxis* self, int32_t (*slot)(QCategoryAxis*, enum QMetaObject__Call, int, void*) ```
void q_categoryaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCategoryAxis_OnMetacall((QCategoryAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCategoryAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_categoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCategoryAxis_QBaseMetacall((QCategoryAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_categoryaxis_tr(const char* s) {
    libqt_string _str = QCategoryAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#type)
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_type(void* self) {
    return QCategoryAxis_Type((QCategoryAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QCategoryAxis* self, int64_t (*slot)() ```
void q_categoryaxis_on_type(void* self, int64_t (*slot)()) {
    QCategoryAxis_OnType((QCategoryAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_qbase_type(void* self) {
    return QCategoryAxis_QBaseType((QCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#append)
///
/// ``` QCategoryAxis* self, const char* label, double categoryEndValue ```
void q_categoryaxis_append(void* self, const char* label, double categoryEndValue) {
    QCategoryAxis_Append((QCategoryAxis*)self, qstring(label), categoryEndValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#remove)
///
/// ``` QCategoryAxis* self, const char* label ```
void q_categoryaxis_remove(void* self, const char* label) {
    QCategoryAxis_Remove((QCategoryAxis*)self, qstring(label));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#replaceLabel)
///
/// ``` QCategoryAxis* self, const char* oldLabel, const char* newLabel ```
void q_categoryaxis_replace_label(void* self, const char* oldLabel, const char* newLabel) {
    QCategoryAxis_ReplaceLabel((QCategoryAxis*)self, qstring(oldLabel), qstring(newLabel));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#startValue)
///
/// ``` QCategoryAxis* self ```
double q_categoryaxis_start_value(void* self) {
    return QCategoryAxis_StartValue((QCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#setStartValue)
///
/// ``` QCategoryAxis* self, double min ```
void q_categoryaxis_set_start_value(void* self, double min) {
    QCategoryAxis_SetStartValue((QCategoryAxis*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#endValue)
///
/// ``` QCategoryAxis* self, const char* categoryLabel ```
double q_categoryaxis_end_value(void* self, const char* categoryLabel) {
    return QCategoryAxis_EndValue((QCategoryAxis*)self, qstring(categoryLabel));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#categoriesLabels)
///
/// ``` QCategoryAxis* self ```
const char** q_categoryaxis_categories_labels(void* self) {
    libqt_list _arr = QCategoryAxis_CategoriesLabels((QCategoryAxis*)self);
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

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#count)
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_count(void* self) {
    return QCategoryAxis_Count((QCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#labelsPosition)
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_labels_position(void* self) {
    return QCategoryAxis_LabelsPosition((QCategoryAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#setLabelsPosition)
///
/// ``` QCategoryAxis* self, enum QCategoryAxis__AxisLabelsPosition position ```
void q_categoryaxis_set_labels_position(void* self, int64_t position) {
    QCategoryAxis_SetLabelsPosition((QCategoryAxis*)self, position);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#categoriesChanged)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_categories_changed(void* self) {
    QCategoryAxis_CategoriesChanged((QCategoryAxis*)self);
}

/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*) ```
void q_categoryaxis_on_categories_changed(void* self, void (*slot)(void*)) {
    QCategoryAxis_Connect_CategoriesChanged((QCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#labelsPositionChanged)
///
/// ``` QCategoryAxis* self, enum QCategoryAxis__AxisLabelsPosition position ```
void q_categoryaxis_labels_position_changed(void* self, int64_t position) {
    QCategoryAxis_LabelsPositionChanged((QCategoryAxis*)self, position);
}

/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, enum QCategoryAxis__AxisLabelsPosition) ```
void q_categoryaxis_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QCategoryAxis_Connect_LabelsPositionChanged((QCategoryAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_categoryaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QCategoryAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_categoryaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCategoryAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcategoryaxis.html#startValue)
///
/// ``` QCategoryAxis* self, const char* categoryLabel ```
double q_categoryaxis_start_value1(void* self, const char* categoryLabel) {
    return QCategoryAxis_StartValue1((QCategoryAxis*)self, qstring(categoryLabel));
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMin)
///
/// ``` QCategoryAxis* self, double min ```
void q_categoryaxis_set_min(void* self, double min) {
    QValueAxis_SetMin((QValueAxis*)self, min);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#min)
///
/// ``` QCategoryAxis* self ```
double q_categoryaxis_min(void* self) {
    return QValueAxis_Min((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMax)
///
/// ``` QCategoryAxis* self, double max ```
void q_categoryaxis_set_max(void* self, double max) {
    QValueAxis_SetMax((QValueAxis*)self, max);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#max)
///
/// ``` QCategoryAxis* self ```
double q_categoryaxis_max(void* self) {
    return QValueAxis_Max((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setRange)
///
/// ``` QCategoryAxis* self, double min, double max ```
void q_categoryaxis_set_range(void* self, double min, double max) {
    QValueAxis_SetRange((QValueAxis*)self, min, max);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickCount)
///
/// ``` QCategoryAxis* self, int count ```
void q_categoryaxis_set_tick_count(void* self, int count) {
    QValueAxis_SetTickCount((QValueAxis*)self, count);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCount)
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_tick_count(void* self) {
    return QValueAxis_TickCount((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMinorTickCount)
///
/// ``` QCategoryAxis* self, int count ```
void q_categoryaxis_set_minor_tick_count(void* self, int count) {
    QValueAxis_SetMinorTickCount((QValueAxis*)self, count);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCount)
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_minor_tick_count(void* self) {
    return QValueAxis_MinorTickCount((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickAnchor)
///
/// ``` QCategoryAxis* self, double anchor ```
void q_categoryaxis_set_tick_anchor(void* self, double anchor) {
    QValueAxis_SetTickAnchor((QValueAxis*)self, anchor);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchor)
///
/// ``` QCategoryAxis* self ```
double q_categoryaxis_tick_anchor(void* self) {
    return QValueAxis_TickAnchor((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickInterval)
///
/// ``` QCategoryAxis* self, double insterval ```
void q_categoryaxis_set_tick_interval(void* self, double insterval) {
    QValueAxis_SetTickInterval((QValueAxis*)self, insterval);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickInterval)
///
/// ``` QCategoryAxis* self ```
double q_categoryaxis_tick_interval(void* self) {
    return QValueAxis_TickInterval((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickType)
///
/// ``` QCategoryAxis* self, enum QValueAxis__TickType typeVal ```
void q_categoryaxis_set_tick_type(void* self, int64_t typeVal) {
    QValueAxis_SetTickType((QValueAxis*)self, typeVal);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickType)
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_tick_type(void* self) {
    return QValueAxis_TickType((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setLabelFormat)
///
/// ``` QCategoryAxis* self, const char* format ```
void q_categoryaxis_set_label_format(void* self, const char* format) {
    QValueAxis_SetLabelFormat((QValueAxis*)self, qstring(format));
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormat)
///
/// ``` QCategoryAxis* self ```
const char* q_categoryaxis_label_format(void* self) {
    libqt_string _str = QValueAxis_LabelFormat((QValueAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#applyNiceNumbers)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_apply_nice_numbers(void* self) {
    QValueAxis_ApplyNiceNumbers((QValueAxis*)self);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
///
/// ``` QCategoryAxis* self, double min ```
void q_categoryaxis_min_changed(void* self, double min) {
    QValueAxis_MinChanged((QValueAxis*)self, min);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, double) ```
void q_categoryaxis_on_min_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MinChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
///
/// ``` QCategoryAxis* self, double max ```
void q_categoryaxis_max_changed(void* self, double max) {
    QValueAxis_MaxChanged((QValueAxis*)self, max);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, double) ```
void q_categoryaxis_on_max_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MaxChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
///
/// ``` QCategoryAxis* self, double min, double max ```
void q_categoryaxis_range_changed(void* self, double min, double max) {
    QValueAxis_RangeChanged((QValueAxis*)self, min, max);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, double, double) ```
void q_categoryaxis_on_range_changed(void* self, void (*slot)(void*, double, double)) {
    QValueAxis_Connect_RangeChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
///
/// ``` QCategoryAxis* self, int tickCount ```
void q_categoryaxis_tick_count_changed(void* self, int tickCount) {
    QValueAxis_TickCountChanged((QValueAxis*)self, tickCount);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, int) ```
void q_categoryaxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_TickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
///
/// ``` QCategoryAxis* self, int tickCount ```
void q_categoryaxis_minor_tick_count_changed(void* self, int tickCount) {
    QValueAxis_MinorTickCountChanged((QValueAxis*)self, tickCount);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, int) ```
void q_categoryaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_MinorTickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
///
/// ``` QCategoryAxis* self, const char* format ```
void q_categoryaxis_label_format_changed(void* self, const char* format) {
    QValueAxis_LabelFormatChanged((QValueAxis*)self, qstring(format));
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, const char*) ```
void q_categoryaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*)) {
    QValueAxis_Connect_LabelFormatChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
///
/// ``` QCategoryAxis* self, double interval ```
void q_categoryaxis_tick_interval_changed(void* self, double interval) {
    QValueAxis_TickIntervalChanged((QValueAxis*)self, interval);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, double) ```
void q_categoryaxis_on_tick_interval_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickIntervalChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
///
/// ``` QCategoryAxis* self, double anchor ```
void q_categoryaxis_tick_anchor_changed(void* self, double anchor) {
    QValueAxis_TickAnchorChanged((QValueAxis*)self, anchor);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, double) ```
void q_categoryaxis_on_tick_anchor_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickAnchorChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QValueAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
///
/// ``` QCategoryAxis* self, enum QValueAxis__TickType typeVal ```
void q_categoryaxis_tick_type_changed(void* self, int64_t typeVal) {
    QValueAxis_TickTypeChanged((QValueAxis*)self, typeVal);
}

/// Inherited from QValueAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QValueAxis*, enum QValueAxis__TickType) ```
void q_categoryaxis_on_tick_type_changed(void* self, void (*slot)(void*, int64_t)) {
    QValueAxis_Connect_TickTypeChanged((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QCategoryAxis* self ```
QPen* q_categoryaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QCategoryAxis* self ```
QPen* q_categoryaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QCategoryAxis* self ```
QPen* q_categoryaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QCategoryAxis* self ```
QBrush* q_categoryaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QCategoryAxis* self, QFont* font ```
void q_categoryaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QCategoryAxis* self ```
QFont* q_categoryaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QCategoryAxis* self, int angle ```
void q_categoryaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QCategoryAxis* self ```
QBrush* q_categoryaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QCategoryAxis* self, QFont* font ```
void q_categoryaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QCategoryAxis* self ```
QFont* q_categoryaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QCategoryAxis* self, const char* title ```
void q_categoryaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QCategoryAxis* self ```
const char* q_categoryaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QCategoryAxis* self ```
QPen* q_categoryaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QCategoryAxis* self ```
QBrush* q_categoryaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QCategoryAxis* self ```
QColor* q_categoryaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QCategoryAxis* self ```
int64_t q_categoryaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_categoryaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_categoryaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QCategoryAxis* self, QFont* pen ```
void q_categoryaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_categoryaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QCategoryAxis* self, int angle ```
void q_categoryaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_categoryaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_categoryaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_categoryaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QCategoryAxis* self, const char* title ```
void q_categoryaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_categoryaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_categoryaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QCategoryAxis* self, QFont* font ```
void q_categoryaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_categoryaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QCategoryAxis* self, QColor* color ```
void q_categoryaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_categoryaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QCategoryAxis* self, QPen* pen ```
void q_categoryaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_categoryaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QCategoryAxis* self, QBrush* brush ```
void q_categoryaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_categoryaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QCategoryAxis* self, bool reverse ```
void q_categoryaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QCategoryAxis* self, bool editable ```
void q_categoryaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QCategoryAxis* self, bool labelsTruncated ```
void q_categoryaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QCategoryAxis* self, bool truncateLabels ```
void q_categoryaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QCategoryAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_categoryaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QCategoryAxis* self, bool visible ```
void q_categoryaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QCategoryAxis* self, bool reverse ```
void q_categoryaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QCategoryAxis* self, bool editable ```
void q_categoryaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QCategoryAxis* self, bool truncateLabels ```
void q_categoryaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QCategoryAxis* self ```
const char* q_categoryaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QCategoryAxis* self, const char* name ```
void q_categoryaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QCategoryAxis* self ```
bool q_categoryaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QCategoryAxis* self, bool b ```
bool q_categoryaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QCategoryAxis* self ```
QThread* q_categoryaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QCategoryAxis* self, QThread* thread ```
void q_categoryaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCategoryAxis* self, int interval ```
int32_t q_categoryaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QCategoryAxis* self, int id ```
void q_categoryaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QCategoryAxis* self ```
libqt_list /* of QObject* */ q_categoryaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QCategoryAxis* self, QObject* parent ```
void q_categoryaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QCategoryAxis* self, QObject* filterObj ```
void q_categoryaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QCategoryAxis* self, QObject* obj ```
void q_categoryaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_categoryaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCategoryAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_categoryaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_categoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_categoryaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QCategoryAxis* self, const char* name, QVariant* value ```
bool q_categoryaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QCategoryAxis* self, const char* name ```
QVariant* q_categoryaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QCategoryAxis* self ```
const char** q_categoryaxis_dynamic_property_names(void* self) {
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
/// ``` QCategoryAxis* self ```
QBindingStorage* q_categoryaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QCategoryAxis* self ```
QBindingStorage* q_categoryaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QCategoryAxis* self, void (*slot)(QObject*) ```
void q_categoryaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QCategoryAxis* self ```
QObject* q_categoryaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QCategoryAxis* self, const char* classname ```
bool q_categoryaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QCategoryAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_categoryaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_categoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QCategoryAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_categoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QCategoryAxis* self, QObject* param1 ```
void q_categoryaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QCategoryAxis* self, void (*slot)(QObject*, QObject*) ```
void q_categoryaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QEvent* event ```
bool q_categoryaxis_event(void* self, void* event) {
    return QCategoryAxis_Event((QCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QEvent* event ```
bool q_categoryaxis_qbase_event(void* self, void* event) {
    return QCategoryAxis_QBaseEvent((QCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, bool (*slot)(QCategoryAxis*, QEvent*) ```
void q_categoryaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QCategoryAxis_OnEvent((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_categoryaxis_event_filter(void* self, void* watched, void* event) {
    return QCategoryAxis_EventFilter((QCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QObject* watched, QEvent* event ```
bool q_categoryaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QCategoryAxis_QBaseEventFilter((QCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, bool (*slot)(QCategoryAxis*, QObject*, QEvent*) ```
void q_categoryaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCategoryAxis_OnEventFilter((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QTimerEvent* event ```
void q_categoryaxis_timer_event(void* self, void* event) {
    QCategoryAxis_TimerEvent((QCategoryAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QTimerEvent* event ```
void q_categoryaxis_qbase_timer_event(void* self, void* event) {
    QCategoryAxis_QBaseTimerEvent((QCategoryAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, QTimerEvent*) ```
void q_categoryaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnTimerEvent((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QChildEvent* event ```
void q_categoryaxis_child_event(void* self, void* event) {
    QCategoryAxis_ChildEvent((QCategoryAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QChildEvent* event ```
void q_categoryaxis_qbase_child_event(void* self, void* event) {
    QCategoryAxis_QBaseChildEvent((QCategoryAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, QChildEvent*) ```
void q_categoryaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnChildEvent((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QEvent* event ```
void q_categoryaxis_custom_event(void* self, void* event) {
    QCategoryAxis_CustomEvent((QCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QEvent* event ```
void q_categoryaxis_qbase_custom_event(void* self, void* event) {
    QCategoryAxis_QBaseCustomEvent((QCategoryAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, QEvent*) ```
void q_categoryaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnCustomEvent((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
void q_categoryaxis_connect_notify(void* self, void* signal) {
    QCategoryAxis_ConnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
void q_categoryaxis_qbase_connect_notify(void* self, void* signal) {
    QCategoryAxis_QBaseConnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, QMetaMethod*) ```
void q_categoryaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnConnectNotify((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
void q_categoryaxis_disconnect_notify(void* self, void* signal) {
    QCategoryAxis_DisconnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
void q_categoryaxis_qbase_disconnect_notify(void* self, void* signal) {
    QCategoryAxis_QBaseDisconnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, void (*slot)(QCategoryAxis*, QMetaMethod*) ```
void q_categoryaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnDisconnectNotify((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self ```
QObject* q_categoryaxis_sender(void* self) {
    return QCategoryAxis_Sender((QCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self ```
QObject* q_categoryaxis_qbase_sender(void* self) {
    return QCategoryAxis_QBaseSender((QCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, QObject* (*slot)() ```
void q_categoryaxis_on_sender(void* self, QObject* (*slot)()) {
    QCategoryAxis_OnSender((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_sender_signal_index(void* self) {
    return QCategoryAxis_SenderSignalIndex((QCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self ```
int32_t q_categoryaxis_qbase_sender_signal_index(void* self) {
    return QCategoryAxis_QBaseSenderSignalIndex((QCategoryAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, int32_t (*slot)() ```
void q_categoryaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCategoryAxis_OnSenderSignalIndex((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, const char* signal ```
int32_t q_categoryaxis_receivers(void* self, const char* signal) {
    return QCategoryAxis_Receivers((QCategoryAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, const char* signal ```
int32_t q_categoryaxis_qbase_receivers(void* self, const char* signal) {
    return QCategoryAxis_QBaseReceivers((QCategoryAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, int32_t (*slot)(QCategoryAxis*, const char*) ```
void q_categoryaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCategoryAxis_OnReceivers((QCategoryAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
bool q_categoryaxis_is_signal_connected(void* self, void* signal) {
    return QCategoryAxis_IsSignalConnected((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QCategoryAxis* self, QMetaMethod* signal ```
bool q_categoryaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QCategoryAxis_QBaseIsSignalConnected((QCategoryAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QCategoryAxis* self, bool (*slot)(QCategoryAxis*, QMetaMethod*) ```
void q_categoryaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCategoryAxis_OnIsSignalConnected((QCategoryAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QCategoryAxis* self ```
void q_categoryaxis_delete(void* self) {
    QCategoryAxis_Delete((QCategoryAxis*)(self));
}