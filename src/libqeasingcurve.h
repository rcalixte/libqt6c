#pragma once
#ifndef SRCQT6C_LIBQEASINGCURVE_H
#define SRCQT6C_LIBQEASINGCURVE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqpoint.h"

QEasingCurve* q_easingcurve_new();
QEasingCurve* q_easingcurve_new2(void* other);
QEasingCurve* q_easingcurve_new3(int64_t typeVal);
void q_easingcurve_operator_assign(void* self, void* other);
void q_easingcurve_swap(void* self, void* other);
bool q_easingcurve_operator_equal(void* self, void* other);
bool q_easingcurve_operator_not_equal(void* self, void* other);
double q_easingcurve_amplitude(void* self);
void q_easingcurve_set_amplitude(void* self, double amplitude);
double q_easingcurve_period(void* self);
void q_easingcurve_set_period(void* self, double period);
double q_easingcurve_overshoot(void* self);
void q_easingcurve_set_overshoot(void* self, double overshoot);
void q_easingcurve_add_cubic_bezier_segment(void* self, void* c1, void* c2, void* endPoint);
void q_easingcurve_add_t_c_b_segment(void* self, void* nextPoint, double t, double c, double b);
libqt_list /* of QPointF* */ q_easingcurve_to_cubic_spline(void* self);
int64_t q_easingcurve_type(void* self);
void q_easingcurve_set_type(void* self, int64_t typeVal);
double q_easingcurve_value_for_progress(void* self, double progress);
void q_easingcurve_delete(void* self);

/// https://doc.qt.io/qt-6/qeasingcurve.html#types

typedef enum {
    QEASINGCURVE_TYPE_LINEAR = 0,
    QEASINGCURVE_TYPE_INQUAD = 1,
    QEASINGCURVE_TYPE_OUTQUAD = 2,
    QEASINGCURVE_TYPE_INOUTQUAD = 3,
    QEASINGCURVE_TYPE_OUTINQUAD = 4,
    QEASINGCURVE_TYPE_INCUBIC = 5,
    QEASINGCURVE_TYPE_OUTCUBIC = 6,
    QEASINGCURVE_TYPE_INOUTCUBIC = 7,
    QEASINGCURVE_TYPE_OUTINCUBIC = 8,
    QEASINGCURVE_TYPE_INQUART = 9,
    QEASINGCURVE_TYPE_OUTQUART = 10,
    QEASINGCURVE_TYPE_INOUTQUART = 11,
    QEASINGCURVE_TYPE_OUTINQUART = 12,
    QEASINGCURVE_TYPE_INQUINT = 13,
    QEASINGCURVE_TYPE_OUTQUINT = 14,
    QEASINGCURVE_TYPE_INOUTQUINT = 15,
    QEASINGCURVE_TYPE_OUTINQUINT = 16,
    QEASINGCURVE_TYPE_INSINE = 17,
    QEASINGCURVE_TYPE_OUTSINE = 18,
    QEASINGCURVE_TYPE_INOUTSINE = 19,
    QEASINGCURVE_TYPE_OUTINSINE = 20,
    QEASINGCURVE_TYPE_INEXPO = 21,
    QEASINGCURVE_TYPE_OUTEXPO = 22,
    QEASINGCURVE_TYPE_INOUTEXPO = 23,
    QEASINGCURVE_TYPE_OUTINEXPO = 24,
    QEASINGCURVE_TYPE_INCIRC = 25,
    QEASINGCURVE_TYPE_OUTCIRC = 26,
    QEASINGCURVE_TYPE_INOUTCIRC = 27,
    QEASINGCURVE_TYPE_OUTINCIRC = 28,
    QEASINGCURVE_TYPE_INELASTIC = 29,
    QEASINGCURVE_TYPE_OUTELASTIC = 30,
    QEASINGCURVE_TYPE_INOUTELASTIC = 31,
    QEASINGCURVE_TYPE_OUTINELASTIC = 32,
    QEASINGCURVE_TYPE_INBACK = 33,
    QEASINGCURVE_TYPE_OUTBACK = 34,
    QEASINGCURVE_TYPE_INOUTBACK = 35,
    QEASINGCURVE_TYPE_OUTINBACK = 36,
    QEASINGCURVE_TYPE_INBOUNCE = 37,
    QEASINGCURVE_TYPE_OUTBOUNCE = 38,
    QEASINGCURVE_TYPE_INOUTBOUNCE = 39,
    QEASINGCURVE_TYPE_OUTINBOUNCE = 40,
    QEASINGCURVE_TYPE_INCURVE = 41,
    QEASINGCURVE_TYPE_OUTCURVE = 42,
    QEASINGCURVE_TYPE_SINECURVE = 43,
    QEASINGCURVE_TYPE_COSINECURVE = 44,
    QEASINGCURVE_TYPE_BEZIERSPLINE = 45,
    QEASINGCURVE_TYPE_TCBSPLINE = 46,
    QEASINGCURVE_TYPE_CUSTOM = 47,
    QEASINGCURVE_TYPE_NCURVETYPES = 48
} QEasingCurve__Type;

#endif
