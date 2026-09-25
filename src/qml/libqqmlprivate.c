#include "libqqmlprivate.hpp"
#include "libqqmlprivate.h"

size_t q_qqmlprivate_h_q_hash(QObject* (*func)(void* funcparam1), size_t seed) {
    return qqmlprivate_h_QHash((intptr_t)func, seed);
}
