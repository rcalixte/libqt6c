#include "../libqpoint.hpp"
#include "libkplotpoint.hpp"
#include "libkplotpoint.h"

KPlotPoint* k_plotpoint_new() {
    return KPlotPoint_new();
}

KPlotPoint* k_plotpoint_new2(double x, double y) {
    return KPlotPoint_new2(x, y);
}

KPlotPoint* k_plotpoint_new3(void* p) {
    return KPlotPoint_new3((QPointF*)p);
}

KPlotPoint* k_plotpoint_new4(double x, double y, const char* label) {
    return KPlotPoint_new4(x, y, qstring(label));
}

KPlotPoint* k_plotpoint_new5(double x, double y, const char* label, double width) {
    return KPlotPoint_new5(x, y, qstring(label), width);
}

KPlotPoint* k_plotpoint_new6(void* p, const char* label) {
    return KPlotPoint_new6((QPointF*)p, qstring(label));
}

KPlotPoint* k_plotpoint_new7(void* p, const char* label, double width) {
    return KPlotPoint_new7((QPointF*)p, qstring(label), width);
}

QPointF* k_plotpoint_position(void* self) {
    return KPlotPoint_Position((KPlotPoint*)self);
}

void k_plotpoint_set_position(void* self, void* pos) {
    KPlotPoint_SetPosition((KPlotPoint*)self, (QPointF*)pos);
}

double k_plotpoint_x(void* self) {
    return KPlotPoint_X((KPlotPoint*)self);
}

void k_plotpoint_set_x(void* self, double x) {
    KPlotPoint_SetX((KPlotPoint*)self, x);
}

double k_plotpoint_y(void* self) {
    return KPlotPoint_Y((KPlotPoint*)self);
}

void k_plotpoint_set_y(void* self, double y) {
    KPlotPoint_SetY((KPlotPoint*)self, y);
}

const char* k_plotpoint_label(void* self) {
    libqt_string _str = KPlotPoint_Label((KPlotPoint*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void k_plotpoint_set_label(void* self, const char* label) {
    KPlotPoint_SetLabel((KPlotPoint*)self, qstring(label));
}

double k_plotpoint_bar_width(void* self) {
    return KPlotPoint_BarWidth((KPlotPoint*)self);
}

void k_plotpoint_set_bar_width(void* self, double w) {
    KPlotPoint_SetBarWidth((KPlotPoint*)self, w);
}

void k_plotpoint_delete(void* self) {
    KPlotPoint_Delete((KPlotPoint*)(self));
}
