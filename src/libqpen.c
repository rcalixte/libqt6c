#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqvariant.hpp"
#include "libqpen.hpp"
#include "libqpen.h"

QPen* q_pen_new() {
    return QPen_new();
}

QPen* q_pen_new2(int64_t param1) {
    return QPen_new2(param1);
}

QPen* q_pen_new3(void* color) {
    return QPen_new3((QColor*)color);
}

QPen* q_pen_new4(void* brush, double width) {
    return QPen_new4((QBrush*)brush, width);
}

QPen* q_pen_new5(void* pen) {
    return QPen_new5((QPen*)pen);
}

QPen* q_pen_new6(void* brush, double width, int64_t s) {
    return QPen_new6((QBrush*)brush, width, s);
}

QPen* q_pen_new7(void* brush, double width, int64_t s, int64_t c) {
    return QPen_new7((QBrush*)brush, width, s, c);
}

QPen* q_pen_new8(void* brush, double width, int64_t s, int64_t c, int64_t j) {
    return QPen_new8((QBrush*)brush, width, s, c, j);
}

void q_pen_operator_assign(void* self, void* pen) {
    QPen_OperatorAssign((QPen*)self, (QPen*)pen);
}

void q_pen_swap(void* self, void* other) {
    QPen_Swap((QPen*)self, (QPen*)other);
}

int64_t q_pen_style(void* self) {
    return QPen_Style((QPen*)self);
}

void q_pen_set_style(void* self, int64_t style) {
    QPen_SetStyle((QPen*)self, style);
}

libqt_list /* of double */ q_pen_dash_pattern(void* self) {
    libqt_list _arr = QPen_DashPattern((QPen*)self);
    return _arr;
}

void q_pen_set_dash_pattern(void* self, double* pattern[]) {
    size_t pattern_len = 0;
    while (pattern[pattern_len] != NULL) {
        pattern_len++;
    }
    libqt_list pattern_list = {
        .len = pattern_len,
        .data = {(double*)pattern},
    };
    QPen_SetDashPattern((QPen*)self, pattern_list);
}

double q_pen_dash_offset(void* self) {
    return QPen_DashOffset((QPen*)self);
}

void q_pen_set_dash_offset(void* self, double doffset) {
    QPen_SetDashOffset((QPen*)self, doffset);
}

double q_pen_miter_limit(void* self) {
    return QPen_MiterLimit((QPen*)self);
}

void q_pen_set_miter_limit(void* self, double limit) {
    QPen_SetMiterLimit((QPen*)self, limit);
}

double q_pen_width_f(void* self) {
    return QPen_WidthF((QPen*)self);
}

void q_pen_set_width_f(void* self, double width) {
    QPen_SetWidthF((QPen*)self, width);
}

int32_t q_pen_width(void* self) {
    return QPen_Width((QPen*)self);
}

void q_pen_set_width(void* self, int width) {
    QPen_SetWidth((QPen*)self, width);
}

QColor* q_pen_color(void* self) {
    return QPen_Color((QPen*)self);
}

void q_pen_set_color(void* self, void* color) {
    QPen_SetColor((QPen*)self, (QColor*)color);
}

QBrush* q_pen_brush(void* self) {
    return QPen_Brush((QPen*)self);
}

void q_pen_set_brush(void* self, void* brush) {
    QPen_SetBrush((QPen*)self, (QBrush*)brush);
}

bool q_pen_is_solid(void* self) {
    return QPen_IsSolid((QPen*)self);
}

int64_t q_pen_cap_style(void* self) {
    return QPen_CapStyle((QPen*)self);
}

void q_pen_set_cap_style(void* self, int64_t pcs) {
    QPen_SetCapStyle((QPen*)self, pcs);
}

int64_t q_pen_join_style(void* self) {
    return QPen_JoinStyle((QPen*)self);
}

void q_pen_set_join_style(void* self, int64_t pcs) {
    QPen_SetJoinStyle((QPen*)self, pcs);
}

bool q_pen_is_cosmetic(void* self) {
    return QPen_IsCosmetic((QPen*)self);
}

void q_pen_set_cosmetic(void* self, bool cosmetic) {
    QPen_SetCosmetic((QPen*)self, cosmetic);
}

bool q_pen_operator_equal(void* self, void* p) {
    return QPen_OperatorEqual((QPen*)self, (QPen*)p);
}

bool q_pen_operator_not_equal(void* self, void* p) {
    return QPen_OperatorNotEqual((QPen*)self, (QPen*)p);
}

QVariant* q_pen_to_q_variant(void* self) {
    return QPen_ToQVariant((QPen*)self);
}

bool q_pen_is_detached(void* self) {
    return QPen_IsDetached((QPen*)self);
}

void q_pen_delete(void* self) {
    QPen_Delete((QPen*)(self));
}
