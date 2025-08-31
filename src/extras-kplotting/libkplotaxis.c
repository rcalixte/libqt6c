#include "libkplotaxis.hpp"
#include "libkplotaxis.h"

KPlotAxis* k_plotaxis_new() {
    return KPlotAxis_new();
}

KPlotAxis* k_plotaxis_new2(const char* label) {
    return KPlotAxis_new2(qstring(label));
}

bool k_plotaxis_is_visible(void* self) {
    return KPlotAxis_IsVisible((KPlotAxis*)self);
}

void k_plotaxis_set_visible(void* self, bool visible) {
    KPlotAxis_SetVisible((KPlotAxis*)self, visible);
}

bool k_plotaxis_are_tick_labels_shown(void* self) {
    return KPlotAxis_AreTickLabelsShown((KPlotAxis*)self);
}

void k_plotaxis_set_tick_labels_shown(void* self, bool b) {
    KPlotAxis_SetTickLabelsShown((KPlotAxis*)self, b);
}

void k_plotaxis_set_label(void* self, const char* label) {
    KPlotAxis_SetLabel((KPlotAxis*)self, qstring(label));
}

const char* k_plotaxis_label(void* self) {
    libqt_string _str = KPlotAxis_Label((KPlotAxis*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* k_plotaxis_tick_label(void* self, double value) {
    libqt_string _str = KPlotAxis_TickLabel((KPlotAxis*)self, value);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotaxis_set_tick_label_format(void* self) {
    KPlotAxis_SetTickLabelFormat((KPlotAxis*)self);
}

int32_t k_plotaxis_tick_label_width(void* self) {
    return KPlotAxis_TickLabelWidth((KPlotAxis*)self);
}

char k_plotaxis_tick_label_format(void* self) {
    return KPlotAxis_TickLabelFormat((KPlotAxis*)self);
}

int32_t k_plotaxis_tick_label_precision(void* self) {
    return KPlotAxis_TickLabelPrecision((KPlotAxis*)self);
}

void k_plotaxis_set_tick_marks(void* self, double x0, double length) {
    KPlotAxis_SetTickMarks((KPlotAxis*)self, x0, length);
}

libqt_list /* of double */ k_plotaxis_major_tick_marks(void* self) {
    libqt_list _arr = KPlotAxis_MajorTickMarks((KPlotAxis*)self);
    return _arr;
}

libqt_list /* of double */ k_plotaxis_minor_tick_marks(void* self) {
    libqt_list _arr = KPlotAxis_MinorTickMarks((KPlotAxis*)self);
    return _arr;
}

void k_plotaxis_set_tick_label_format1(void* self, char format) {
    KPlotAxis_SetTickLabelFormat1((KPlotAxis*)self, format);
}

void k_plotaxis_set_tick_label_format2(void* self, char format, int fieldWidth) {
    KPlotAxis_SetTickLabelFormat2((KPlotAxis*)self, format, fieldWidth);
}

void k_plotaxis_set_tick_label_format3(void* self, char format, int fieldWidth, int precision) {
    KPlotAxis_SetTickLabelFormat3((KPlotAxis*)self, format, fieldWidth, precision);
}

void k_plotaxis_delete(void* self) {
    KPlotAxis_Delete((KPlotAxis*)(self));
}
