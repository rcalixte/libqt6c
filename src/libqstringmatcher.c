#include "libqchar.hpp"
#include <string.h>
#include "libqstringmatcher.hpp"
#include "libqstringmatcher.h"

QStringMatcher* q_stringmatcher_new() {
    return QStringMatcher_new();
}

QStringMatcher* q_stringmatcher_new2(const char* pattern) {
    return QStringMatcher_new2(qstring(pattern));
}

QStringMatcher* q_stringmatcher_new3(void* uc, int64_t lenVal) {
    return QStringMatcher_new3((QChar*)uc, lenVal);
}

QStringMatcher* q_stringmatcher_new4(void* other) {
    return QStringMatcher_new4((QStringMatcher*)other);
}

QStringMatcher* q_stringmatcher_new5(const char* pattern, int64_t cs) {
    return QStringMatcher_new5(qstring(pattern), cs);
}

QStringMatcher* q_stringmatcher_new6(void* uc, int64_t lenVal, int64_t cs) {
    return QStringMatcher_new6((QChar*)uc, lenVal, cs);
}

void q_stringmatcher_operator_assign(void* self, void* other) {
    QStringMatcher_OperatorAssign((QStringMatcher*)self, (QStringMatcher*)other);
}

void q_stringmatcher_set_pattern(void* self, const char* pattern) {
    QStringMatcher_SetPattern((QStringMatcher*)self, qstring(pattern));
}

void q_stringmatcher_set_case_sensitivity(void* self, int64_t cs) {
    QStringMatcher_SetCaseSensitivity((QStringMatcher*)self, cs);
}

int64_t q_stringmatcher_index_in(void* self, const char* str) {
    return QStringMatcher_IndexIn((QStringMatcher*)self, qstring(str));
}

int64_t q_stringmatcher_index_in2(void* self, void* str, int64_t length) {
    return QStringMatcher_IndexIn2((QStringMatcher*)self, (QChar*)str, length);
}

const char* q_stringmatcher_pattern(void* self) {
    libqt_string _str = QStringMatcher_Pattern((QStringMatcher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_stringmatcher_case_sensitivity(void* self) {
    return QStringMatcher_CaseSensitivity((QStringMatcher*)self);
}

int64_t q_stringmatcher_index_in22(void* self, const char* str, int64_t from) {
    return QStringMatcher_IndexIn22((QStringMatcher*)self, qstring(str), from);
}

int64_t q_stringmatcher_index_in32(void* self, void* str, int64_t length, int64_t from) {
    return QStringMatcher_IndexIn32((QStringMatcher*)self, (QChar*)str, length, from);
}

void q_stringmatcher_delete(void* self) {
    QStringMatcher_Delete((QStringMatcher*)(self));
}
