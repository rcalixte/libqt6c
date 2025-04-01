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

QCategoryAxis* q_categoryaxis_new() {
    return QCategoryAxis_new();
}

QCategoryAxis* q_categoryaxis_new2(void* parent) {
    return QCategoryAxis_new2((QObject*)parent);
}

QMetaObject* q_categoryaxis_meta_object(void* self) {
    return QCategoryAxis_MetaObject((QCategoryAxis*)self);
}

void* q_categoryaxis_metacast(void* self, const char* param1) {
    return QCategoryAxis_Metacast((QCategoryAxis*)self, param1);
}

int32_t q_categoryaxis_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCategoryAxis_Metacall((QCategoryAxis*)self, param1, param2, param3);
}

void q_categoryaxis_on_metacall(void* self, int32_t (*slot)(void*, int64_t, int, void*)) {
    QCategoryAxis_OnMetacall((QCategoryAxis*)self, (intptr_t)slot);
}

int32_t q_categoryaxis_qbase_metacall(void* self, int64_t param1, int param2, void* param3) {
    return QCategoryAxis_QBaseMetacall((QCategoryAxis*)self, param1, param2, param3);
}

const char* q_categoryaxis_tr(const char* s) {
    libqt_string _str = QCategoryAxis_Tr(s);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_categoryaxis_type(void* self) {
    return QCategoryAxis_Type((QCategoryAxis*)self);
}

void q_categoryaxis_on_type(void* self, int64_t (*slot)()) {
    QCategoryAxis_OnType((QCategoryAxis*)self, (intptr_t)slot);
}

int64_t q_categoryaxis_qbase_type(void* self) {
    return QCategoryAxis_QBaseType((QCategoryAxis*)self);
}

void q_categoryaxis_append(void* self, const char* label, double categoryEndValue) {
    QCategoryAxis_Append((QCategoryAxis*)self, qstring(label), categoryEndValue);
}

void q_categoryaxis_remove(void* self, const char* label) {
    QCategoryAxis_Remove((QCategoryAxis*)self, qstring(label));
}

void q_categoryaxis_replace_label(void* self, const char* oldLabel, const char* newLabel) {
    QCategoryAxis_ReplaceLabel((QCategoryAxis*)self, qstring(oldLabel), qstring(newLabel));
}

double q_categoryaxis_start_value(void* self) {
    return QCategoryAxis_StartValue((QCategoryAxis*)self);
}

void q_categoryaxis_set_start_value(void* self, double min) {
    QCategoryAxis_SetStartValue((QCategoryAxis*)self, min);
}

double q_categoryaxis_end_value(void* self, const char* categoryLabel) {
    return QCategoryAxis_EndValue((QCategoryAxis*)self, qstring(categoryLabel));
}

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

int32_t q_categoryaxis_count(void* self) {
    return QCategoryAxis_Count((QCategoryAxis*)self);
}

int64_t q_categoryaxis_labels_position(void* self) {
    return QCategoryAxis_LabelsPosition((QCategoryAxis*)self);
}

void q_categoryaxis_set_labels_position(void* self, int64_t position) {
    QCategoryAxis_SetLabelsPosition((QCategoryAxis*)self, position);
}

void q_categoryaxis_categories_changed(void* self) {
    QCategoryAxis_CategoriesChanged((QCategoryAxis*)self);
}

void q_categoryaxis_on_categories_changed(void* self, void (*slot)(void*)) {
    QCategoryAxis_Connect_CategoriesChanged((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_position_changed(void* self, int64_t position) {
    QCategoryAxis_LabelsPositionChanged((QCategoryAxis*)self, position);
}

void q_categoryaxis_on_labels_position_changed(void* self, void (*slot)(void*, int64_t)) {
    QCategoryAxis_Connect_LabelsPositionChanged((QCategoryAxis*)self, (intptr_t)slot);
}

const char* q_categoryaxis_tr2(const char* s, const char* c) {
    libqt_string _str = QCategoryAxis_Tr2(s, c);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_categoryaxis_tr3(const char* s, const char* c, int n) {
    libqt_string _str = QCategoryAxis_Tr3(s, c, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

double q_categoryaxis_start_value1(void* self, const char* categoryLabel) {
    return QCategoryAxis_StartValue1((QCategoryAxis*)self, qstring(categoryLabel));
}

void q_categoryaxis_set_min(void* self, double min) {
    QValueAxis_SetMin((QValueAxis*)self, min);
}

double q_categoryaxis_min(void* self) {
    return QValueAxis_Min((QValueAxis*)self);
}

void q_categoryaxis_set_max(void* self, double max) {
    QValueAxis_SetMax((QValueAxis*)self, max);
}

double q_categoryaxis_max(void* self) {
    return QValueAxis_Max((QValueAxis*)self);
}

void q_categoryaxis_set_range(void* self, double min, double max) {
    QValueAxis_SetRange((QValueAxis*)self, min, max);
}

void q_categoryaxis_set_tick_count(void* self, int count) {
    QValueAxis_SetTickCount((QValueAxis*)self, count);
}

int32_t q_categoryaxis_tick_count(void* self) {
    return QValueAxis_TickCount((QValueAxis*)self);
}

void q_categoryaxis_set_minor_tick_count(void* self, int count) {
    QValueAxis_SetMinorTickCount((QValueAxis*)self, count);
}

int32_t q_categoryaxis_minor_tick_count(void* self) {
    return QValueAxis_MinorTickCount((QValueAxis*)self);
}

void q_categoryaxis_set_tick_anchor(void* self, double anchor) {
    QValueAxis_SetTickAnchor((QValueAxis*)self, anchor);
}

double q_categoryaxis_tick_anchor(void* self) {
    return QValueAxis_TickAnchor((QValueAxis*)self);
}

void q_categoryaxis_set_tick_interval(void* self, double insterval) {
    QValueAxis_SetTickInterval((QValueAxis*)self, insterval);
}

double q_categoryaxis_tick_interval(void* self) {
    return QValueAxis_TickInterval((QValueAxis*)self);
}

void q_categoryaxis_set_tick_type(void* self, int64_t typeVal) {
    QValueAxis_SetTickType((QValueAxis*)self, typeVal);
}

int64_t q_categoryaxis_tick_type(void* self) {
    return QValueAxis_TickType((QValueAxis*)self);
}

void q_categoryaxis_set_label_format(void* self, const char* format) {
    QValueAxis_SetLabelFormat((QValueAxis*)self, qstring(format));
}

const char* q_categoryaxis_label_format(void* self) {
    libqt_string _str = QValueAxis_LabelFormat((QValueAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_categoryaxis_apply_nice_numbers(void* self) {
    QValueAxis_ApplyNiceNumbers((QValueAxis*)self);
}

void q_categoryaxis_min_changed(void* self, double min) {
    QValueAxis_MinChanged((QValueAxis*)self, min);
}

void q_categoryaxis_on_min_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MinChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_max_changed(void* self, double max) {
    QValueAxis_MaxChanged((QValueAxis*)self, max);
}

void q_categoryaxis_on_max_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_MaxChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_range_changed(void* self, double min, double max) {
    QValueAxis_RangeChanged((QValueAxis*)self, min, max);
}

void q_categoryaxis_on_range_changed(void* self, void (*slot)(void*, double, double)) {
    QValueAxis_Connect_RangeChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_tick_count_changed(void* self, int tickCount) {
    QValueAxis_TickCountChanged((QValueAxis*)self, tickCount);
}

void q_categoryaxis_on_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_TickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_minor_tick_count_changed(void* self, int tickCount) {
    QValueAxis_MinorTickCountChanged((QValueAxis*)self, tickCount);
}

void q_categoryaxis_on_minor_tick_count_changed(void* self, void (*slot)(void*, int)) {
    QValueAxis_Connect_MinorTickCountChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_label_format_changed(void* self, const char* format) {
    QValueAxis_LabelFormatChanged((QValueAxis*)self, qstring(format));
}

void q_categoryaxis_on_label_format_changed(void* self, void (*slot)(void*, const char*)) {
    QValueAxis_Connect_LabelFormatChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_tick_interval_changed(void* self, double interval) {
    QValueAxis_TickIntervalChanged((QValueAxis*)self, interval);
}

void q_categoryaxis_on_tick_interval_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickIntervalChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_tick_anchor_changed(void* self, double anchor) {
    QValueAxis_TickAnchorChanged((QValueAxis*)self, anchor);
}

void q_categoryaxis_on_tick_anchor_changed(void* self, void (*slot)(void*, double)) {
    QValueAxis_Connect_TickAnchorChanged((QValueAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_tick_type_changed(void* self, int64_t typeVal) {
    QValueAxis_TickTypeChanged((QValueAxis*)self, typeVal);
}

void q_categoryaxis_on_tick_type_changed(void* self, void (*slot)(void*, int64_t)) {
    QValueAxis_Connect_TickTypeChanged((QValueAxis*)self, (intptr_t)slot);
}

bool q_categoryaxis_is_visible(void* self) {
    return QAbstractAxis_IsVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_visible(void* self) {
    QAbstractAxis_SetVisible((QAbstractAxis*)self);
}

void q_categoryaxis_show(void* self) {
    QAbstractAxis_Show((QAbstractAxis*)self);
}

void q_categoryaxis_hide(void* self) {
    QAbstractAxis_Hide((QAbstractAxis*)self);
}

bool q_categoryaxis_is_line_visible(void* self) {
    return QAbstractAxis_IsLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_line_visible(void* self) {
    QAbstractAxis_SetLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_line_pen(void* self, void* pen) {
    QAbstractAxis_SetLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_categoryaxis_line_pen(void* self) {
    return QAbstractAxis_LinePen((QAbstractAxis*)self);
}

void q_categoryaxis_set_line_pen_color(void* self, void* color) {
    QAbstractAxis_SetLinePenColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_line_pen_color(void* self) {
    return QAbstractAxis_LinePenColor((QAbstractAxis*)self);
}

bool q_categoryaxis_is_grid_line_visible(void* self) {
    return QAbstractAxis_IsGridLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_grid_line_visible(void* self) {
    QAbstractAxis_SetGridLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_categoryaxis_grid_line_pen(void* self) {
    return QAbstractAxis_GridLinePen((QAbstractAxis*)self);
}

bool q_categoryaxis_is_minor_grid_line_visible(void* self) {
    return QAbstractAxis_IsMinorGridLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_minor_grid_line_visible(void* self) {
    QAbstractAxis_SetMinorGridLineVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_minor_grid_line_pen(void* self, void* pen) {
    QAbstractAxis_SetMinorGridLinePen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_categoryaxis_minor_grid_line_pen(void* self) {
    return QAbstractAxis_MinorGridLinePen((QAbstractAxis*)self);
}

void q_categoryaxis_set_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_grid_line_color(void* self) {
    return QAbstractAxis_GridLineColor((QAbstractAxis*)self);
}

void q_categoryaxis_set_minor_grid_line_color(void* self, void* color) {
    QAbstractAxis_SetMinorGridLineColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_minor_grid_line_color(void* self) {
    return QAbstractAxis_MinorGridLineColor((QAbstractAxis*)self);
}

bool q_categoryaxis_labels_visible(void* self) {
    return QAbstractAxis_LabelsVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_visible(void* self) {
    QAbstractAxis_SetLabelsVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_brush(void* self, void* brush) {
    QAbstractAxis_SetLabelsBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_categoryaxis_labels_brush(void* self) {
    return QAbstractAxis_LabelsBrush((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_font(void* self, void* font) {
    QAbstractAxis_SetLabelsFont((QAbstractAxis*)self, (QFont*)font);
}

QFont* q_categoryaxis_labels_font(void* self) {
    return QAbstractAxis_LabelsFont((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_angle(void* self, int angle) {
    QAbstractAxis_SetLabelsAngle((QAbstractAxis*)self, angle);
}

int32_t q_categoryaxis_labels_angle(void* self) {
    return QAbstractAxis_LabelsAngle((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_color(void* self, void* color) {
    QAbstractAxis_SetLabelsColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_labels_color(void* self) {
    return QAbstractAxis_LabelsColor((QAbstractAxis*)self);
}

bool q_categoryaxis_is_title_visible(void* self) {
    return QAbstractAxis_IsTitleVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_title_visible(void* self) {
    QAbstractAxis_SetTitleVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_title_brush(void* self, void* brush) {
    QAbstractAxis_SetTitleBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_categoryaxis_title_brush(void* self) {
    return QAbstractAxis_TitleBrush((QAbstractAxis*)self);
}

void q_categoryaxis_set_title_font(void* self, void* font) {
    QAbstractAxis_SetTitleFont((QAbstractAxis*)self, (QFont*)font);
}

QFont* q_categoryaxis_title_font(void* self) {
    return QAbstractAxis_TitleFont((QAbstractAxis*)self);
}

void q_categoryaxis_set_title_text(void* self, const char* title) {
    QAbstractAxis_SetTitleText((QAbstractAxis*)self, qstring(title));
}

const char* q_categoryaxis_title_text(void* self) {
    libqt_string _str = QAbstractAxis_TitleText((QAbstractAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_categoryaxis_shades_visible(void* self) {
    return QAbstractAxis_ShadesVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_shades_visible(void* self) {
    QAbstractAxis_SetShadesVisible((QAbstractAxis*)self);
}

void q_categoryaxis_set_shades_pen(void* self, void* pen) {
    QAbstractAxis_SetShadesPen((QAbstractAxis*)self, (QPen*)pen);
}

QPen* q_categoryaxis_shades_pen(void* self) {
    return QAbstractAxis_ShadesPen((QAbstractAxis*)self);
}

void q_categoryaxis_set_shades_brush(void* self, void* brush) {
    QAbstractAxis_SetShadesBrush((QAbstractAxis*)self, (QBrush*)brush);
}

QBrush* q_categoryaxis_shades_brush(void* self) {
    return QAbstractAxis_ShadesBrush((QAbstractAxis*)self);
}

void q_categoryaxis_set_shades_color(void* self, void* color) {
    QAbstractAxis_SetShadesColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_shades_color(void* self) {
    return QAbstractAxis_ShadesColor((QAbstractAxis*)self);
}

void q_categoryaxis_set_shades_border_color(void* self, void* color) {
    QAbstractAxis_SetShadesBorderColor((QAbstractAxis*)self, (QColor*)color);
}

QColor* q_categoryaxis_shades_border_color(void* self) {
    return QAbstractAxis_ShadesBorderColor((QAbstractAxis*)self);
}

int64_t q_categoryaxis_orientation(void* self) {
    return QAbstractAxis_Orientation((QAbstractAxis*)self);
}

int64_t q_categoryaxis_alignment(void* self) {
    return QAbstractAxis_Alignment((QAbstractAxis*)self);
}

void q_categoryaxis_set_reverse(void* self) {
    QAbstractAxis_SetReverse((QAbstractAxis*)self);
}

bool q_categoryaxis_is_reverse(void* self) {
    return QAbstractAxis_IsReverse((QAbstractAxis*)self);
}

void q_categoryaxis_set_labels_editable(void* self) {
    QAbstractAxis_SetLabelsEditable((QAbstractAxis*)self);
}

bool q_categoryaxis_labels_editable(void* self) {
    return QAbstractAxis_LabelsEditable((QAbstractAxis*)self);
}

bool q_categoryaxis_labels_truncated(void* self) {
    return QAbstractAxis_LabelsTruncated((QAbstractAxis*)self);
}

void q_categoryaxis_set_truncate_labels(void* self) {
    QAbstractAxis_SetTruncateLabels((QAbstractAxis*)self);
}

bool q_categoryaxis_truncate_labels(void* self) {
    return QAbstractAxis_TruncateLabels((QAbstractAxis*)self);
}

void q_categoryaxis_visible_changed(void* self, bool visible) {
    QAbstractAxis_VisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_VisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_LinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_categoryaxis_on_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_line_visible_changed(void* self, bool visible) {
    QAbstractAxis_LineVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_line_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LineVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_visible_changed(void* self, bool visible) {
    QAbstractAxis_LabelsVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_labels_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_brush_changed(void* self, void* brush) {
    QAbstractAxis_LabelsBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_categoryaxis_on_labels_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_font_changed(void* self, void* pen) {
    QAbstractAxis_LabelsFontChanged((QAbstractAxis*)self, (QFont*)pen);
}

void q_categoryaxis_on_labels_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_angle_changed(void* self, int angle) {
    QAbstractAxis_LabelsAngleChanged((QAbstractAxis*)self, angle);
}

void q_categoryaxis_on_labels_angle_changed(void* self, void (*slot)(void*, int)) {
    QAbstractAxis_Connect_LabelsAngleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_GridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_categoryaxis_on_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_GridVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_GridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_minor_grid_visible_changed(void* self, bool visible) {
    QAbstractAxis_MinorGridVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_minor_grid_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_MinorGridVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_minor_grid_line_pen_changed(void* self, void* pen) {
    QAbstractAxis_MinorGridLinePenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_categoryaxis_on_minor_grid_line_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLinePenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_GridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_GridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_minor_grid_line_color_changed(void* self, void* color) {
    QAbstractAxis_MinorGridLineColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_minor_grid_line_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_MinorGridLineColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_color_changed(void* self, void* color) {
    QAbstractAxis_ColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_color_changed(void* self, void* color) {
    QAbstractAxis_LabelsColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_labels_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_LabelsColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_title_text_changed(void* self, const char* title) {
    QAbstractAxis_TitleTextChanged((QAbstractAxis*)self, qstring(title));
}

void q_categoryaxis_on_title_text_changed(void* self, void (*slot)(void*, const char*)) {
    QAbstractAxis_Connect_TitleTextChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_title_brush_changed(void* self, void* brush) {
    QAbstractAxis_TitleBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_categoryaxis_on_title_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_title_visible_changed(void* self, bool visible) {
    QAbstractAxis_TitleVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_title_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TitleVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_title_font_changed(void* self, void* font) {
    QAbstractAxis_TitleFontChanged((QAbstractAxis*)self, (QFont*)font);
}

void q_categoryaxis_on_title_font_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_TitleFontChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_shades_visible_changed(void* self, bool visible) {
    QAbstractAxis_ShadesVisibleChanged((QAbstractAxis*)self, visible);
}

void q_categoryaxis_on_shades_visible_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ShadesVisibleChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_shades_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_shades_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_shades_border_color_changed(void* self, void* color) {
    QAbstractAxis_ShadesBorderColorChanged((QAbstractAxis*)self, (QColor*)color);
}

void q_categoryaxis_on_shades_border_color_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBorderColorChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_shades_pen_changed(void* self, void* pen) {
    QAbstractAxis_ShadesPenChanged((QAbstractAxis*)self, (QPen*)pen);
}

void q_categoryaxis_on_shades_pen_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesPenChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_shades_brush_changed(void* self, void* brush) {
    QAbstractAxis_ShadesBrushChanged((QAbstractAxis*)self, (QBrush*)brush);
}

void q_categoryaxis_on_shades_brush_changed(void* self, void (*slot)(void*, void*)) {
    QAbstractAxis_Connect_ShadesBrushChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_reverse_changed(void* self, bool reverse) {
    QAbstractAxis_ReverseChanged((QAbstractAxis*)self, reverse);
}

void q_categoryaxis_on_reverse_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_ReverseChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_editable_changed(void* self, bool editable) {
    QAbstractAxis_LabelsEditableChanged((QAbstractAxis*)self, editable);
}

void q_categoryaxis_on_labels_editable_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsEditableChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_labels_truncated_changed(void* self, bool labelsTruncated) {
    QAbstractAxis_LabelsTruncatedChanged((QAbstractAxis*)self, labelsTruncated);
}

void q_categoryaxis_on_labels_truncated_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_LabelsTruncatedChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_truncate_labels_changed(void* self, bool truncateLabels) {
    QAbstractAxis_TruncateLabelsChanged((QAbstractAxis*)self, truncateLabels);
}

void q_categoryaxis_on_truncate_labels_changed(void* self, void (*slot)(void*, bool)) {
    QAbstractAxis_Connect_TruncateLabelsChanged((QAbstractAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_set_visible1(void* self, bool visible) {
    QAbstractAxis_SetVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetLineVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetGridLineVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_minor_grid_line_visible1(void* self, bool visible) {
    QAbstractAxis_SetMinorGridLineVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_labels_visible1(void* self, bool visible) {
    QAbstractAxis_SetLabelsVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_title_visible1(void* self, bool visible) {
    QAbstractAxis_SetTitleVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_shades_visible1(void* self, bool visible) {
    QAbstractAxis_SetShadesVisible1((QAbstractAxis*)self, visible);
}

void q_categoryaxis_set_reverse1(void* self, bool reverse) {
    QAbstractAxis_SetReverse1((QAbstractAxis*)self, reverse);
}

void q_categoryaxis_set_labels_editable1(void* self, bool editable) {
    QAbstractAxis_SetLabelsEditable1((QAbstractAxis*)self, editable);
}

void q_categoryaxis_set_truncate_labels1(void* self, bool truncateLabels) {
    QAbstractAxis_SetTruncateLabels1((QAbstractAxis*)self, truncateLabels);
}

const char* q_categoryaxis_object_name(void* self) {
    libqt_string _str = QObject_ObjectName((QObject*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_categoryaxis_set_object_name(void* self, const char* name) {
    libqt_strview name_strview = qstrview(name);
    QObject_SetObjectName((QObject*)self, (QAnyStringView*)&name_strview);
}

bool q_categoryaxis_is_widget_type(void* self) {
    return QObject_IsWidgetType((QObject*)self);
}

bool q_categoryaxis_is_window_type(void* self) {
    return QObject_IsWindowType((QObject*)self);
}

bool q_categoryaxis_is_quick_item_type(void* self) {
    return QObject_IsQuickItemType((QObject*)self);
}

bool q_categoryaxis_signals_blocked(void* self) {
    return QObject_SignalsBlocked((QObject*)self);
}

bool q_categoryaxis_block_signals(void* self, bool b) {
    return QObject_BlockSignals((QObject*)self, b);
}

QThread* q_categoryaxis_thread(void* self) {
    return QObject_Thread((QObject*)self);
}

void q_categoryaxis_move_to_thread(void* self, void* thread) {
    QObject_MoveToThread((QObject*)self, (QThread*)thread);
}

int32_t q_categoryaxis_start_timer(void* self, int interval) {
    return QObject_StartTimer((QObject*)self, interval);
}

void q_categoryaxis_kill_timer(void* self, int id) {
    QObject_KillTimer((QObject*)self, id);
}

libqt_list /* of QObject* */ q_categoryaxis_children(void* self) {
    libqt_list _arr = QObject_Children((QObject*)self);
    return _arr;
}

void q_categoryaxis_set_parent(void* self, void* parent) {
    QObject_SetParent((QObject*)self, (QObject*)parent);
}

void q_categoryaxis_install_event_filter(void* self, void* filterObj) {
    QObject_InstallEventFilter((QObject*)self, (QObject*)filterObj);
}

void q_categoryaxis_remove_event_filter(void* self, void* obj) {
    QObject_RemoveEventFilter((QObject*)self, (QObject*)obj);
}

QMetaObject__Connection* q_categoryaxis_connect(void* sender, void* signal, void* receiver, void* method) {
    return QObject_Connect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method);
}

QMetaObject__Connection* q_categoryaxis_connect2(void* self, void* sender, const char* signal, const char* member) {
    return QObject_Connect2((QObject*)self, (QObject*)sender, signal, member);
}

bool q_categoryaxis_disconnect(void* sender, void* signal, void* receiver, void* member) {
    return QObject_Disconnect((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)member);
}

bool q_categoryaxis_disconnect_with_q_meta_object_connection(void* param1) {
    return QObject_DisconnectWithQMetaObjectConnection((QMetaObject__Connection*)param1);
}

void q_categoryaxis_dump_object_tree(void* self) {
    QObject_DumpObjectTree((QObject*)self);
}

void q_categoryaxis_dump_object_info(void* self) {
    QObject_DumpObjectInfo((QObject*)self);
}

bool q_categoryaxis_set_property(void* self, const char* name, void* value) {
    return QObject_SetProperty((QObject*)self, name, (QVariant*)value);
}

QVariant* q_categoryaxis_property(void* self, const char* name) {
    return QObject_Property((QObject*)self, name);
}

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

QBindingStorage* q_categoryaxis_binding_storage(void* self) {
    return QObject_BindingStorage((QObject*)self);
}

QBindingStorage* q_categoryaxis_binding_storage2(void* self) {
    return QObject_BindingStorage2((QObject*)self);
}

void q_categoryaxis_destroyed(void* self) {
    QObject_Destroyed((QObject*)self);
}

void q_categoryaxis_on_destroyed(void* self, void (*slot)(void*)) {
    QObject_Connect_Destroyed((QObject*)self, (intptr_t)slot);
}

QObject* q_categoryaxis_parent(void* self) {
    return QObject_Parent((QObject*)self);
}

bool q_categoryaxis_inherits(void* self, const char* classname) {
    return QObject_Inherits((QObject*)self, classname);
}

void q_categoryaxis_delete_later(void* self) {
    QObject_DeleteLater((QObject*)self);
}

int32_t q_categoryaxis_start_timer2(void* self, int interval, int64_t timerType) {
    return QObject_StartTimer2((QObject*)self, interval, timerType);
}

QMetaObject__Connection* q_categoryaxis_connect5(void* sender, void* signal, void* receiver, void* method, int64_t typeVal) {
    return QObject_Connect5((QObject*)sender, (QMetaMethod*)signal, (QObject*)receiver, (QMetaMethod*)method, typeVal);
}

QMetaObject__Connection* q_categoryaxis_connect4(void* self, void* sender, const char* signal, const char* member, int64_t typeVal) {
    return QObject_Connect4((QObject*)self, (QObject*)sender, signal, member, typeVal);
}

void q_categoryaxis_destroyed1(void* self, void* param1) {
    QObject_Destroyed1((QObject*)self, (QObject*)param1);
}

void q_categoryaxis_on_destroyed1(void* self, void (*slot)(void*, void*)) {
    QObject_Connect_Destroyed1((QObject*)self, (intptr_t)slot);
}

bool q_categoryaxis_event(void* self, void* event) {
    return QCategoryAxis_Event((QCategoryAxis*)self, (QEvent*)event);
}

bool q_categoryaxis_qbase_event(void* self, void* event) {
    return QCategoryAxis_QBaseEvent((QCategoryAxis*)self, (QEvent*)event);
}

void q_categoryaxis_on_event(void* self, bool (*slot)(void*, void*)) {
    QCategoryAxis_OnEvent((QCategoryAxis*)self, (intptr_t)slot);
}

bool q_categoryaxis_event_filter(void* self, void* watched, void* event) {
    return QCategoryAxis_EventFilter((QCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

bool q_categoryaxis_qbase_event_filter(void* self, void* watched, void* event) {
    return QCategoryAxis_QBaseEventFilter((QCategoryAxis*)self, (QObject*)watched, (QEvent*)event);
}

void q_categoryaxis_on_event_filter(void* self, bool (*slot)(void*, void*, void*)) {
    QCategoryAxis_OnEventFilter((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_timer_event(void* self, void* event) {
    QCategoryAxis_TimerEvent((QCategoryAxis*)self, (QTimerEvent*)event);
}

void q_categoryaxis_qbase_timer_event(void* self, void* event) {
    QCategoryAxis_QBaseTimerEvent((QCategoryAxis*)self, (QTimerEvent*)event);
}

void q_categoryaxis_on_timer_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnTimerEvent((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_child_event(void* self, void* event) {
    QCategoryAxis_ChildEvent((QCategoryAxis*)self, (QChildEvent*)event);
}

void q_categoryaxis_qbase_child_event(void* self, void* event) {
    QCategoryAxis_QBaseChildEvent((QCategoryAxis*)self, (QChildEvent*)event);
}

void q_categoryaxis_on_child_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnChildEvent((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_custom_event(void* self, void* event) {
    QCategoryAxis_CustomEvent((QCategoryAxis*)self, (QEvent*)event);
}

void q_categoryaxis_qbase_custom_event(void* self, void* event) {
    QCategoryAxis_QBaseCustomEvent((QCategoryAxis*)self, (QEvent*)event);
}

void q_categoryaxis_on_custom_event(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnCustomEvent((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_connect_notify(void* self, void* signal) {
    QCategoryAxis_ConnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_categoryaxis_qbase_connect_notify(void* self, void* signal) {
    QCategoryAxis_QBaseConnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_categoryaxis_on_connect_notify(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnConnectNotify((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_disconnect_notify(void* self, void* signal) {
    QCategoryAxis_DisconnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_categoryaxis_qbase_disconnect_notify(void* self, void* signal) {
    QCategoryAxis_QBaseDisconnectNotify((QCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_categoryaxis_on_disconnect_notify(void* self, void (*slot)(void*, void*)) {
    QCategoryAxis_OnDisconnectNotify((QCategoryAxis*)self, (intptr_t)slot);
}

QObject* q_categoryaxis_sender(void* self) {
    return QCategoryAxis_Sender((QCategoryAxis*)self);
}

QObject* q_categoryaxis_qbase_sender(void* self) {
    return QCategoryAxis_QBaseSender((QCategoryAxis*)self);
}

void q_categoryaxis_on_sender(void* self, QObject* (*slot)()) {
    QCategoryAxis_OnSender((QCategoryAxis*)self, (intptr_t)slot);
}

int32_t q_categoryaxis_sender_signal_index(void* self) {
    return QCategoryAxis_SenderSignalIndex((QCategoryAxis*)self);
}

int32_t q_categoryaxis_qbase_sender_signal_index(void* self) {
    return QCategoryAxis_QBaseSenderSignalIndex((QCategoryAxis*)self);
}

void q_categoryaxis_on_sender_signal_index(void* self, int32_t (*slot)()) {
    QCategoryAxis_OnSenderSignalIndex((QCategoryAxis*)self, (intptr_t)slot);
}

int32_t q_categoryaxis_receivers(void* self, const char* signal) {
    return QCategoryAxis_Receivers((QCategoryAxis*)self, signal);
}

int32_t q_categoryaxis_qbase_receivers(void* self, const char* signal) {
    return QCategoryAxis_QBaseReceivers((QCategoryAxis*)self, signal);
}

void q_categoryaxis_on_receivers(void* self, int32_t (*slot)(void*, const char*)) {
    QCategoryAxis_OnReceivers((QCategoryAxis*)self, (intptr_t)slot);
}

bool q_categoryaxis_is_signal_connected(void* self, void* signal) {
    return QCategoryAxis_IsSignalConnected((QCategoryAxis*)self, (QMetaMethod*)signal);
}

bool q_categoryaxis_qbase_is_signal_connected(void* self, void* signal) {
    return QCategoryAxis_QBaseIsSignalConnected((QCategoryAxis*)self, (QMetaMethod*)signal);
}

void q_categoryaxis_on_is_signal_connected(void* self, bool (*slot)(void*, void*)) {
    QCategoryAxis_OnIsSignalConnected((QCategoryAxis*)self, (intptr_t)slot);
}

void q_categoryaxis_delete(void* self) {
    QCategoryAxis_Delete((QCategoryAxis*)(self));
}
