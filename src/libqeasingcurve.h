#pragma once
#ifndef SRC_QT6C_LIBQEASINGCURVE_H
#define SRC_QT6C_LIBQEASINGCURVE_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qeasingcurve.html

/// q_easingcurve_new constructs a new QEasingCurve object.
///
QEasingCurve* q_easingcurve_new();

/// q_easingcurve_new2 constructs a new QEasingCurve object.
///
/// @param other QEasingCurve*
QEasingCurve* q_easingcurve_new2(void* other);

/// q_easingcurve_new3 constructs a new QEasingCurve object.
///
/// @param type enum QEasingCurve__Type
QEasingCurve* q_easingcurve_new3(int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#operator-eq)
///
/// @param self QEasingCurve*
/// @param other QEasingCurve*
void q_easingcurve_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#swap)
///
/// @param self QEasingCurve*
/// @param other QEasingCurve*
void q_easingcurve_swap(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#amplitude)
///
/// @param self QEasingCurve*
double q_easingcurve_amplitude(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setAmplitude)
///
/// @param self QEasingCurve*
/// @param amplitude double
void q_easingcurve_set_amplitude(void* self, double amplitude);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#period)
///
/// @param self QEasingCurve*
double q_easingcurve_period(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setPeriod)
///
/// @param self QEasingCurve*
/// @param period double
void q_easingcurve_set_period(void* self, double period);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#overshoot)
///
/// @param self QEasingCurve*
double q_easingcurve_overshoot(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setOvershoot)
///
/// @param self QEasingCurve*
/// @param overshoot double
void q_easingcurve_set_overshoot(void* self, double overshoot);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#addCubicBezierSegment)
///
/// @param self QEasingCurve*
/// @param c1 QPointF*
/// @param c2 QPointF*
/// @param endPoint QPointF*
void q_easingcurve_add_cubic_bezier_segment(void* self, void* c1, void* c2, void* endPoint);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#addTCBSegment)
///
/// @param self QEasingCurve*
/// @param nextPoint QPointF*
/// @param t double
/// @param c double
/// @param b double
void q_easingcurve_add_t_c_b_segment(void* self, void* nextPoint, double t, double c, double b);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#toCubicSpline)
///
/// @param self QEasingCurve*
libqt_list /* of QPointF* */ q_easingcurve_to_cubic_spline(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#type)
///
/// @param self QEasingCurve*
///
/// @return enum QEasingCurve__Type
int32_t q_easingcurve_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setType)
///
/// @param self QEasingCurve*
/// @param type enum QEasingCurve__Type
void q_easingcurve_set_type(void* self, int32_t type);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#valueForProgress)
///
/// @param self QEasingCurve*
/// @param progress double
double q_easingcurve_value_for_progress(void* self, double progress);

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#dtor.QEasingCurve)
///
/// Delete this object from C++ memory.
///
/// @param self QEasingCurve*
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
