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
#include "libqcoloraxis.hpp"
#include "libqcoloraxis.h"

/// https://doc.qt.io/qt-6/qcoloraxis.html

/// q_coloraxis_new constructs a new QColorAxis object.
///
///
QColorAxis* q_coloraxis_new() {
    return QColorAxis_new();
}

/// q_coloraxis_new2 constructs a new QColorAxis object.
///
/// ``` QObject* parent ```
QColorAxis* q_coloraxis_new2(void* parent) {
    return QColorAxis_new2((QObject*)parent);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#metaObject)
///
/// ``` QColorAxis* self ```
QMetaObject* q_coloraxis_meta_object(void* self) {
    return QColorAxis_MetaObject((QColorAxis*)self);
}

/// ``` QColorAxis* self, const char* param1 ```
void* q_coloraxis_metacast(void* self, const char* param1) {
    return QColorAxis_Metacast((QColorAxis*)self, param1);
}

/// ``` QColorAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coloraxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColorAxis_Metacall((QColorAxis*)self, param1, param2, param3);
}

/// Allows for overriding the related default method
///
/// ``` QColorAxis* self, int32_t (*slot)(QColorAxis*, enum QMetaObject__Call, int, void*) ```
void q_coloraxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QColorAxis_OnMetacall((QColorAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorAxis* self, enum QMetaObject__Call param1, int param2, void* param3 ```
int32_t q_coloraxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QColorAxis_QBaseMetacall((QColorAxis*)self, param1, param2, param3);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s ```
const char* q_coloraxis_tr(const char* s) {
    libqt_string _str = QColorAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#type)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_type(void* self) {
    return QColorAxis_Type((QColorAxis*)self);
}

/// Allows for overriding the related default method
///
/// ``` QColorAxis* self, int64_t (*slot)() ```
void q_coloraxis_on_type(void* self, int64_t (*slot)()) {
    QColorAxis_OnType((QColorAxis*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_qbase_type(void* self) {
    return QColorAxis_QBaseType((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMin)
///
/// ``` QColorAxis* self, double min ```
void q_coloraxis_set_min(void* self, double min) {
    QColorAxis_SetMin((QColorAxis*)self, min);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#min)
///
/// ``` QColorAxis* self ```
double q_coloraxis_min(void* self) {
    return QColorAxis_Min((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setMax)
///
/// ``` QColorAxis* self, double max ```
void q_coloraxis_set_max(void* self, double max) {
    QColorAxis_SetMax((QColorAxis*)self, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#max)
///
/// ``` QColorAxis* self ```
double q_coloraxis_max(void* self) {
    return QColorAxis_Max((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setRange)
///
/// ``` QColorAxis* self, double min, double max ```
void q_coloraxis_set_range(void* self, double min, double max) {
    QColorAxis_SetRange((QColorAxis*)self, min, max);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setTickCount)
///
/// ``` QColorAxis* self, int count ```
void q_coloraxis_set_tick_count(void* self, int count) {
    QColorAxis_SetTickCount((QColorAxis*)self, count);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCount)
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_tick_count(void* self) {
    return QColorAxis_TickCount((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setSize)
///
/// ``` QColorAxis* self, double size ```
void q_coloraxis_set_size(void* self, double size) {
    QColorAxis_SetSize((QColorAxis*)self, size);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#size)
///
/// ``` QColorAxis* self ```
double q_coloraxis_size(void* self) {
    return QColorAxis_Size((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setGradient)
///
/// ``` QColorAxis* self, QLinearGradient* gradient ```
void q_coloraxis_set_gradient(void* self, void* gradient) {
    QColorAxis_SetGradient((QColorAxis*)self, (QLinearGradient*)gradient);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradient)
///
/// ``` QColorAxis* self ```
QLinearGradient* q_coloraxis_gradient(void* self) {
    return QColorAxis_Gradient((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#setAutoRange)
///
/// ``` QColorAxis* self, bool autoRange ```
void q_coloraxis_set_auto_range(void* self, bool autoRange) {
    QColorAxis_SetAutoRange((QColorAxis*)self, autoRange);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRange)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_auto_range(void* self) {
    return QColorAxis_AutoRange((QColorAxis*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#minChanged)
///
/// ``` QColorAxis* self, double min ```
void q_coloraxis_min_changed(void* self, double min) {
    QColorAxis_MinChanged((QColorAxis*)self, min);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_min_changed(void* self, void (*slot)(void*, double)) {
    QColorAxis_Connect_MinChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#maxChanged)
///
/// ``` QColorAxis* self, double max ```
void q_coloraxis_max_changed(void* self, double max) {
    QColorAxis_MaxChanged((QColorAxis*)self, max);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_max_changed(void* self, void (*slot)(void*, double)) {
    QColorAxis_Connect_MaxChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#rangeChanged)
///
/// ``` QColorAxis* self, double min, double max ```
void q_coloraxis_range_changed(void* self, double min, double max) {
    QColorAxis_RangeChanged((QColorAxis*)self, min, max);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double, double) ```
void q_coloraxis_on_range_changed(void* self, void (*slot)(void*, double, double)) {
    QColorAxis_Connect_RangeChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#tickCountChanged)
///
/// ``` QColorAxis* self, int tickCount ```
void q_coloraxis_tick_count_changed(void* self, int tickCount) {
    QColorAxis_TickCountChanged((QColorAxis*)self, tickCount);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, int) ```
void q_coloraxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QColorAxis_Connect_TickCountChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#gradientChanged)
///
/// ``` QColorAxis* self, QLinearGradient* gradient ```
void q_coloraxis_gradient_changed(void* self, void* gradient) {
    QColorAxis_GradientChanged((QColorAxis*)self, (QLinearGradient*)gradient);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QLinearGradient*) ```
void q_coloraxis_on_gradient_changed(void* self, void (*slot)(void*, void*)) {
    QColorAxis_Connect_GradientChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#sizeChanged)
///
/// ``` QColorAxis* self, double size ```
void q_coloraxis_size_changed(void* self, double size) {
    QColorAxis_SizeChanged((QColorAxis*)self, size);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, double) ```
void q_coloraxis_on_size_changed(void* self, void (*slot)(void*, double)) {
    QColorAxis_Connect_SizeChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcoloraxis.html#autoRangeChanged)
///
/// ``` QColorAxis* self, bool autoRange ```
void q_coloraxis_auto_range_changed(void* self, bool autoRange) {
    QColorAxis_AutoRangeChanged((QColorAxis*)self, autoRange);
}

/// ``` QColorAxis* self, void (*slot)(QColorAxis*, bool) ```
void q_coloraxis_on_auto_range_changed(void* self, void (*slot)(void*, bool)) {
    QColorAxis_Connect_AutoRangeChanged((QColorAxis*)self, (intptr_t)slot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c ```
const char* q_coloraxis_tr2(const char* s, const char* c) {
    libqt_string _str = QColorAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* s, const char* c, int n ```
const char* q_coloraxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QColorAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#show)
///
/// ``` QColorAxis* self ```
void q_coloraxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#hide)
///
/// ``` QColorAxis* self ```
void q_coloraxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLinePenColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isGridLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isMinorGridLineVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLinePen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsFont)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFont)
///
/// ``` QColorAxis* self ```
QFont* q_coloraxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsAngle)
///
/// ``` QColorAxis* self, int angle ```
void q_coloraxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngle)
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isTitleVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleFont)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFont)
///
/// ``` QColorAxis* self ```
QFont* q_coloraxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleText)
///
/// ``` QColorAxis* self, const char* title ```
void q_coloraxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleText)
///
/// ``` QColorAxis* self ```
const char* q_coloraxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisible)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesPen)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPen)
///
/// ``` QColorAxis* self ```
QPen* q_coloraxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBrush)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrush)
///
/// ``` QColorAxis* self ```
QBrush* q_coloraxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesBorderColor)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColor)
///
/// ``` QColorAxis* self ```
QColor* q_coloraxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#orientation)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#alignment)
///
/// ``` QColorAxis* self ```
int64_t q_coloraxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#isReverse)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditable)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncated)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QColorAxis* self ```
void q_coloraxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabels)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#visibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#linePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#lineVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsFontChanged)
///
/// ``` QColorAxis* self, QFont* pen ```
void q_coloraxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_coloraxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsAngleChanged)
///
/// ``` QColorAxis* self, int angle ```
void q_coloraxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, int) ```
void q_coloraxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLinePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLinePenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#gridLineColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#minorGridLineColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#colorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleTextChanged)
///
/// ``` QColorAxis* self, const char* title ```
void q_coloraxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, const char*) ```
void q_coloraxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#titleFontChanged)
///
/// ``` QColorAxis* self, QFont* font ```
void q_coloraxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QFont*) ```
void q_coloraxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesVisibleChanged)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBorderColorChanged)
///
/// ``` QColorAxis* self, QColor* color ```
void q_coloraxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QColor*) ```
void q_coloraxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesPenChanged)
///
/// ``` QColorAxis* self, QPen* pen ```
void q_coloraxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QPen*) ```
void q_coloraxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#shadesBrushChanged)
///
/// ``` QColorAxis* self, QBrush* brush ```
void q_coloraxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, QBrush*) ```
void q_coloraxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#reverseChanged)
///
/// ``` QColorAxis* self, bool reverse ```
void q_coloraxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsEditableChanged)
///
/// ``` QColorAxis* self, bool editable ```
void q_coloraxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#labelsTruncatedChanged)
///
/// ``` QColorAxis* self, bool labelsTruncated ```
void q_coloraxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#truncateLabelsChanged)
///
/// ``` QColorAxis* self, bool truncateLabels ```
void q_coloraxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QAbstractAxis
///
/// ``` QColorAxis* self, void (*slot)(QAbstractAxis*, bool) ```
void q_coloraxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setGridLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setMinorGridLineVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTitleVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setShadesVisible)
///
/// ``` QColorAxis* self, bool visible ```
void q_coloraxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setReverse)
///
/// ``` QColorAxis* self, bool reverse ```
void q_coloraxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setLabelsEditable)
///
/// ``` QColorAxis* self, bool editable ```
void q_coloraxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

/// Inherited from QAbstractAxis
///
/// [Qt documentation](https://doc.qt.io/qt-6/qabstractaxis.html#setTruncateLabels)
///
/// ``` QColorAxis* self, bool truncateLabels ```
void q_coloraxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#objectName)
///
/// ``` QColorAxis* self ```
const char* q_coloraxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setObjectName)
///
/// ``` QColorAxis* self, const char* name ```
void q_coloraxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isWindowType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
///
/// ``` QColorAxis* self ```
bool q_coloraxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#blockSignals)
///
/// ``` QColorAxis* self, bool b ```
bool q_coloraxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#thread)
///
/// ``` QColorAxis* self ```
QThread* q_coloraxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#moveToThread)
///
/// ``` QColorAxis* self, QThread* thread ```
void q_coloraxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorAxis* self, int interval ```
int32_t q_coloraxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#killTimer)
///
/// ``` QColorAxis* self, int id ```
void q_coloraxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#children)
///
/// ``` QColorAxis* self ```
libqt_list /* of QObject* */ q_coloraxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setParent)
///
/// ``` QColorAxis* self, QObject* parent ```
void q_coloraxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
///
/// ``` QColorAxis* self, QObject* filterObj ```
void q_coloraxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
///
/// ``` QColorAxis* self, QObject* obj ```
void q_coloraxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method ```
QMetaObject__Connection* q_coloraxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorAxis* self, QObject* sender, const char* signal, const char* member ```
QMetaObject__Connection* q_coloraxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* member ```
bool q_coloraxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnect)
///
/// ``` QMetaObject__Connection* param1 ```
bool q_coloraxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
///
/// ``` QColorAxis* self ```
void q_coloraxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
///
/// ``` QColorAxis* self ```
void q_coloraxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#setProperty)
///
/// ``` QColorAxis* self, const char* name, QVariant* value ```
bool q_coloraxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#property)
///
/// ``` QColorAxis* self, const char* name ```
QVariant* q_coloraxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
///
/// ``` QColorAxis* self ```
const char** q_coloraxis_dynamic_property_names(void* self) {
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
/// ``` QColorAxis* self ```
QBindingStorage* q_coloraxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
///
/// ``` QColorAxis* self ```
QBindingStorage* q_coloraxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorAxis* self ```
void q_coloraxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

/// Inherited from QObject
///
/// ``` QColorAxis* self, void (*slot)(QObject*) ```
void q_coloraxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#parent)
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#inherits)
///
/// ``` QColorAxis* self, const char* classname ```
bool q_coloraxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#deleteLater)
///
/// ``` QColorAxis* self ```
void q_coloraxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#startTimer)
///
/// ``` QColorAxis* self, int interval, enum Qt__TimerType timerType ```
int32_t q_coloraxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QObject* sender, QMetaMethod* signal, QObject* receiver, QMetaMethod* method, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coloraxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connect)
///
/// ``` QColorAxis* self, QObject* sender, const char* signal, const char* member, enum Qt__ConnectionType typeVal ```
QMetaObject__Connection* q_coloraxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#destroyed)
///
/// ``` QColorAxis* self, QObject* param1 ```
void q_coloraxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

/// Inherited from QObject
///
/// ``` QColorAxis* self, void (*slot)(QObject*, QObject*) ```
void q_coloraxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#event)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
bool q_coloraxis_event(void* self, void* event) {
    return QColorAxis_Event((QColorAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
bool q_coloraxis_qbase_event(void* self, void* event) {
    return QColorAxis_QBaseEvent((QColorAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QEvent*) ```
void q_coloraxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QColorAxis_OnEvent((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#eventFilter)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QObject* watched, QEvent* event ```
bool q_coloraxis_event_filter(void* self, void* watched, void* event) {
    return QColorAxis_EventFilter((QColorAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QObject* watched, QEvent* event ```
bool q_coloraxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QColorAxis_QBaseEventFilter((QColorAxis*)self, (QObject*)watched, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QObject*, QEvent*) ```
void q_coloraxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QColorAxis_OnEventFilter((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#timerEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QTimerEvent* event ```
void q_coloraxis_timer_event(void* self, void* event) {
    QColorAxis_TimerEvent((QColorAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QTimerEvent* event ```
void q_coloraxis_qbase_timer_event(void* self, void* event) {
    QColorAxis_QBaseTimerEvent((QColorAxis*)self, (QTimerEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QTimerEvent*) ```
void q_coloraxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QColorAxis_OnTimerEvent((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#childEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QChildEvent* event ```
void q_coloraxis_child_event(void* self, void* event) {
    QColorAxis_ChildEvent((QColorAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QChildEvent* event ```
void q_coloraxis_qbase_child_event(void* self, void* event) {
    QColorAxis_QBaseChildEvent((QColorAxis*)self, (QChildEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QChildEvent*) ```
void q_coloraxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QColorAxis_OnChildEvent((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#customEvent)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
void q_coloraxis_custom_event(void* self, void* event) {
    QColorAxis_CustomEvent((QColorAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QEvent* event ```
void q_coloraxis_qbase_custom_event(void* self, void* event) {
    QColorAxis_QBaseCustomEvent((QColorAxis*)self, (QEvent*)event);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QEvent*) ```
void q_coloraxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QColorAxis_OnCustomEvent((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#connectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_connect_notify(void* self, void* signal) {
    QColorAxis_ConnectNotify((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_qbase_connect_notify(void* self, void* signal) {
    QColorAxis_QBaseConnectNotify((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QColorAxis_OnConnectNotify((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_disconnect_notify(void* self, void* signal) {
    QColorAxis_DisconnectNotify((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
void q_coloraxis_qbase_disconnect_notify(void* self, void* signal) {
    QColorAxis_QBaseDisconnectNotify((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, void (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QColorAxis_OnDisconnectNotify((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#sender)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_sender(void* self) {
    return QColorAxis_Sender((QColorAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self ```
QObject* q_coloraxis_qbase_sender(void* self) {
    return QColorAxis_QBaseSender((QColorAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, QObject* (*slot)() ```
void q_coloraxis_on_sender(void* self, QObject* (*slot)()) {
    QColorAxis_OnSender((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_sender_signal_index(void* self) {
    return QColorAxis_SenderSignalIndex((QColorAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self ```
int32_t q_coloraxis_qbase_sender_signal_index(void* self) {
    return QColorAxis_QBaseSenderSignalIndex((QColorAxis*)self);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, int32_t (*slot)() ```
void q_coloraxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QColorAxis_OnSenderSignalIndex((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#receivers)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, const char* signal ```
int32_t q_coloraxis_receivers(void* self, const char* signal) {
    return QColorAxis_Receivers((QColorAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, const char* signal ```
int32_t q_coloraxis_qbase_receivers(void* self, const char* signal) {
    return QColorAxis_QBaseReceivers((QColorAxis*)self, signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, int32_t (*slot)(QColorAxis*, const char*) ```
void q_coloraxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QColorAxis_OnReceivers((QColorAxis*)self, (intptr_t)slot);
}

/// Inherited from QObject
///
/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
///
/// Wrapper to allow calling virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
bool q_coloraxis_is_signal_connected(void* self, void* signal) {
    return QColorAxis_IsSignalConnected((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow calling base class virtual or protected method
///
/// ``` QColorAxis* self, QMetaMethod* signal ```
bool q_coloraxis_qbase_is_signal_connected(void* self, void* signal) {
    return QColorAxis_QBaseIsSignalConnected((QColorAxis*)self, (QMetaMethod*)signal);
}

/// Inherited from QObject
///
/// Wrapper to allow overriding base class virtual or protected method
///
/// ``` QColorAxis* self, bool (*slot)(QColorAxis*, QMetaMethod*) ```
void q_coloraxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QColorAxis_OnIsSignalConnected((QColorAxis*)self, (intptr_t)slot);
}

/// Delete this object from C++ memory.
///
/// ``` QColorAxis* self ```
void q_coloraxis_delete(void* self) {
    QColorAxis_Delete((QColorAxis*)(self));
}