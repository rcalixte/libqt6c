#include "libqassert.hpp"
#include "libqassert.h"

void q_qassert_assert(const char* assertion, const char* file, int line) {
    qassert_Assert(assertion, file, line);
}

void q_qassert_assert_x(const char* where, const char* what, const char* file, int line) {
    qassert_AssertX(where, what, file, line);
}

void q_qassert_check_pointer(const char* param1, int param2) {
    qassert_CheckPointer(param1, param2);
}

void q_qassert_q_bad_alloc() {
    qassert_QBadAlloc();
}

bool q_qassert_assume_is_deprecated(bool cond) {
    return qassert_AssumeIsDeprecated(cond);
}
