#include "libpoppler_page_transition.hpp"
#include "libpoppler_page_transition.h"

Poppler__PageTransition* q_poppler__pagetransition_new(void* pt) {
    return Poppler__PageTransition_new((Poppler__PageTransition*)pt);
}

void q_poppler__pagetransition_operator_assign(void* self, void* other) {
    Poppler__PageTransition_OperatorAssign((Poppler__PageTransition*)self, (Poppler__PageTransition*)other);
}

int32_t q_poppler__pagetransition_type(void* self) {
    return Poppler__PageTransition_Type((Poppler__PageTransition*)self);
}

double q_poppler__pagetransition_duration_real(void* self) {
    return Poppler__PageTransition_DurationReal((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_alignment(void* self) {
    return Poppler__PageTransition_Alignment((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_direction(void* self) {
    return Poppler__PageTransition_Direction((Poppler__PageTransition*)self);
}

int32_t q_poppler__pagetransition_angle(void* self) {
    return Poppler__PageTransition_Angle((Poppler__PageTransition*)self);
}

double q_poppler__pagetransition_scale(void* self) {
    return Poppler__PageTransition_Scale((Poppler__PageTransition*)self);
}

bool q_poppler__pagetransition_is_rectangular(void* self) {
    return Poppler__PageTransition_IsRectangular((Poppler__PageTransition*)self);
}

void q_poppler__pagetransition_delete(void* self) {
    Poppler__PageTransition_Delete((Poppler__PageTransition*)(self));
}
