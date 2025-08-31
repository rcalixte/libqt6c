#include "libkplotpoint.hpp"
#include "libkplotwidget.hpp"
#include "../libqbrush.hpp"
#include "../libqcolor.hpp"
#include "../libqpainter.hpp"
#include "../libqpen.hpp"
#include "../libqpoint.hpp"
#include "libkplotobject.hpp"
#include "libkplotobject.h"

KPlotObject* k_plotobject_new() {
    return KPlotObject_new();
}

KPlotObject* k_plotobject_new2(void* color) {
    return KPlotObject_new2((QColor*)color);
}

KPlotObject* k_plotobject_new3(void* color, int32_t otype) {
    return KPlotObject_new3((QColor*)color, otype);
}

KPlotObject* k_plotobject_new4(void* color, int32_t otype, double size) {
    return KPlotObject_new4((QColor*)color, otype, size);
}

KPlotObject* k_plotobject_new5(void* color, int32_t otype, double size, int32_t ps) {
    return KPlotObject_new5((QColor*)color, otype, size, ps);
}

int32_t k_plotobject_plot_types(void* self) {
    return KPlotObject_PlotTypes((KPlotObject*)self);
}

void k_plotobject_set_show_points(void* self, bool b) {
    KPlotObject_SetShowPoints((KPlotObject*)self, b);
}

void k_plotobject_set_show_lines(void* self, bool b) {
    KPlotObject_SetShowLines((KPlotObject*)self, b);
}

void k_plotobject_set_show_bars(void* self, bool b) {
    KPlotObject_SetShowBars((KPlotObject*)self, b);
}

double k_plotobject_size(void* self) {
    return KPlotObject_Size((KPlotObject*)self);
}

void k_plotobject_set_size(void* self, double s) {
    KPlotObject_SetSize((KPlotObject*)self, s);
}

int32_t k_plotobject_point_style(void* self) {
    return KPlotObject_PointStyle((KPlotObject*)self);
}

void k_plotobject_set_point_style(void* self, int32_t p) {
    KPlotObject_SetPointStyle((KPlotObject*)self, p);
}

const QPen* k_plotobject_pen(void* self) {
    return KPlotObject_Pen((KPlotObject*)self);
}

void k_plotobject_set_pen(void* self, void* p) {
    KPlotObject_SetPen((KPlotObject*)self, (QPen*)p);
}

const QPen* k_plotobject_line_pen(void* self) {
    return KPlotObject_LinePen((KPlotObject*)self);
}

void k_plotobject_set_line_pen(void* self, void* p) {
    KPlotObject_SetLinePen((KPlotObject*)self, (QPen*)p);
}

const QPen* k_plotobject_bar_pen(void* self) {
    return KPlotObject_BarPen((KPlotObject*)self);
}

void k_plotobject_set_bar_pen(void* self, void* p) {
    KPlotObject_SetBarPen((KPlotObject*)self, (QPen*)p);
}

const QPen* k_plotobject_label_pen(void* self) {
    return KPlotObject_LabelPen((KPlotObject*)self);
}

void k_plotobject_set_label_pen(void* self, void* p) {
    KPlotObject_SetLabelPen((KPlotObject*)self, (QPen*)p);
}

const QBrush* k_plotobject_brush(void* self) {
    return KPlotObject_Brush((KPlotObject*)self);
}

void k_plotobject_set_brush(void* self, void* b) {
    KPlotObject_SetBrush((KPlotObject*)self, (QBrush*)b);
}

const QBrush* k_plotobject_bar_brush(void* self) {
    return KPlotObject_BarBrush((KPlotObject*)self);
}

void k_plotobject_set_bar_brush(void* self, void* b) {
    KPlotObject_SetBarBrush((KPlotObject*)self, (QBrush*)b);
}

libqt_list /* of KPlotPoint* */ k_plotobject_points(void* self) {
    libqt_list _arr = KPlotObject_Points((KPlotObject*)self);
    return _arr;
}

void k_plotobject_add_point(void* self, void* p) {
    KPlotObject_AddPoint((KPlotObject*)self, (QPointF*)p);
}

void k_plotobject_add_point2(void* self, void* p) {
    KPlotObject_AddPoint2((KPlotObject*)self, (KPlotPoint*)p);
}

void k_plotobject_add_point3(void* self, double x, double y) {
    KPlotObject_AddPoint3((KPlotObject*)self, x, y);
}

void k_plotobject_remove_point(void* self, int index) {
    KPlotObject_RemovePoint((KPlotObject*)self, index);
}

void k_plotobject_clear_points(void* self) {
    KPlotObject_ClearPoints((KPlotObject*)self);
}

void k_plotobject_draw(void* self, void* p, void* pw) {
    KPlotObject_Draw((KPlotObject*)self, (QPainter*)p, (KPlotWidget*)pw);
}

void k_plotobject_add_point22(void* self, void* p, const char* label) {
    KPlotObject_AddPoint22((KPlotObject*)self, (QPointF*)p, qstring(label));
}

void k_plotobject_add_point32(void* self, void* p, const char* label, double barWidth) {
    KPlotObject_AddPoint32((KPlotObject*)self, (QPointF*)p, qstring(label), barWidth);
}

void k_plotobject_add_point33(void* self, double x, double y, const char* label) {
    KPlotObject_AddPoint33((KPlotObject*)self, x, y, qstring(label));
}

void k_plotobject_add_point4(void* self, double x, double y, const char* label, double barWidth) {
    KPlotObject_AddPoint4((KPlotObject*)self, x, y, qstring(label), barWidth);
}

void k_plotobject_delete(void* self) {
    KPlotObject_Delete((KPlotObject*)(self));
}
