#include "libqnumeric.hpp"
#include "libqnumeric.h"

bool q_qnumeric_q_is_inf(double d) {
    return qnumeric_QIsInf(d);
}

bool q_qnumeric_q_is_na_n(double d) {
    return qnumeric_QIsNaN(d);
}

bool q_qnumeric_q_is_finite(double d) {
    return qnumeric_QIsFinite(d);
}

int32_t q_qnumeric_q_fp_classify(double val) {
    return qnumeric_QFpClassify(val);
}

bool q_qnumeric_q_is_inf2(float f) {
    return qnumeric_QIsInf2(f);
}

bool q_qnumeric_q_is_na_n2(float f) {
    return qnumeric_QIsNaN2(f);
}

bool q_qnumeric_q_is_finite2(float f) {
    return qnumeric_QIsFinite2(f);
}

int32_t q_qnumeric_q_fp_classify2(float val) {
    return qnumeric_QFpClassify2(val);
}

double q_qnumeric_q_s_na_n() {
    return qnumeric_QSNaN();
}

double q_qnumeric_q_q_na_n() {
    return qnumeric_QQNaN();
}

double q_qnumeric_q_inf() {
    return qnumeric_QInf();
}

uint32_t q_qnumeric_q_float_distance(float a, float b) {
    return qnumeric_QFloatDistance(a, b);
}

uint64_t q_qnumeric_q_float_distance2(double a, double b) {
    return qnumeric_QFloatDistance2(a, b);
}

int32_t q_qnumeric_q_round(double d) {
    return qnumeric_QRound(d);
}

int32_t q_qnumeric_q_round2(float f) {
    return qnumeric_QRound2(f);
}

int64_t q_qnumeric_q_round64(double d) {
    return qnumeric_QRound64(d);
}

int64_t q_qnumeric_q_round642(float f) {
    return qnumeric_QRound642(f);
}

bool q_qnumeric_q_fuzzy_compare(double p1, double p2) {
    return qnumeric_QFuzzyCompare(p1, p2);
}

bool q_qnumeric_q_fuzzy_compare2(float p1, float p2) {
    return qnumeric_QFuzzyCompare2(p1, p2);
}

bool q_qnumeric_q_fuzzy_is_null(double d) {
    return qnumeric_QFuzzyIsNull(d);
}

bool q_qnumeric_q_fuzzy_is_null2(float f) {
    return qnumeric_QFuzzyIsNull2(f);
}

bool q_qnumeric_q_is_null(double d) {
    return qnumeric_QIsNull(d);
}

bool q_qnumeric_q_is_null2(float f) {
    return qnumeric_QIsNull2(f);
}

int32_t q_qnumeric_q_int_cast(double f) {
    return qnumeric_QIntCast(f);
}

int32_t q_qnumeric_q_int_cast2(float f) {
    return qnumeric_QIntCast2(f);
}
