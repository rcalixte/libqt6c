#include "libqbytearrayview.hpp"
#include "libqbytearraymatcher.hpp"
#include "libqbytearraymatcher.h"

/// https://doc.qt.io/qt-6/qbytearraymatcher.html

/// q_bytearraymatcher_new constructs a new QByteArrayMatcher object.
///
///
QByteArrayMatcher* q_bytearraymatcher_new() {
    return QByteArrayMatcher_new();
}

/// q_bytearraymatcher_new2 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new2(const char* pattern) {
    return QByteArrayMatcher_new2(qstring(pattern));
}

/// q_bytearraymatcher_new3 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new3(const char* pattern) {
    libqt_strview pattern_strview = qstrview(pattern);

    return QByteArrayMatcher_new3((QByteArrayView*)&pattern_strview);
}

/// q_bytearraymatcher_new4 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern ```
QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern) {
    return QByteArrayMatcher_new4(pattern);
}

/// q_bytearraymatcher_new5 constructs a new QByteArrayMatcher object.
///
/// ``` QByteArrayMatcher* other ```
QByteArrayMatcher* q_bytearraymatcher_new5(void* other) {
    return QByteArrayMatcher_new5((QByteArrayMatcher*)other);
}

/// q_bytearraymatcher_new6 constructs a new QByteArrayMatcher object.
///
/// ``` const char* pattern, int64_t length ```
QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, int64_t length) {
    return QByteArrayMatcher_new6(pattern, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#operator=)
///
/// ``` QByteArrayMatcher* self, QByteArrayMatcher* other ```
void q_bytearraymatcher_operator_assign(void* self, void* other) {
    QByteArrayMatcher_OperatorAssign((QByteArrayMatcher*)self, (QByteArrayMatcher*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#setPattern)
///
/// ``` QByteArrayMatcher* self, const char* pattern ```
void q_bytearraymatcher_set_pattern(void* self, const char* pattern) {
    QByteArrayMatcher_SetPattern((QByteArrayMatcher*)self, qstring(pattern));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* str, int64_t lenVal ```
int64_t q_bytearraymatcher_index_in(void* self, const char* str, int64_t lenVal) {
    return QByteArrayMatcher_IndexIn((QByteArrayMatcher*)self, str, lenVal);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* data ```
int64_t q_bytearraymatcher_index_in_with_data(void* self, const char* data) {
    libqt_strview data_strview = qstrview(data);
    return QByteArrayMatcher_IndexInWithData((QByteArrayMatcher*)self, (QByteArrayView*)&data_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#pattern)
///
/// ``` QByteArrayMatcher* self ```
char* q_bytearraymatcher_pattern(void* self) {
    libqt_string _str = QByteArrayMatcher_Pattern((QByteArrayMatcher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* str, int64_t lenVal, int64_t from ```
int64_t q_bytearraymatcher_index_in3(void* self, const char* str, int64_t lenVal, int64_t from) {
    return QByteArrayMatcher_IndexIn3((QByteArrayMatcher*)self, str, lenVal, from);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qbytearraymatcher.html#indexIn)
///
/// ``` QByteArrayMatcher* self, const char* data, int64_t from ```
int64_t q_bytearraymatcher_index_in2(void* self, const char* data, int64_t from) {
    libqt_strview data_strview = qstrview(data);
    return QByteArrayMatcher_IndexIn2((QByteArrayMatcher*)self, (QByteArrayView*)&data_strview, from);
}

/// Delete this object from C++ memory.
///
/// ``` QByteArrayMatcher* self ```
void q_bytearraymatcher_delete(void* self) {
    QByteArrayMatcher_Delete((QByteArrayMatcher*)(self));
}

/// https://doc.qt.io/qt-6/qstaticbytearraymatcherbase.html

/// q_staticbytearraymatcherbase_new constructs a new QStaticByteArrayMatcherBase object.
///
/// ``` QStaticByteArrayMatcherBase* other ```
QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other) {
    return QStaticByteArrayMatcherBase_new((QStaticByteArrayMatcherBase*)other);
}

/// q_staticbytearraymatcherbase_copy_assign shallow copies `other` into `self`.
///
/// ``` QStaticByteArrayMatcherBase* self, QStaticByteArrayMatcherBase* other ```
void q_staticbytearraymatcherbase_copy_assign(void* self, void* other) {
    QStaticByteArrayMatcherBase_CopyAssign((QStaticByteArrayMatcherBase*)self, (QStaticByteArrayMatcherBase*)other);
}
