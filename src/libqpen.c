#include "libqbrush.hpp"
#include "libqcolor.hpp"
#include "libqvariant.hpp"
#include "libqpen.hpp"
#include "libqpen.h"

QPen* q_pen_new() {
    return QPen_New();
}

QPen* q_pen_new2(int32_t param1) {
    return QPen_New2(param1);
}

QPen* q_pen_new3(const void* color) {
    return QPen_New3((QColor*)color);
}

QPen* q_pen_new4(const void* brush, double width) {
    return QPen_New4((QBrush*)brush, width);
}

QPen* q_pen_new5(const void* pen) {
    return QPen_New5((QPen*)pen);
}

QPen* q_pen_new6(const void* brush, double width, int32_t s) {
    return QPen_New6((QBrush*)brush, width, s);
}

QPen* q_pen_new7(const void* brush, double width, int32_t s, int32_t c) {
    return QPen_New7((QBrush*)brush, width, s, c);
}

QPen* q_pen_new8(const void* brush, double width, int32_t s, int32_t c, int32_t j) {
    return QPen_New8((QBrush*)brush, width, s, c, j);
}

void q_pen_operator_assign(void* self, const void* pen) {
    QPen_OperatorAssign((QPen*)self, (QPen*)pen);
}

void q_pen_swap(void* self, void* other) {
    QPen_Swap((QPen*)self, (QPen*)other);
}

int32_t q_pen_style(const void* self) {
    return QPen_Style((QPen*)self);
}

void q_pen_set_style(void* self, int32_t style) {
    QPen_SetStyle((QPen*)self, style);
}

libqt_list /* of double */ q_pen_dash_pattern(const void* self) {
    libqt_list _arr = QPen_DashPattern((QPen*)self);
    return _arr;
}

void q_pen_set_dash_pattern(void* self, libqt_list /* of double */ pattern) {
    QPen_SetDashPattern((QPen*)self, pattern);
}

double q_pen_dash_offset(const void* self) {
    return QPen_DashOffset((QPen*)self);
}

void q_pen_set_dash_offset(void* self, double doffset) {
    QPen_SetDashOffset((QPen*)self, doffset);
}

double q_pen_miter_limit(const void* self) {
    return QPen_MiterLimit((QPen*)self);
}

void q_pen_set_miter_limit(void* self, double limit) {
    QPen_SetMiterLimit((QPen*)self, limit);
}

double q_pen_width_f(const void* self) {
    return QPen_WidthF((QPen*)self);
}

void q_pen_set_width_f(void* self, double width) {
    QPen_SetWidthF((QPen*)self, width);
}

int32_t q_pen_width(const void* self) {
    return QPen_Width((QPen*)self);
}

void q_pen_set_width(void* self, int width) {
    QPen_SetWidth((QPen*)self, width);
}

QColor* q_pen_color(const void* self) {
    return QPen_Color((QPen*)self);
}

void q_pen_set_color(void* self, const void* color) {
    QPen_SetColor((QPen*)self, (QColor*)color);
}

QBrush* q_pen_brush(const void* self) {
    return QPen_Brush((QPen*)self);
}

void q_pen_set_brush(void* self, const void* brush) {
    QPen_SetBrush((QPen*)self, (QBrush*)brush);
}

bool q_pen_is_solid(const void* self) {
    return QPen_IsSolid((QPen*)self);
}

int32_t q_pen_cap_style(const void* self) {
    return QPen_CapStyle((QPen*)self);
}

void q_pen_set_cap_style(void* self, int32_t pcs) {
    QPen_SetCapStyle((QPen*)self, pcs);
}

int32_t q_pen_join_style(const void* self) {
    return QPen_JoinStyle((QPen*)self);
}

void q_pen_set_join_style(void* self, int32_t pcs) {
    QPen_SetJoinStyle((QPen*)self, pcs);
}

bool q_pen_is_cosmetic(const void* self) {
    return QPen_IsCosmetic((QPen*)self);
}

void q_pen_set_cosmetic(void* self, bool cosmetic) {
    QPen_SetCosmetic((QPen*)self, cosmetic);
}

bool q_pen_operator_equal(const void* self, const void* p) {
    return QPen_OperatorEqual((QPen*)self, (QPen*)p);
}

bool q_pen_operator_not_equal(const void* self, const void* p) {
    return QPen_OperatorNotEqual((QPen*)self, (QPen*)p);
}

QVariant* q_pen_to_q_variant(const void* self) {
    return QPen_ToQVariant((QPen*)self);
}

bool q_pen_is_detached(void* self) {
    return QPen_IsDetached((QPen*)self);
}

void q_pen_delete(void* self) {
    QPen_Delete((QPen*)(self));
}
