#pragma once
#ifndef RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_PAGE_TRANSITION_H
#define RESTRICTED_EXTRAS_POPPLER_LIBPOPPLER_PAGE_TRANSITION_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)

/// q_poppler__pagetransition_new constructs a new Poppler::PageTransition object.
///
/// @param pt Poppler__PageTransition*
///
Poppler__PageTransition* q_poppler__pagetransition_new(const void* pt);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self Poppler__PageTransition*
/// @param other Poppler__PageTransition*
///
void q_poppler__pagetransition_operator_assign(void* self, const void* other);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
/// @return enum Poppler__PageTransition__Type
///
int32_t q_poppler__pagetransition_type(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
double q_poppler__pagetransition_duration_real(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
/// @return enum Poppler__PageTransition__Alignment
///
int32_t q_poppler__pagetransition_alignment(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
/// @return enum Poppler__PageTransition__Direction
///
int32_t q_poppler__pagetransition_direction(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
int32_t q_poppler__pagetransition_angle(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
double q_poppler__pagetransition_scale(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// @param self const Poppler__PageTransition*
///
bool q_poppler__pagetransition_is_rectangular(const void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
///
/// Delete this object from C++ memory.
///
/// @param self Poppler__PageTransition*
///
void q_poppler__pagetransition_delete(void* self);

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)

typedef enum {
    POPPLER_PAGETRANSITION_TYPE_REPLACE = 0,
    POPPLER_PAGETRANSITION_TYPE_SPLIT = 1,
    POPPLER_PAGETRANSITION_TYPE_BLINDS = 2,
    POPPLER_PAGETRANSITION_TYPE_BOX = 3,
    POPPLER_PAGETRANSITION_TYPE_WIPE = 4,
    POPPLER_PAGETRANSITION_TYPE_DISSOLVE = 5,
    POPPLER_PAGETRANSITION_TYPE_GLITTER = 6,
    POPPLER_PAGETRANSITION_TYPE_FLY = 7,
    POPPLER_PAGETRANSITION_TYPE_PUSH = 8,
    POPPLER_PAGETRANSITION_TYPE_COVER = 9,
    POPPLER_PAGETRANSITION_TYPE_UNCOVER = 10,
    POPPLER_PAGETRANSITION_TYPE_FADE = 11
} Poppler__PageTransition__Type;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)

typedef enum {
    POPPLER_PAGETRANSITION_ALIGNMENT_HORIZONTAL = 0,
    POPPLER_PAGETRANSITION_ALIGNMENT_VERTICAL = 1
} Poppler__PageTransition__Alignment;

/// [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)

typedef enum {
    POPPLER_PAGETRANSITION_DIRECTION_INWARD = 0,
    POPPLER_PAGETRANSITION_DIRECTION_OUTWARD = 1
} Poppler__PageTransition__Direction;

#endif
