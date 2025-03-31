#include "libqabstractaxis.hpp"
#include "../libqanystringview.hpp"
#include "../libqbindingstorage.hpp"
#include "../libqbrush.hpp"
#include "../libqevent.hpp"
#include "../libqcolor.hpp"
#include "../libqdatetime.hpp"
#include "../libqfont.hpp"
#include "../libqmetaobject.hpp"
#include "../libqobject.hpp"
#include "../libqpen.hpp"
#include <string.h>
#include "../libqthread.hpp"
#include "../libqvariant.hpp"
#include "../libqcoreevent.hpp"
#include "libqdatetimeaxis.hpp"
#include "libqdatetimeaxis.h"

/// https://doc.qt.io/qt-6/qdatetimeaxis.html

/// q_datetimeaxis_new constructs a new QDateTimeAxis object.
///
///
QDateTimeAxis* q_datetimeaxis_new() {
    return QDateTimeAxis_new();
}

/// q_datetimeaxis_new2 constructs a new QDateTimeAxis object.
///
/// ``` QObject* parent ```
QDateTimeAxis* q_datetimeaxis_new2(void* parent) {
    return QDateTimeAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QDateTimeAxis* self ```
QMetaObject* q_datetimeaxis_meta_object(void* self) {
    return QDateTimeAxis_MetaObject((QDateTimeAxis*)self);
}

/// ``` QDateTimeAxis* self, const char* param1 ```
void* q_datetimeaxis_metacast(void* self, const char* param1) {
    return QDateTimeAxis_Metacast((QDateTimeAxis*)self, param1);
}

/// ``` QDateTimeAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeAxis_Metacall((QDateTimeAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)(QDateTimeAxis*, enum QMetaObject__Call, int, void*) ```
void q_datetimeaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QDateTimeAxis_OnMetacall((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_datetimeaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QDateTimeAxis_QBaseMetacall((QDateTimeAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_datetimeaxis_tr(const char* s) {
    libqt_string _str = QDateTimeAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#type)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_type(void* self) {
    return QDateTimeAxis_Type((QDateTimeAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QDateTimeAxis* self, int64_t (*slot)() ```
void q_datetimeaxis_on_type(void* self, int64_t (*slot)()) {
    QDateTimeAxis_OnType((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_qbase_type(void* self) {
    return QDateTimeAxis_QBaseType((QDateTimeAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#setMin)
///
/// ``` QDateTimeAxis* self, QDateTime* min ```
void q_datetimeaxis_set_min(void* self, void* min) {
    QDateTimeAxis_SetMin((QDateTimeAxis*)self, (QDateTime*)min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#min)
///
/// ``` QDateTimeAxis* self ```
QDateTime* q_datetimeaxis_min(void* self) {
    return QDateTimeAxis_Min((QDateTimeAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#setMax)
///
/// ``` QDateTimeAxis* self, QDateTime* max ```
void q_datetimeaxis_set_max(void* self, void* max) {
    QDateTimeAxis_SetMax((QDateTimeAxis*)self, (QDateTime*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#max)
///
/// ``` QDateTimeAxis* self ```
QDateTime* q_datetimeaxis_max(void* self) {
    return QDateTimeAxis_Max((QDateTimeAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#setRange)
///
/// ``` QDateTimeAxis* self, QDateTime* min, QDateTime* max ```
void q_datetimeaxis_set_range(void* self, void* min, void* max) {
    QDateTimeAxis_SetRange((QDateTimeAxis*)self, (QDateTime*)min, (QDateTime*)max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#setFormat)
///
/// ``` QDateTimeAxis* self, const char* format ```
void q_datetimeaxis_set_format(void* self, const char* format) {
    QDateTimeAxis_SetFormat((QDateTimeAxis*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#format)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_format(void* self) {
    libqt_string _str = QDateTimeAxis_Format((QDateTimeAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#setTickCount)
///
/// ``` QDateTimeAxis* self, int count ```
void q_datetimeaxis_set_tick_count(void* self, int count) {
    QDateTimeAxis_SetTickCount((QDateTimeAxis*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#tickCount)
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_tick_count(void* self) {
    return QDateTimeAxis_TickCount((QDateTimeAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#minChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* min ```
void q_datetimeaxis_min_changed(void* self, void* min) {
    QDateTimeAxis_MinChanged((QDateTimeAxis*)self, (QDateTime*)min);
}

/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*) ```
void q_datetimeaxis_on_min_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_Connect_MinChanged((QDateTimeAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#maxChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* max ```
void q_datetimeaxis_max_changed(void* self, void* max) {
    QDateTimeAxis_MaxChanged((QDateTimeAxis*)self, (QDateTime*)max);
}

/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*) ```
void q_datetimeaxis_on_max_changed(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_Connect_MaxChanged((QDateTimeAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#rangeChanged)
///
/// ``` QDateTimeAxis* self, QDateTime* min, QDateTime* max ```
void q_datetimeaxis_range_changed(void* self, void* min, void* max) {
    QDateTimeAxis_RangeChanged((QDateTimeAxis*)self, (QDateTime*)min, (QDateTime*)max);
}

/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QDateTime*, QDateTime*) ```
void q_datetimeaxis_on_range_changed(void* self, void (*slot)(void*, void*, void*)) {
    QDateTimeAxis_Connect_RangeChanged((QDateTimeAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#formatChanged)
///
/// ``` QDateTimeAxis* self, const char* format ```
void q_datetimeaxis_format_changed(void* self, const char* format) {
    QDateTimeAxis_FormatChanged((QDateTimeAxis*)self, qstring(format));
}

/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_format_changed(void* self, void (*slot)(void*, const char*)) {
    QDateTimeAxis_Connect_FormatChanged((QDateTimeAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qdatetimeaxis.html#tickCountChanged)
///
/// ``` QDateTimeAxis* self, int tick ```
void q_datetimeaxis_tick_count_changed(void* self, int tick) {
    QDateTimeAxis_TickCountChanged((QDateTimeAxis*)self, tick);
}

/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, int) ```
void q_datetimeaxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QDateTimeAxis_Connect_TickCountChanged((QDateTimeAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_datetimeaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QDateTimeAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_datetimeaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QDateTimeAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QDateTimeAxis* self ```
QFont* q_datetimeaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QDateTimeAxis* self, int angle ```
void q_datetimeaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QDateTimeAxis* self ```
QFont* q_datetimeaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QDateTimeAxis* self, const char* title ```
void q_datetimeaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QDateTimeAxis* self ```
QPen* q_datetimeaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QDateTimeAxis* self ```
QBrush* q_datetimeaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QDateTimeAxis* self ```
QColor* q_datetimeaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QDateTimeAxis* self ```
int64_t q_datetimeaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_datetimeaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_datetimeaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QDateTimeAxis* self, QFont* pen ```
void q_datetimeaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_datetimeaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QDateTimeAxis* self, int angle ```
void q_datetimeaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_datetimeaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_datetimeaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_datetimeaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QDateTimeAxis* self, const char* title ```
void q_datetimeaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_datetimeaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_datetimeaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QDateTimeAxis* self, QFont* font ```
void q_datetimeaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_datetimeaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QDateTimeAxis* self, QColor* color ```
void q_datetimeaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_datetimeaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QDateTimeAxis* self, QPen* pen ```
void q_datetimeaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_datetimeaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QDateTimeAxis* self, QBrush* brush ```
void q_datetimeaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_datetimeaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QDateTimeAxis* self, bool reverse ```
void q_datetimeaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QDateTimeAxis* self, bool editable ```
void q_datetimeaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QDateTimeAxis* self, bool labelsTruncated ```
void q_datetimeaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QDateTimeAxis* self, bool truncateLabels ```
void q_datetimeaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QDateTimeAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_datetimeaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QDateTimeAxis* self, bool visible ```
void q_datetimeaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QDateTimeAxis* self, bool reverse ```
void q_datetimeaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QDateTimeAxis* self, bool editable ```
void q_datetimeaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QDateTimeAxis* self, bool truncateLabels ```
void q_datetimeaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QDateTimeAxis* self ```
const char* q_datetimeaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QDateTimeAxis* self, const char* name ```
void q_datetimeaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QDateTimeAxis* self ```
bool q_datetimeaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QDateTimeAxis* self, bool b ```
bool q_datetimeaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QDateTimeAxis* self ```
QThread* q_datetimeaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QDateTimeAxis* self, QThread* thread ```
void q_datetimeaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeAxis* self, int interval ```
int32_t q_datetimeaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QDateTimeAxis* self, int id ```
void q_datetimeaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QDateTimeAxis* self ```
libqt_list /* of QObject* */ q_datetimeaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QDateTimeAxis* self, QObject* parent ```
void q_datetimeaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QDateTimeAxis* self, QObject* filterObj ```
void q_datetimeaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QDateTimeAxis* self, QObject* obj ```
void q_datetimeaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_datetimeaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_datetimeaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_datetimeaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_datetimeaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QDateTimeAxis* self, const char* name, QVariant* value ```
bool q_datetimeaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QDateTimeAxis* self, const char* name ```
QVariant* q_datetimeaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QDateTimeAxis* self ```
const char** q_datetimeaxis_dynamic_property_names(void* self) {
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
/// ``` QDateTimeAxis* self ```
QBindingStorage* q_datetimeaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QDateTimeAxis* self ```
QBindingStorage* q_datetimeaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QDateTimeAxis* self, void (*slot)(QObject*) ```
void q_datetimeaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QDateTimeAxis* self, const char* classname ```
bool q_datetimeaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QDateTimeAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_datetimeaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QDateTimeAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_datetimeaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QDateTimeAxis* self, QObject* param1 ```
void q_datetimeaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QDateTimeAxis* self, void (*slot)(QObject*, QObject*) ```
void q_datetimeaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
bool q_datetimeaxis_event(void* self, void* event) {
    return QDateTimeAxis_Event((QDateTimeAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
bool q_datetimeaxis_qbase_event(void* self, void* event) {
    return QDateTimeAxis_QBaseEvent((QDateTimeAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QEvent*) ```
void q_datetimeaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QDateTimeAxis_OnEvent((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* watched, QEvent* event ```
bool q_datetimeaxis_event_filter(void* self, void* watched, void* event) {
    return QDateTimeAxis_EventFilter((QDateTimeAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* watched, QEvent* event ```
bool q_datetimeaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QDateTimeAxis_QBaseEventFilter((QDateTimeAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QObject*, QEvent*) ```
void q_datetimeaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QDateTimeAxis_OnEventFilter((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QTimerEvent* event ```
void q_datetimeaxis_timer_event(void* self, void* event) {
    QDateTimeAxis_TimerEvent((QDateTimeAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QTimerEvent* event ```
void q_datetimeaxis_qbase_timer_event(void* self, void* event) {
    QDateTimeAxis_QBaseTimerEvent((QDateTimeAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QTimerEvent*) ```
void q_datetimeaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_OnTimerEvent((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QChildEvent* event ```
void q_datetimeaxis_child_event(void* self, void* event) {
    QDateTimeAxis_ChildEvent((QDateTimeAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QChildEvent* event ```
void q_datetimeaxis_qbase_child_event(void* self, void* event) {
    QDateTimeAxis_QBaseChildEvent((QDateTimeAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QChildEvent*) ```
void q_datetimeaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_OnChildEvent((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
void q_datetimeaxis_custom_event(void* self, void* event) {
    QDateTimeAxis_CustomEvent((QDateTimeAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QEvent* event ```
void q_datetimeaxis_qbase_custom_event(void* self, void* event) {
    QDateTimeAxis_QBaseCustomEvent((QDateTimeAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QEvent*) ```
void q_datetimeaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_OnCustomEvent((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_connect_notify(void* self, void* signal) {
    QDateTimeAxis_ConnectNotify((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_qbase_connect_notify(void* self, void* signal) {
    QDateTimeAxis_QBaseConnectNotify((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_OnConnectNotify((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_disconnect_notify(void* self, void* signal) {
    QDateTimeAxis_DisconnectNotify((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
void q_datetimeaxis_qbase_disconnect_notify(void* self, void* signal) {
    QDateTimeAxis_QBaseDisconnectNotify((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, void (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QDateTimeAxis_OnDisconnectNotify((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_sender(void* self) {
    return QDateTimeAxis_Sender((QDateTimeAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self ```
QObject* q_datetimeaxis_qbase_sender(void* self) {
    return QDateTimeAxis_QBaseSender((QDateTimeAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QObject* (*slot)() ```
void q_datetimeaxis_on_sender(void* self, QObject* (*slot)()) {
    QDateTimeAxis_OnSender((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_sender_signal_index(void* self) {
    return QDateTimeAxis_SenderSignalIndex((QDateTimeAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self ```
int32_t q_datetimeaxis_qbase_sender_signal_index(void* self) {
    return QDateTimeAxis_QBaseSenderSignalIndex((QDateTimeAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)() ```
void q_datetimeaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QDateTimeAxis_OnSenderSignalIndex((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, const char* signal ```
int32_t q_datetimeaxis_receivers(void* self, const char* signal) {
    return QDateTimeAxis_Receivers((QDateTimeAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, const char* signal ```
int32_t q_datetimeaxis_qbase_receivers(void* self, const char* signal) {
    return QDateTimeAxis_QBaseReceivers((QDateTimeAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, int32_t (*slot)(QDateTimeAxis*, const char*) ```
void q_datetimeaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QDateTimeAxis_OnReceivers((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
bool q_datetimeaxis_is_signal_connected(void* self, void* signal) {
    return QDateTimeAxis_IsSignalConnected((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QDateTimeAxis* self, QMetaMethod* signal ```
bool q_datetimeaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QDateTimeAxis_QBaseIsSignalConnected((QDateTimeAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QDateTimeAxis* self, bool (*slot)(QDateTimeAxis*, QMetaMethod*) ```
void q_datetimeaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QDateTimeAxis_OnIsSignalConnected((QDateTimeAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QDateTimeAxis* self ```
void q_datetimeaxis_delete(void* self) {
    QDateTimeAxis_Delete((QDateTimeAxis*)(self));
}