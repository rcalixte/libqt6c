#include "libqassert.hpp"
#include "libqassert.h"

void q_qassert_h_assert(const char* assertion, const char* file, int line) {
    qassert_h_Assert(assertion, file, line);
}

void q_qassert_h_assert_x(const char* where, const char* what, const char* file, int line) {
    qassert_h_AssertX(where, what, file, line);
}

void q_qassert_h_check_pointer(const char* param1, int param2) {
    qassert_h_CheckPointer(param1, param2);
}

bool q_qassert_h_assume_is_deprecated(bool cond) {
    return qassert_h_AssumeIsDeprecated(cond);
}
