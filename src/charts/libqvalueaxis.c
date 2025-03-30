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
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqvalueaxis.hpp"
#include "libqvalueaxis.h"

/// https://doc.qt.io/qt-6/qvalueaxis.html

/// q_valueaxis_new constructs a new QValueAxis object.
///
///
QValueAxis* q_valueaxis_new() {
    return QValueAxis_new();
}

/// q_valueaxis_new2 constructs a new QValueAxis object.
///
/// ``` QObject* parent ```
QValueAxis* q_valueaxis_new2(void* parent) {
    return QValueAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QValueAxis* self ```
QMetaObject* q_valueaxis_meta_object(void* self) {
    return QValueAxis_MetaObject((QValueAxis*)self);
}

/// ``` QValueAxis* self, const char* param1 ```
void* q_valueaxis_metacast(void* self, const char* param1) {
    return QValueAxis_Metacast((QValueAxis*)self, param1);
}

/// ``` QValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_valueaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QValueAxis_Metacall((QValueAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QValueAxis* self, int32_t (*slot)(QValueAxis*, enum QMetaObject__Call, int, void*) ```
void q_valueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QValueAxis_OnMetacall((QValueAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_valueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QValueAxis_QBaseMetacall((QValueAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_valueaxis_tr(const char* s) {
    libqt_string _str = QValueAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#type)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_type(void* self) {
    return QValueAxis_Type((QValueAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QValueAxis* self, int64_t (*slot)() ```
void q_valueaxis_on_type(void* self, int64_t (*slot)()) {
    QValueAxis_OnType((QValueAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_qbase_type(void* self) {
    return QValueAxis_QBaseType((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMin)
///
/// ``` QValueAxis* self, double min ```
void q_valueaxis_set_min(void* self, double min) {
    QValueAxis_SetMin((QValueAxis*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#min)
///
/// ``` QValueAxis* self ```
double q_valueaxis_min(void* self) {
    return QValueAxis_Min((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMax)
///
/// ``` QValueAxis* self, double max ```
void q_valueaxis_set_max(void* self, double max) {
    QValueAxis_SetMax((QValueAxis*)self, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#max)
///
/// ``` QValueAxis* self ```
double q_valueaxis_max(void* self) {
    return QValueAxis_Max((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setRange)
///
/// ``` QValueAxis* self, double min, double max ```
void q_valueaxis_set_range(void* self, double min, double max) {
    QValueAxis_SetRange((QValueAxis*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickCount)
///
/// ``` QValueAxis* self, int count ```
void q_valueaxis_set_tick_count(void* self, int count) {
    QValueAxis_SetTickCount((QValueAxis*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCount)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_tick_count(void* self) {
    return QValueAxis_TickCount((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setMinorTickCount)
///
/// ``` QValueAxis* self, int count ```
void q_valueaxis_set_minor_tick_count(void* self, int count) {
    QValueAxis_SetMinorTickCount((QValueAxis*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCount)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_minor_tick_count(void* self) {
    return QValueAxis_MinorTickCount((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickAnchor)
///
/// ``` QValueAxis* self, double anchor ```
void q_valueaxis_set_tick_anchor(void* self, double anchor) {
    QValueAxis_SetTickAnchor((QValueAxis*)self, anchor);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchor)
///
/// ``` QValueAxis* self ```
double q_valueaxis_tick_anchor(void* self) {
    return QValueAxis_TickAnchor((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickInterval)
///
/// ``` QValueAxis* self, double insterval ```
void q_valueaxis_set_tick_interval(void* self, double insterval) {
    QValueAxis_SetTickInterval((QValueAxis*)self, insterval);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickInterval)
///
/// ``` QValueAxis* self ```
double q_valueaxis_tick_interval(void* self) {
    return QValueAxis_TickInterval((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setTickType)
///
/// ``` QValueAxis* self, enum QValueAxis__TickType typeVal ```
void q_valueaxis_set_tick_type(void* self, int64_t typeVal) {
    QValueAxis_SetTickType((QValueAxis*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickType)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_tick_type(void* self) {
    return QValueAxis_TickType((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#setLabelFormat)
///
/// ``` QValueAxis* self, const char* format ```
void q_valueaxis_set_label_format(void* self, const char* format) {
    QValueAxis_SetLabelFormat((QValueAxis*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormat)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_label_format(void* self) {
    libqt_string _str = QValueAxis_LabelFormat((QValueAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#applyNiceNumbers)
///
/// ``` QValueAxis* self ```
void q_valueaxis_apply_nice_numbers(void* self) {
    QValueAxis_ApplyNiceNumbers((QValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minChanged)
///
/// ``` QValueAxis* self, double min ```
void q_valueaxis_min_changed(void* self, double min) {
    QValueAxis_MinChanged((QValueAxis*)self, min);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_min_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MinChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#maxChanged)
///
/// ``` QValueAxis* self, double max ```
void q_valueaxis_max_changed(void* self, double max) {
    QValueAxis_MaxChanged((QValueAxis*)self, max);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_max_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MaxChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#rangeChanged)
///
/// ``` QValueAxis* self, double min, double max ```
void q_valueaxis_range_changed(void* self, double min, double max) {
    QValueAxis_RangeChanged((QValueAxis*)self, min, max);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double, double) ```
void q_valueaxis_on_range_changed(void* self, void (*slot)(void*, double, double)) {
    QValueAxis_Connect_RangeChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickCountChanged)
///
/// ``` QValueAxis* self, int tickCount ```
void q_valueaxis_tick_count_changed(void* self, int tickCount) {
    QValueAxis_TickCountChanged((QValueAxis*)self, tickCount);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, int) ```
void q_valueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_TickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#minorTickCountChanged)
///
/// ``` QValueAxis* self, int tickCount ```
void q_valueaxis_minor_tick_count_changed(void* self, int tickCount) {
    QValueAxis_MinorTickCountChanged((QValueAxis*)self, tickCount);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, int) ```
void q_valueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_MinorTickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#labelFormatChanged)
///
/// ``` QValueAxis* self, const char* format ```
void q_valueaxis_label_format_changed(void* self, const char* format) {
    QValueAxis_LabelFormatChanged((QValueAxis*)self, qstring(format));
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, const char*) ```
void q_valueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*)) {
    QValueAxis_Connect_LabelFormatChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickIntervalChanged)
///
/// ``` QValueAxis* self, double interval ```
void q_valueaxis_tick_interval_changed(void* self, double interval) {
    QValueAxis_TickIntervalChanged((QValueAxis*)self, interval);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_tick_interval_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickIntervalChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickAnchorChanged)
///
/// ``` QValueAxis* self, double anchor ```
void q_valueaxis_tick_anchor_changed(void* self, double anchor) {
    QValueAxis_TickAnchorChanged((QValueAxis*)self, anchor);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, double) ```
void q_valueaxis_on_tick_anchor_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickAnchorChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvalueaxis.html#tickTypeChanged)
///
/// ``` QValueAxis* self, enum QValueAxis__TickType typeVal ```
void q_valueaxis_tick_type_changed(void* self, int64_t typeVal) {
    QValueAxis_TickTypeChanged((QValueAxis*)self, typeVal);
}

/// ``` QValueAxis* self, void (*slot)(QValueAxis*, enum QValueAxis__TickType) ```
void q_valueaxis_on_tick_type_changed(void* self, void (*slot)(void*, int64_t)) {
    QValueAxis_Connect_TickTypeChanged((QValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_valueaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QValueAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_valueaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QValueAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QValueAxis* self ```
void q_valueaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QValueAxis* self ```
void q_valueaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QValueAxis* self ```
QFont* q_valueaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QValueAxis* self, int angle ```
void q_valueaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QValueAxis* self ```
QFont* q_valueaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QValueAxis* self, const char* title ```
void q_valueaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QValueAxis* self ```
QPen* q_valueaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QValueAxis* self ```
QBrush* q_valueaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QValueAxis* self ```
QColor* q_valueaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QValueAxis* self ```
int64_t q_valueaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QValueAxis* self ```
void q_valueaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QValueAxis* self, QFont* pen ```
void q_valueaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_valueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QValueAxis* self, int angle ```
void q_valueaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_valueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QValueAxis* self, const char* title ```
void q_valueaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_valueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QValueAxis* self, QFont* font ```
void q_valueaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_valueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QValueAxis* self, QColor* color ```
void q_valueaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_valueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QValueAxis* self, QPen* pen ```
void q_valueaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_valueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QValueAxis* self, QBrush* brush ```
void q_valueaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_valueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QValueAxis* self, bool reverse ```
void q_valueaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QValueAxis* self, bool editable ```
void q_valueaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QValueAxis* self, bool labelsTruncated ```
void q_valueaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QValueAxis* self, bool truncateLabels ```
void q_valueaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_valueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QValueAxis* self, bool visible ```
void q_valueaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QValueAxis* self, bool reverse ```
void q_valueaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QValueAxis* self, bool editable ```
void q_valueaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QValueAxis* self, bool truncateLabels ```
void q_valueaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QValueAxis* self ```
const char* q_valueaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QValueAxis* self, const char* name ```
void q_valueaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QValueAxis* self ```
bool q_valueaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QValueAxis* self, bool b ```
bool q_valueaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QValueAxis* self ```
QThread* q_valueaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QValueAxis* self, QThread* thread ```
void q_valueaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValueAxis* self, int interval ```
int32_t q_valueaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QValueAxis* self, int id ```
void q_valueaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QValueAxis* self ```
libqt_list /* of QObject* */ q_valueaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QValueAxis* self, QObject* parent ```
void q_valueaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QValueAxis* self, QObject* filterObj ```
void q_valueaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QValueAxis* self, QObject* obj ```
void q_valueaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_valueaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValueAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_valueaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_valueaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_valueaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QValueAxis* self ```
void q_valueaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QValueAxis* self ```
void q_valueaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QValueAxis* self, const char* name, QVariant* value ```
bool q_valueaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QValueAxis* self, const char* name ```
QVariant* q_valueaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QValueAxis* self ```
const char** q_valueaxis_dynamic_property_names(void* self) {
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
/// ``` QValueAxis* self ```
QBindingStorage* q_valueaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QValueAxis* self ```
QBindingStorage* q_valueaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self ```
void q_valueaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QValueAxis* self, void (*slot)(QObject*) ```
void q_valueaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QValueAxis* self, const char* classname ```
bool q_valueaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QValueAxis* self ```
void q_valueaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QValueAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_valueaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_valueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QValueAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_valueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QValueAxis* self, QObject* param1 ```
void q_valueaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QValueAxis* self, void (*slot)(QObject*, QObject*) ```
void q_valueaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
bool q_valueaxis_event(void* self, void* event) {
    return QValueAxis_Event((QValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
bool q_valueaxis_qbase_event(void* self, void* event) {
    return QValueAxis_QBaseEvent((QValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QEvent*) ```
void q_valueaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QValueAxis_OnEvent((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QObject* watched, QEvent* event ```
bool q_valueaxis_event_filter(void* self, void* watched, void* event) {
    return QValueAxis_EventFilter((QValueAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QObject* watched, QEvent* event ```
bool q_valueaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QValueAxis_QBaseEventFilter((QValueAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QObject*, QEvent*) ```
void q_valueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QValueAxis_OnEventFilter((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QTimerEvent* event ```
void q_valueaxis_timer_event(void* self, void* event) {
    QValueAxis_TimerEvent((QValueAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QTimerEvent* event ```
void q_valueaxis_qbase_timer_event(void* self, void* event) {
    QValueAxis_QBaseTimerEvent((QValueAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QTimerEvent*) ```
void q_valueaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QValueAxis_OnTimerEvent((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QChildEvent* event ```
void q_valueaxis_child_event(void* self, void* event) {
    QValueAxis_ChildEvent((QValueAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QChildEvent* event ```
void q_valueaxis_qbase_child_event(void* self, void* event) {
    QValueAxis_QBaseChildEvent((QValueAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QChildEvent*) ```
void q_valueaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QValueAxis_OnChildEvent((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
void q_valueaxis_custom_event(void* self, void* event) {
    QValueAxis_CustomEvent((QValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QEvent* event ```
void q_valueaxis_qbase_custom_event(void* self, void* event) {
    QValueAxis_QBaseCustomEvent((QValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QEvent*) ```
void q_valueaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QValueAxis_OnCustomEvent((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_connect_notify(void* self, void* signal) {
    QValueAxis_ConnectNotify((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_qbase_connect_notify(void* self, void* signal) {
    QValueAxis_QBaseConnectNotify((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QValueAxis_OnConnectNotify((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_disconnect_notify(void* self, void* signal) {
    QValueAxis_DisconnectNotify((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
void q_valueaxis_qbase_disconnect_notify(void* self, void* signal) {
    QValueAxis_QBaseDisconnectNotify((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, void (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QValueAxis_OnDisconnectNotify((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_sender(void* self) {
    return QValueAxis_Sender((QValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self ```
QObject* q_valueaxis_qbase_sender(void* self) {
    return QValueAxis_QBaseSender((QValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, QObject* (*slot)() ```
void q_valueaxis_on_sender(void* self, QObject* (*slot)()) {
    QValueAxis_OnSender((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_sender_signal_index(void* self) {
    return QValueAxis_SenderSignalIndex((QValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self ```
int32_t q_valueaxis_qbase_sender_signal_index(void* self) {
    return QValueAxis_QBaseSenderSignalIndex((QValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, int32_t (*slot)() ```
void q_valueaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QValueAxis_OnSenderSignalIndex((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, const char* signal ```
int32_t q_valueaxis_receivers(void* self, const char* signal) {
    return QValueAxis_Receivers((QValueAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, const char* signal ```
int32_t q_valueaxis_qbase_receivers(void* self, const char* signal) {
    return QValueAxis_QBaseReceivers((QValueAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, int32_t (*slot)(QValueAxis*, const char*) ```
void q_valueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QValueAxis_OnReceivers((QValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
bool q_valueaxis_is_signal_connected(void* self, void* signal) {
    return QValueAxis_IsSignalConnected((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QValueAxis* self, QMetaMethod* signal ```
bool q_valueaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QValueAxis_QBaseIsSignalConnected((QValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QValueAxis* self, bool (*slot)(QValueAxis*, QMetaMethod*) ```
void q_valueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QValueAxis_OnIsSignalConnected((QValueAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QValueAxis* self ```
void q_valueaxis_delete(void* self) {
    QValueAxis_Delete((QValueAxis*)(self));
}