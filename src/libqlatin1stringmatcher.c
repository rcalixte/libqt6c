#include "libqlatin1stringmatcher.hpp"
#include "libqlatin1stringmatcher.h"

QLatin1StringMatcher* q_latin1stringmatcher_new() {
    return QLatin1StringMatcher_new();
}

void q_latin1stringmatcher_set_case_sensitivity(void* self, int64_t cs) {
    QLatin1StringMatcher_SetCaseSensitivity((QLatin1StringMatcher*)self, cs);
}

int64_t q_latin1stringmatcher_case_sensitivity(void* self) {
    return QLatin1StringMatcher_CaseSensitivity((QLatin1StringMatcher*)self);
}

void q_latin1stringmatcher_delete(void* self) {
    QLatin1StringMatcher_Delete((QLatin1StringMatcher*)(self));
}
