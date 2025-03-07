#include "libqpoint.hpp"
#include "libqeasingcurve.hpp"
#include "libqeasingcurve.h"

/// https://doc.qt.io/qt-6/qeasingcurve.html

/// q_easingcurve_new constructs a new QEasingCurve object.
///
///
QEasingCurve* q_easingcurve_new() {
    return QEasingCurve_new();
}

/// q_easingcurve_new2 constructs a new QEasingCurve object.
///
/// ``` QEasingCurve* other ```
QEasingCurve* q_easingcurve_new2(void* other) {
    return QEasingCurve_new2((QEasingCurve*)other);
}

/// q_easingcurve_new3 constructs a new QEasingCurve object.
///
/// ``` enum QEasingCurve__Type typeVal ```
QEasingCurve* q_easingcurve_new3(int64_t typeVal) {
    return QEasingCurve_new3(typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#operator=)
///
/// ``` QEasingCurve* self, QEasingCurve* other ```
void q_easingcurve_operator_assign(void* self, void* other) {
    QEasingCurve_OperatorAssign((QEasingCurve*)self, (QEasingCurve*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#swap)
///
/// ``` QEasingCurve* self, QEasingCurve* other ```
void q_easingcurve_swap(void* self, void* other) {
    QEasingCurve_Swap((QEasingCurve*)self, (QEasingCurve*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#operator==)
///
/// ``` QEasingCurve* self, QEasingCurve* other ```
bool q_easingcurve_operator_equal(void* self, void* other) {
    return QEasingCurve_OperatorEqual((QEasingCurve*)self, (QEasingCurve*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#operator!=)
///
/// ``` QEasingCurve* self, QEasingCurve* other ```
bool q_easingcurve_operator_not_equal(void* self, void* other) {
    return QEasingCurve_OperatorNotEqual((QEasingCurve*)self, (QEasingCurve*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#amplitude)
///
/// ``` QEasingCurve* self ```
double q_easingcurve_amplitude(void* self) {
    return QEasingCurve_Amplitude((QEasingCurve*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setAmplitude)
///
/// ``` QEasingCurve* self, double amplitude ```
void q_easingcurve_set_amplitude(void* self, double amplitude) {
    QEasingCurve_SetAmplitude((QEasingCurve*)self, amplitude);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#period)
///
/// ``` QEasingCurve* self ```
double q_easingcurve_period(void* self) {
    return QEasingCurve_Period((QEasingCurve*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setPeriod)
///
/// ``` QEasingCurve* self, double period ```
void q_easingcurve_set_period(void* self, double period) {
    QEasingCurve_SetPeriod((QEasingCurve*)self, period);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#overshoot)
///
/// ``` QEasingCurve* self ```
double q_easingcurve_overshoot(void* self) {
    return QEasingCurve_Overshoot((QEasingCurve*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setOvershoot)
///
/// ``` QEasingCurve* self, double overshoot ```
void q_easingcurve_set_overshoot(void* self, double overshoot) {
    QEasingCurve_SetOvershoot((QEasingCurve*)self, overshoot);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#addCubicBezierSegment)
///
/// ``` QEasingCurve* self, QPointF* c1, QPointF* c2, QPointF* endPoint ```
void q_easingcurve_add_cubic_bezier_segment(void* self, void* c1, void* c2, void* endPoint) {
    QEasingCurve_AddCubicBezierSegment((QEasingCurve*)self, (QPointF*)c1, (QPointF*)c2, (QPointF*)endPoint);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#addTCBSegment)
///
/// ``` QEasingCurve* self, QPointF* nextPoint, double t, double c, double b ```
void q_easingcurve_add_t_c_b_segment(void* self, void* nextPoint, double t, double c, double b) {
    QEasingCurve_AddTCBSegment((QEasingCurve*)self, (QPointF*)nextPoint, t, c, b);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#toCubicSpline)
///
/// ``` QEasingCurve* self ```
libqt_list /* of QPointF* */ q_easingcurve_to_cubic_spline(void* self) {
    libqt_list _arr = QEasingCurve_ToCubicSpline((QEasingCurve*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#type)
///
/// ``` QEasingCurve* self ```
int64_t q_easingcurve_type(void* self) {
    return QEasingCurve_Type((QEasingCurve*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#setType)
///
/// ``` QEasingCurve* self, enum QEasingCurve__Type typeVal ```
void q_easingcurve_set_type(void* self, int64_t typeVal) {
    QEasingCurve_SetType((QEasingCurve*)self, typeVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qeasingcurve.html#valueForProgress)
///
/// ``` QEasingCurve* self, double progress ```
double q_easingcurve_value_for_progress(void* self, double progress) {
    return QEasingCurve_ValueForProgress((QEasingCurve*)self, progress);
}

/// Delete this object from C++ memory.
///
/// ``` QEasingCurve* self ```
void q_easingcurve_delete(void* self) {
    QEasingCurve_Delete((QEasingCurve*)(self));
}