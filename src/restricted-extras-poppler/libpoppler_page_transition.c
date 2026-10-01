#include "libpoppler_page_transition.hpp"
#include "libpoppler_page_transition.h"

Poppler__PageTransition* q_poppler__pagetransition_new(const void* pt) {
    return Poppler__PageTransition_New((Poppler__PageTransition*)pt);
}

void q_poppler__pagetransition_operator_assign(void* self, const void* other) {
    Poppler__PageTransition_OperatorAssign((Poppler__PageTransition*)self, (Poppler__PageTransition*)other);
}

int32_t q_poppler__pagetransition_type(const void* self) {
    return Poppler__PageTransition_Type((Poppler__PageTransition*)self);
}

double q_poppler__pagetransition_duration_real(const void* self) {
    return Poppler__PageTransition_DurationReal((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_alignment(const void* self) {
    return Poppler__PageTransition_Alignment((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_direction(const void* self) {
    return Poppler__PageTransition_Direction((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_angle(const void* self) {
    return Poppler__PageTransition_Angle((Poppler__PageTransition*)self);
}

double q_poppler__pagetransition_scale(const void* self) {
    return Poppler__PageTransition_Scale((Poppler__PageTransition*)self);
}

bool q_poppler__pagetransition_is_rectangular(const void* self) {
    return Poppler__PageTransition_IsRectangular((Poppler__PageTransition*)self);
}

void q_poppler__pagetransition_delete(void* self) {
    Poppler__PageTransition_Delete((Poppler__PageTransition*)(self));
}
