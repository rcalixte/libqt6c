#include "libqqmlprivate.hpp"
#include "libqqmlprivate.h"

uintptr_t q_qqmlprivate_h_q_hash(QObject* (*func)(void* funcparam1), uintptr_t seed) {
    return qqmlprivate_h_QHash((intptr_t)func, seed);
}
