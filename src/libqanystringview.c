#include "libqchar.hpp"
#include "libqanystringview.hpp"
#include "libqanystringview.h"

int32_t q_anystringview_compare(const char* lhs, const char* rhs) {
    return QAnyStringView_Compare(lhs, rhs);
}

bool q_anystringview_equal(const char* lhs, const char* rhs) {
    return QAnyStringView_Equal(lhs, rhs);
}

int32_t q_anystringview_compare3(const char* lhs, const char* rhs, int32_t cs) {
    return QAnyStringView_Compare3(lhs, rhs, cs);
}
