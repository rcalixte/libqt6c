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
#include "libqlogvalueaxis.hpp"
#include "libqlogvalueaxis.h"

/// https://doc.qt.io/qt-6/qlogvalueaxis.html

/// q_logvalueaxis_new constructs a new QLogValueAxis object.
///
///
QLogValueAxis* q_logvalueaxis_new() {
    return QLogValueAxis_new();
}

/// q_logvalueaxis_new2 constructs a new QLogValueAxis object.
///
/// ``` QObject* parent ```
QLogValueAxis* q_logvalueaxis_new2(void* parent) {
    return QLogValueAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QLogValueAxis* self ```
QMetaObject* q_logvalueaxis_meta_object(void* self) {
    return QLogValueAxis_MetaObject((QLogValueAxis*)self);
}

/// ``` QLogValueAxis* self, const char* param1 ```
void* q_logvalueaxis_metacast(void* self, const char* param1) {
    return QLogValueAxis_Metacast((QLogValueAxis*)self, param1);
}

/// ``` QLogValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_logvalueaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLogValueAxis_Metacall((QLogValueAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QLogValueAxis* self, int32_t (*slot)(QLogValueAxis*, enum QMetaObject__Call, int, void*) ```
void q_logvalueaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QLogValueAxis_OnMetacall((QLogValueAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLogValueAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_logvalueaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QLogValueAxis_QBaseMetacall((QLogValueAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_logvalueaxis_tr(const char* s) {
    libqt_string _str = QLogValueAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#type)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_type(void* self) {
    return QLogValueAxis_Type((QLogValueAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QLogValueAxis* self, int64_t (*slot)() ```
void q_logvalueaxis_on_type(void* self, int64_t (*slot)()) {
    QLogValueAxis_OnType((QLogValueAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_qbase_type(void* self) {
    return QLogValueAxis_QBaseType((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setMin)
///
/// ``` QLogValueAxis* self, double min ```
void q_logvalueaxis_set_min(void* self, double min) {
    QLogValueAxis_SetMin((QLogValueAxis*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#min)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_min(void* self) {
    return QLogValueAxis_Min((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setMax)
///
/// ``` QLogValueAxis* self, double max ```
void q_logvalueaxis_set_max(void* self, double max) {
    QLogValueAxis_SetMax((QLogValueAxis*)self, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#max)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_max(void* self) {
    return QLogValueAxis_Max((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setRange)
///
/// ``` QLogValueAxis* self, double min, double max ```
void q_logvalueaxis_set_range(void* self, double min, double max) {
    QLogValueAxis_SetRange((QLogValueAxis*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setLabelFormat)
///
/// ``` QLogValueAxis* self, const char* format ```
void q_logvalueaxis_set_label_format(void* self, const char* format) {
    QLogValueAxis_SetLabelFormat((QLogValueAxis*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#labelFormat)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_label_format(void* self) {
    libqt_string _str = QLogValueAxis_LabelFormat((QLogValueAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setBase)
///
/// ``` QLogValueAxis* self, double base ```
void q_logvalueaxis_set_base(void* self, double base) {
    QLogValueAxis_SetBase((QLogValueAxis*)self, base);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#base)
///
/// ``` QLogValueAxis* self ```
double q_logvalueaxis_base(void* self) {
    return QLogValueAxis_Base((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#tickCount)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_tick_count(void* self) {
    return QLogValueAxis_TickCount((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#setMinorTickCount)
///
/// ``` QLogValueAxis* self, int minorTickCount ```
void q_logvalueaxis_set_minor_tick_count(void* self, int minorTickCount) {
    QLogValueAxis_SetMinorTickCount((QLogValueAxis*)self, minorTickCount);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#minorTickCount)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_minor_tick_count(void* self) {
    return QLogValueAxis_MinorTickCount((QLogValueAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#minChanged)
///
/// ``` QLogValueAxis* self, double min ```
void q_logvalueaxis_min_changed(void* self, double min) {
    QLogValueAxis_MinChanged((QLogValueAxis*)self, min);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_min_changed(void* self, void (*slot)(void*, double)) {
    QLogValueAxis_Connect_MinChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#maxChanged)
///
/// ``` QLogValueAxis* self, double max ```
void q_logvalueaxis_max_changed(void* self, double max) {
    QLogValueAxis_MaxChanged((QLogValueAxis*)self, max);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_max_changed(void* self, void (*slot)(void*, double)) {
    QLogValueAxis_Connect_MaxChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#rangeChanged)
///
/// ``` QLogValueAxis* self, double min, double max ```
void q_logvalueaxis_range_changed(void* self, double min, double max) {
    QLogValueAxis_RangeChanged((QLogValueAxis*)self, min, max);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double, double) ```
void q_logvalueaxis_on_range_changed(void* self, void (*slot)(void*, double, double)) {
    QLogValueAxis_Connect_RangeChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#labelFormatChanged)
///
/// ``` QLogValueAxis* self, const char* format ```
void q_logvalueaxis_label_format_changed(void* self, const char* format) {
    QLogValueAxis_LabelFormatChanged((QLogValueAxis*)self, qstring(format));
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, const char*) ```
void q_logvalueaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*)) {
    QLogValueAxis_Connect_LabelFormatChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#baseChanged)
///
/// ``` QLogValueAxis* self, double base ```
void q_logvalueaxis_base_changed(void* self, double base) {
    QLogValueAxis_BaseChanged((QLogValueAxis*)self, base);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, double) ```
void q_logvalueaxis_on_base_changed(void* self, void (*slot)(void*, double)) {
    QLogValueAxis_Connect_BaseChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#tickCountChanged)
///
/// ``` QLogValueAxis* self, int tickCount ```
void q_logvalueaxis_tick_count_changed(void* self, int tickCount) {
    QLogValueAxis_TickCountChanged((QLogValueAxis*)self, tickCount);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, int) ```
void q_logvalueaxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QLogValueAxis_Connect_TickCountChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qlogvalueaxis.html#minorTickCountChanged)
///
/// ``` QLogValueAxis* self, int minorTickCount ```
void q_logvalueaxis_minor_tick_count_changed(void* self, int minorTickCount) {
    QLogValueAxis_MinorTickCountChanged((QLogValueAxis*)self, minorTickCount);
}

/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, int) ```
void q_logvalueaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QLogValueAxis_Connect_MinorTickCountChanged((QLogValueAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_logvalueaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QLogValueAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_logvalueaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QLogValueAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QLogValueAxis* self ```
QFont* q_logvalueaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QLogValueAxis* self, int angle ```
void q_logvalueaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QLogValueAxis* self ```
QFont* q_logvalueaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QLogValueAxis* self, const char* title ```
void q_logvalueaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QLogValueAxis* self ```
QPen* q_logvalueaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QLogValueAxis* self ```
QBrush* q_logvalueaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QLogValueAxis* self ```
QColor* q_logvalueaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QLogValueAxis* self ```
int64_t q_logvalueaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QLogValueAxis* self, QFont* pen ```
void q_logvalueaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_logvalueaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QLogValueAxis* self, int angle ```
void q_logvalueaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_logvalueaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QLogValueAxis* self, const char* title ```
void q_logvalueaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_logvalueaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QLogValueAxis* self, QFont* font ```
void q_logvalueaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_logvalueaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QLogValueAxis* self, QColor* color ```
void q_logvalueaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_logvalueaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QLogValueAxis* self, QPen* pen ```
void q_logvalueaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_logvalueaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QLogValueAxis* self, QBrush* brush ```
void q_logvalueaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_logvalueaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QLogValueAxis* self, bool reverse ```
void q_logvalueaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QLogValueAxis* self, bool editable ```
void q_logvalueaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QLogValueAxis* self, bool labelsTruncated ```
void q_logvalueaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QLogValueAxis* self, bool truncateLabels ```
void q_logvalueaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QLogValueAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_logvalueaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QLogValueAxis* self, bool visible ```
void q_logvalueaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QLogValueAxis* self, bool reverse ```
void q_logvalueaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QLogValueAxis* self, bool editable ```
void q_logvalueaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QLogValueAxis* self, bool truncateLabels ```
void q_logvalueaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QLogValueAxis* self ```
const char* q_logvalueaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QLogValueAxis* self, const char* name ```
void q_logvalueaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QLogValueAxis* self ```
bool q_logvalueaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QLogValueAxis* self, bool b ```
bool q_logvalueaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QLogValueAxis* self ```
QThread* q_logvalueaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QLogValueAxis* self, QThread* thread ```
void q_logvalueaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLogValueAxis* self, int interval ```
int32_t q_logvalueaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QLogValueAxis* self, int id ```
void q_logvalueaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QLogValueAxis* self ```
libqt_list /* of QObject* */ q_logvalueaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QLogValueAxis* self, QObject* parent ```
void q_logvalueaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QLogValueAxis* self, QObject* filterObj ```
void q_logvalueaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QLogValueAxis* self, QObject* obj ```
void q_logvalueaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_logvalueaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLogValueAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_logvalueaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_logvalueaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_logvalueaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QLogValueAxis* self, const char* name, QVariant* value ```
bool q_logvalueaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QLogValueAxis* self, const char* name ```
QVariant* q_logvalueaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QLogValueAxis* self ```
const char** q_logvalueaxis_dynamic_property_names(void* self) {
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
/// ``` QLogValueAxis* self ```
QBindingStorage* q_logvalueaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QLogValueAxis* self ```
QBindingStorage* q_logvalueaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QLogValueAxis* self, void (*slot)(QObject*) ```
void q_logvalueaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QLogValueAxis* self, const char* classname ```
bool q_logvalueaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QLogValueAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_logvalueaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_logvalueaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QLogValueAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_logvalueaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QLogValueAxis* self, QObject* param1 ```
void q_logvalueaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QLogValueAxis* self, void (*slot)(QObject*, QObject*) ```
void q_logvalueaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
bool q_logvalueaxis_event(void* self, void* event) {
    return QLogValueAxis_Event((QLogValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
bool q_logvalueaxis_qbase_event(void* self, void* event) {
    return QLogValueAxis_QBaseEvent((QLogValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QEvent*) ```
void q_logvalueaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QLogValueAxis_OnEvent((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* watched, QEvent* event ```
bool q_logvalueaxis_event_filter(void* self, void* watched, void* event) {
    return QLogValueAxis_EventFilter((QLogValueAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* watched, QEvent* event ```
bool q_logvalueaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QLogValueAxis_QBaseEventFilter((QLogValueAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QObject*, QEvent*) ```
void q_logvalueaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QLogValueAxis_OnEventFilter((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QTimerEvent* event ```
void q_logvalueaxis_timer_event(void* self, void* event) {
    QLogValueAxis_TimerEvent((QLogValueAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QTimerEvent* event ```
void q_logvalueaxis_qbase_timer_event(void* self, void* event) {
    QLogValueAxis_QBaseTimerEvent((QLogValueAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QTimerEvent*) ```
void q_logvalueaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QLogValueAxis_OnTimerEvent((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QChildEvent* event ```
void q_logvalueaxis_child_event(void* self, void* event) {
    QLogValueAxis_ChildEvent((QLogValueAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QChildEvent* event ```
void q_logvalueaxis_qbase_child_event(void* self, void* event) {
    QLogValueAxis_QBaseChildEvent((QLogValueAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QChildEvent*) ```
void q_logvalueaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QLogValueAxis_OnChildEvent((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
void q_logvalueaxis_custom_event(void* self, void* event) {
    QLogValueAxis_CustomEvent((QLogValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QEvent* event ```
void q_logvalueaxis_qbase_custom_event(void* self, void* event) {
    QLogValueAxis_QBaseCustomEvent((QLogValueAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QEvent*) ```
void q_logvalueaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QLogValueAxis_OnCustomEvent((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_connect_notify(void* self, void* signal) {
    QLogValueAxis_ConnectNotify((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_qbase_connect_notify(void* self, void* signal) {
    QLogValueAxis_QBaseConnectNotify((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QLogValueAxis_OnConnectNotify((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_disconnect_notify(void* self, void* signal) {
    QLogValueAxis_DisconnectNotify((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
void q_logvalueaxis_qbase_disconnect_notify(void* self, void* signal) {
    QLogValueAxis_QBaseDisconnectNotify((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, void (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QLogValueAxis_OnDisconnectNotify((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_sender(void* self) {
    return QLogValueAxis_Sender((QLogValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self ```
QObject* q_logvalueaxis_qbase_sender(void* self) {
    return QLogValueAxis_QBaseSender((QLogValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, QObject* (*slot)() ```
void q_logvalueaxis_on_sender(void* self, QObject* (*slot)()) {
    QLogValueAxis_OnSender((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_sender_signal_index(void* self) {
    return QLogValueAxis_SenderSignalIndex((QLogValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self ```
int32_t q_logvalueaxis_qbase_sender_signal_index(void* self) {
    return QLogValueAxis_QBaseSenderSignalIndex((QLogValueAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, int32_t (*slot)() ```
void q_logvalueaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QLogValueAxis_OnSenderSignalIndex((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, const char* signal ```
int32_t q_logvalueaxis_receivers(void* self, const char* signal) {
    return QLogValueAxis_Receivers((QLogValueAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, const char* signal ```
int32_t q_logvalueaxis_qbase_receivers(void* self, const char* signal) {
    return QLogValueAxis_QBaseReceivers((QLogValueAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, int32_t (*slot)(QLogValueAxis*, const char*) ```
void q_logvalueaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QLogValueAxis_OnReceivers((QLogValueAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
bool q_logvalueaxis_is_signal_connected(void* self, void* signal) {
    return QLogValueAxis_IsSignalConnected((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QLogValueAxis* self, QMetaMethod* signal ```
bool q_logvalueaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QLogValueAxis_QBaseIsSignalConnected((QLogValueAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QLogValueAxis* self, bool (*slot)(QLogValueAxis*, QMetaMethod*) ```
void q_logvalueaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QLogValueAxis_OnIsSignalConnected((QLogValueAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QLogValueAxis* self ```
void q_logvalueaxis_delete(void* self) {
    QLogValueAxis_Delete((QLogValueAxis*)(self));
}