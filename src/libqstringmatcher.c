#include "libqchar.hpp"
#include <string.h>
#include "libqstringmatcher.hpp"
#include "libqstringmatcher.h"

/// https://doc.qt.io/qt-6/qstringmatcher.html

/// q_stringmatcher_new constructs a new QStringMatcher object.
///
///
QStringMatcher* q_stringmatcher_new() {
    return QStringMatcher_new();
}

/// q_stringmatcher_new2 constructs a new QStringMatcher object.
///
/// ``` const char* pattern ```
QStringMatcher* q_stringmatcher_new2(const char* pattern) {
    return QStringMatcher_new2(qstring(pattern));
}

/// q_stringmatcher_new3 constructs a new QStringMatcher object.
///
/// ``` QChar* uc, int64_t lenVal ```
QStringMatcher* q_stringmatcher_new3(void* uc, int64_t lenVal) {
    return QStringMatcher_new3((QChar*)uc, lenVal);
}

/// q_stringmatcher_new4 constructs a new QStringMatcher object.
///
/// ``` QStringMatcher* other ```
QStringMatcher* q_stringmatcher_new4(void* other) {
    return QStringMatcher_new4((QStringMatcher*)other);
}

/// q_stringmatcher_new5 constructs a new QStringMatcher object.
///
/// ``` const char* pattern, enum Qt__CaseSensitivity cs ```
QStringMatcher* q_stringmatcher_new5(const char* pattern, int64_t cs) {
    return QStringMatcher_new5(qstring(pattern), cs);
}

/// q_stringmatcher_new6 constructs a new QStringMatcher object.
///
/// ``` QChar* uc, int64_t lenVal, enum Qt__CaseSensitivity cs ```
QStringMatcher* q_stringmatcher_new6(void* uc, int64_t lenVal, int64_t cs) {
    return QStringMatcher_new6((QChar*)uc, lenVal, cs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#operator=)
///
/// ``` QStringMatcher* self, QStringMatcher* other ```
void q_stringmatcher_operator_assign(void* self, void* other) {
    QStringMatcher_OperatorAssign((QStringMatcher*)self, (QStringMatcher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#setPattern)
///
/// ``` QStringMatcher* self, const char* pattern ```
void q_stringmatcher_set_pattern(void* self, const char* pattern) {
    QStringMatcher_SetPattern((QStringMatcher*)self, qstring(pattern));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#setCaseSensitivity)
///
/// ``` QStringMatcher* self, enum Qt__CaseSensitivity cs ```
void q_stringmatcher_set_case_sensitivity(void* self, int64_t cs) {
    QStringMatcher_SetCaseSensitivity((QStringMatcher*)self, cs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, const char* str ```
int64_t q_stringmatcher_index_in(void* self, const char* str) {
    return QStringMatcher_IndexIn((QStringMatcher*)self, qstring(str));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, QChar* str, int64_t length ```
int64_t q_stringmatcher_index_in2(void* self, void* str, int64_t length) {
    return QStringMatcher_IndexIn2((QStringMatcher*)self, (QChar*)str, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#pattern)
///
/// ``` QStringMatcher* self ```
const char* q_stringmatcher_pattern(void* self) {
    libqt_string _str = QStringMatcher_Pattern((QStringMatcher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#caseSensitivity)
///
/// ``` QStringMatcher* self ```
int64_t q_stringmatcher_case_sensitivity(void* self) {
    return QStringMatcher_CaseSensitivity((QStringMatcher*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, const char* str, int64_t from ```
int64_t q_stringmatcher_index_in22(void* self, const char* str, int64_t from) {
    return QStringMatcher_IndexIn22((QStringMatcher*)self, qstring(str), from);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringmatcher.html#indexIn)
///
/// ``` QStringMatcher* self, QChar* str, int64_t length, int64_t from ```
int64_t q_stringmatcher_index_in3(void* self, void* str, int64_t length, int64_t from) {
    return QStringMatcher_IndexIn3((QStringMatcher*)self, (QChar*)str, length, from);
}

/// Delete this object from C++ memory.
///
/// ``` QStringMatcher* self ```
void q_stringmatcher_delete(void* self) {
    QStringMatcher_Delete((QStringMatcher*)(self));
}