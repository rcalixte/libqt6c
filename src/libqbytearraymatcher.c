#include "libqbytearrayview.hpp"
#include "libqbytearraymatcher.hpp"
#include "libqbytearraymatcher.h"

QByteArrayMatcher* q_bytearraymatcher_new() {
    return QByteArrayMatcher_new();
}

QByteArrayMatcher* q_bytearraymatcher_new2(const char* pattern) {
    return QByteArrayMatcher_new2(qstring(pattern));
}

QByteArrayMatcher* q_bytearraymatcher_new3(const char* pattern) {
    libqt_string pattern_string = qstring(pattern);

    return QByteArrayMatcher_new3((QByteArrayView*)&pattern_string);
}

QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern) {
    return QByteArrayMatcher_new4(pattern);
}

QByteArrayMatcher* q_bytearraymatcher_new5(void* other) {
    return QByteArrayMatcher_new5((QByteArrayMatcher*)other);
}

QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, int64_t length) {
    return QByteArrayMatcher_new6(pattern, length);
}

void q_bytearraymatcher_operator_assign(void* self, void* other) {
    QByteArrayMatcher_OperatorAssign((QByteArrayMatcher*)self, (QByteArrayMatcher*)other);
}

void q_bytearraymatcher_set_pattern(void* self, const char* pattern) {
    QByteArrayMatcher_SetPattern((QByteArrayMatcher*)self, qstring(pattern));
}

int64_t q_bytearraymatcher_index_in(void* self, const char* str, int64_t lenVal) {
    return QByteArrayMatcher_IndexIn((QByteArrayMatcher*)self, str, lenVal);
}

int64_t q_bytearraymatcher_index_in2(void* self, const char* data) {
    libqt_string data_string = qstring(data);
    return QByteArrayMatcher_IndexIn2((QByteArrayMatcher*)self, (QByteArrayView*)&data_string);
}

char* q_bytearraymatcher_pattern(void* self) {
    libqt_string _str = QByteArrayMatcher_Pattern((QByteArrayMatcher*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_bytearraymatcher_index_in3(void* self, const char* str, int64_t lenVal, int64_t from) {
    return QByteArrayMatcher_IndexIn3((QByteArrayMatcher*)self, str, lenVal, from);
}

int64_t q_bytearraymatcher_index_in22(void* self, const char* data, int64_t from) {
    libqt_string data_string = qstring(data);
    return QByteArrayMatcher_IndexIn22((QByteArrayMatcher*)self, (QByteArrayView*)&data_string, from);
}

void q_bytearraymatcher_delete(void* self) {
    QByteArrayMatcher_Delete((QByteArrayMatcher*)(self));
}

QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other) {
    return QStaticByteArrayMatcherBase_new((QStaticByteArrayMatcherBase*)other);
}

void q_staticbytearraymatcherbase_copy_assign(void* self, void* other) {
    QStaticByteArrayMatcherBase_CopyAssign((QStaticByteArrayMatcherBase*)self, (QStaticByteArrayMatcherBase*)other);
}
