#include "libqpoint.hpp"
#include "libqeasingcurve.hpp"
#include "libqeasingcurve.h"

QEasingCurve* q_easingcurve_new() {
    return QEasingCurve_new();
}

QEasingCurve* q_easingcurve_new2(void* other) {
    return QEasingCurve_new2((QEasingCurve*)other);
}

QEasingCurve* q_easingcurve_new3(int64_t typeVal) {
    return QEasingCurve_new3(typeVal);
}

void q_easingcurve_operator_assign(void* self, void* other) {
    QEasingCurve_OperatorAssign((QEasingCurve*)self, (QEasingCurve*)other);
}

void q_easingcurve_swap(void* self, void* other) {
    QEasingCurve_Swap((QEasingCurve*)self, (QEasingCurve*)other);
}

double q_easingcurve_amplitude(void* self) {
    return QEasingCurve_Amplitude((QEasingCurve*)self);
}

void q_easingcurve_set_amplitude(void* self, double amplitude) {
    QEasingCurve_SetAmplitude((QEasingCurve*)self, amplitude);
}

double q_easingcurve_period(void* self) {
    return QEasingCurve_Period((QEasingCurve*)self);
}

void q_easingcurve_set_period(void* self, double period) {
    QEasingCurve_SetPeriod((QEasingCurve*)self, period);
}

double q_easingcurve_overshoot(void* self) {
    return QEasingCurve_Overshoot((QEasingCurve*)self);
}

void q_easingcurve_set_overshoot(void* self, double overshoot) {
    QEasingCurve_SetOvershoot((QEasingCurve*)self, overshoot);
}

void q_easingcurve_add_cubic_bezier_segment(void* self, void* c1, void* c2, void* endPoint) {
    QEasingCurve_AddCubicBezierSegment((QEasingCurve*)self, (QPointF*)c1, (QPointF*)c2, (QPointF*)endPoint);
}

void q_easingcurve_add_t_c_b_segment(void* self, void* nextPoint, double t, double c, double b) {
    QEasingCurve_AddTCBSegment((QEasingCurve*)self, (QPointF*)nextPoint, t, c, b);
}

libqt_list /* of QPointF* */ q_easingcurve_to_cubic_spline(void* self) {
    libqt_list _arr = QEasingCurve_ToCubicSpline((QEasingCurve*)self);
    return _arr;
}

int64_t q_easingcurve_type(void* self) {
    return QEasingCurve_Type((QEasingCurve*)self);
}

void q_easingcurve_set_type(void* self, int64_t typeVal) {
    QEasingCurve_SetType((QEasingCurve*)self, typeVal);
}

double q_easingcurve_value_for_progress(void* self, double progress) {
    return QEasingCurve_ValueForProgress((QEasingCurve*)self, progress);
}

void q_easingcurve_delete(void* self) {
    QEasingCurve_Delete((QEasingCurve*)(self));
}
