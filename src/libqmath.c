#include "libqmath.hpp"
#include "libqmath.h"

double q_qmath_q_fast_sin(double x) {
    return qmath_QFastSin(x);
}

double q_qmath_q_fast_cos(double x) {
    return qmath_QFastCos(x);
}

float q_qmath_q_degrees_to_radians(float degrees) {
    return qmath_QDegreesToRadians(degrees);
}

double q_qmath_q_degrees_to_radians2(double degrees) {
    return qmath_QDegreesToRadians2(degrees);
}

float q_qmath_q_radians_to_degrees(float radians) {
    return qmath_QRadiansToDegrees(radians);
}

double q_qmath_q_radians_to_degrees2(double radians) {
    return qmath_QRadiansToDegrees2(radians);
}

uint32_t q_qmath_q_next_power_of_two(uint32_t v) {
    return qmath_QNextPowerOfTwo(v);
}

uint64_t q_qmath_q_next_power_of_two2(uint64_t v) {
    return qmath_QNextPowerOfTwo2(v);
}

uint32_t q_qmath_q_next_power_of_two3(int32_t v) {
    return qmath_QNextPowerOfTwo3(v);
}

uint64_t q_qmath_q_next_power_of_two4(int64_t v) {
    return qmath_QNextPowerOfTwo4(v);
}

uintptr_t q_qmath_q_next_power_of_two5(uintptr_t v) {
    return qmath_QNextPowerOfTwo5(v);
}

uintptr_t q_qmath_q_next_power_of_two6(long v) {
    return qmath_QNextPowerOfTwo6(v);
}
