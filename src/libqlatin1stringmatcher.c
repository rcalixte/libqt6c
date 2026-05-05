#include "libqlatin1stringmatcher.hpp"
#include "libqlatin1stringmatcher.h"

QLatin1StringMatcher* q_latin1stringmatcher_new() {
    return QLatin1StringMatcher_new();
}

QLatin1StringMatcher* q_latin1stringmatcher_new2(const char* pattern) {
    return QLatin1StringMatcher_new2(qstring(pattern));
}

QLatin1StringMatcher* q_latin1stringmatcher_new3(const char* pattern, int32_t cs) {
    return QLatin1StringMatcher_new3(qstring(pattern), cs);
}

void q_latin1stringmatcher_set_pattern(void* self, const char* pattern) {
    QLatin1StringMatcher_SetPattern((QLatin1StringMatcher*)self, qstring(pattern));
}

const char* q_latin1stringmatcher_pattern(void* self) {
    libqt_string _str = QLatin1StringMatcher_Pattern((QLatin1StringMatcher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_latin1stringmatcher_set_case_sensitivity(void* self, int32_t cs) {
    QLatin1StringMatcher_SetCaseSensitivity((QLatin1StringMatcher*)self, cs);
}

int32_t q_latin1stringmatcher_case_sensitivity(void* self) {
    return QLatin1StringMatcher_CaseSensitivity((QLatin1StringMatcher*)self);
}

intptr_t q_latin1stringmatcher_index_in(void* self, const char* haystack) {
    return QLatin1StringMatcher_IndexIn((QLatin1StringMatcher*)self, qstring(haystack));
}

intptr_t q_latin1stringmatcher_index_in22(void* self, const char* haystack, intptr_t from) {
    return QLatin1StringMatcher_IndexIn22((QLatin1StringMatcher*)self, qstring(haystack), from);
}

void q_latin1stringmatcher_delete(void* self) {
    QLatin1StringMatcher_Delete((QLatin1StringMatcher*)(self));
}
