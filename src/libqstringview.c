#include "libqchar.hpp"
#include "libqregularexpression.hpp"
#include <string.h>
#include "libqstringview.hpp"
#include "libqstringview.h"

QStringView* q_stringview_new() {
    return QStringView_new();
}

void q_stringview_copy_assign(void* self, void* other) {
    QStringView_CopyAssign((QStringView*)self, (QStringView*)other);
}

void q_stringview_move_assign(void* self, void* other) {
    QStringView_MoveAssign((QStringView*)self, (QStringView*)other);
}

const char* q_stringview_to_string(void* self) {
    libqt_string _str = QStringView_ToString((QStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_stringview_size(void* self) {
    return QStringView_Size((QStringView*)self);
}

QChar* q_stringview_data(void* self) {
    return QStringView_Data((QStringView*)self);
}

QChar* q_stringview_const_data(void* self) {
    return QStringView_ConstData((QStringView*)self);
}

QChar* q_stringview_operator_subscript(void* self, int64_t n) {
    return QStringView_OperatorSubscript((QStringView*)self, n);
}

char* q_stringview_to_latin1(void* self) {
    libqt_string _str = QStringView_ToLatin1((QStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_stringview_to_utf8(void* self) {
    libqt_string _str = QStringView_ToUtf8((QStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_stringview_to_local8_bit(void* self) {
    libqt_string _str = QStringView_ToLocal8Bit((QStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

libqt_list /* of uint32_t */ q_stringview_to_ucs4(void* self) {
    libqt_list _arr = QStringView_ToUcs4((QStringView*)self);
    return _arr;
}

QChar* q_stringview_at(void* self, int64_t n) {
    return QStringView_At((QStringView*)self, n);
}

void q_stringview_truncate(void* self, int64_t n) {
    QStringView_Truncate((QStringView*)self, n);
}

void q_stringview_chop(void* self, int64_t n) {
    QStringView_Chop((QStringView*)self, n);
}

int32_t q_stringview_compare_with_q_char(void* self, void* c) {
    return QStringView_CompareWithQChar((QStringView*)self, (QChar*)c);
}

int32_t q_stringview_compare2(void* self, void* c, int64_t cs) {
    return QStringView_Compare2((QStringView*)self, (QChar*)c, cs);
}

bool q_stringview_starts_with_with_q_char(void* self, void* c) {
    return QStringView_StartsWithWithQChar((QStringView*)self, (QChar*)c);
}

bool q_stringview_starts_with2(void* self, void* c, int64_t cs) {
    return QStringView_StartsWith2((QStringView*)self, (QChar*)c, cs);
}

bool q_stringview_ends_with_with_q_char(void* self, void* c) {
    return QStringView_EndsWithWithQChar((QStringView*)self, (QChar*)c);
}

bool q_stringview_ends_with2(void* self, void* c, int64_t cs) {
    return QStringView_EndsWith2((QStringView*)self, (QChar*)c, cs);
}

int64_t q_stringview_index_of(void* self, void* c) {
    return QStringView_IndexOf((QStringView*)self, (QChar*)c);
}

bool q_stringview_contains(void* self, void* c) {
    return QStringView_Contains((QStringView*)self, (QChar*)c);
}

int64_t q_stringview_count(void* self, void* c) {
    return QStringView_Count((QStringView*)self, (QChar*)c);
}

int64_t q_stringview_last_index_of(void* self, void* c) {
    return QStringView_LastIndexOf((QStringView*)self, (QChar*)c);
}

int64_t q_stringview_last_index_of2(void* self, void* c, int64_t from) {
    return QStringView_LastIndexOf2((QStringView*)self, (QChar*)c, from);
}

int64_t q_stringview_index_of_with_re(void* self, void* re) {
    return QStringView_IndexOfWithRe((QStringView*)self, (QRegularExpression*)re);
}

int64_t q_stringview_last_index_of5(void* self, void* re, int64_t from) {
    return QStringView_LastIndexOf5((QStringView*)self, (QRegularExpression*)re, from);
}

bool q_stringview_contains_with_re(void* self, void* re) {
    return QStringView_ContainsWithRe((QStringView*)self, (QRegularExpression*)re);
}

int64_t q_stringview_count_with_re(void* self, void* re) {
    return QStringView_CountWithRe((QStringView*)self, (QRegularExpression*)re);
}

bool q_stringview_is_right_to_left(void* self) {
    return QStringView_IsRightToLeft((QStringView*)self);
}

bool q_stringview_is_valid_utf16(void* self) {
    return QStringView_IsValidUtf16((QStringView*)self);
}

short q_stringview_to_short(void* self) {
    return QStringView_ToShort((QStringView*)self);
}

unsigned short q_stringview_to_u_short(void* self) {
    return QStringView_ToUShort((QStringView*)self);
}

int32_t q_stringview_to_int(void* self) {
    return QStringView_ToInt((QStringView*)self);
}

uint32_t q_stringview_to_u_int(void* self) {
    return QStringView_ToUInt((QStringView*)self);
}

int64_t q_stringview_to_long(void* self) {
    return QStringView_ToLong((QStringView*)self);
}

uint64_t q_stringview_to_u_long(void* self) {
    return QStringView_ToULong((QStringView*)self);
}

long long q_stringview_to_long_long(void* self) {
    return QStringView_ToLongLong((QStringView*)self);
}

uint64_t q_stringview_to_u_long_long(void* self) {
    return QStringView_ToULongLong((QStringView*)self);
}

float q_stringview_to_float(void* self) {
    return QStringView_ToFloat((QStringView*)self);
}

double q_stringview_to_double(void* self) {
    return QStringView_ToDouble((QStringView*)self);
}

QChar* q_stringview_begin(void* self) {
    return QStringView_Begin((QStringView*)self);
}

QChar* q_stringview_end(void* self) {
    return QStringView_End((QStringView*)self);
}

QChar* q_stringview_cbegin(void* self) {
    return QStringView_Cbegin((QStringView*)self);
}

QChar* q_stringview_cend(void* self) {
    return QStringView_Cend((QStringView*)self);
}

bool q_stringview_empty(void* self) {
    return QStringView_Empty((QStringView*)self);
}

QChar* q_stringview_front(void* self) {
    return QStringView_Front((QStringView*)self);
}

QChar* q_stringview_back(void* self) {
    return QStringView_Back((QStringView*)self);
}

QChar* q_stringview_const_begin(void* self) {
    return QStringView_ConstBegin((QStringView*)self);
}

QChar* q_stringview_const_end(void* self) {
    return QStringView_ConstEnd((QStringView*)self);
}

bool q_stringview_is_null(void* self) {
    return QStringView_IsNull((QStringView*)self);
}

bool q_stringview_is_empty(void* self) {
    return QStringView_IsEmpty((QStringView*)self);
}

int64_t q_stringview_length(void* self) {
    return QStringView_Length((QStringView*)self);
}

QChar* q_stringview_first2(void* self) {
    return QStringView_First2((QStringView*)self);
}

QChar* q_stringview_last2(void* self) {
    return QStringView_Last2((QStringView*)self);
}

int64_t q_stringview_index_of2(void* self, void* c, int64_t from) {
    return QStringView_IndexOf2((QStringView*)self, (QChar*)c, from);
}

int64_t q_stringview_index_of3(void* self, void* c, int64_t from, int64_t cs) {
    return QStringView_IndexOf3((QStringView*)self, (QChar*)c, from, cs);
}

bool q_stringview_contains2(void* self, void* c, int64_t cs) {
    return QStringView_Contains2((QStringView*)self, (QChar*)c, cs);
}

int64_t q_stringview_count2(void* self, void* c, int64_t cs) {
    return QStringView_Count2((QStringView*)self, (QChar*)c, cs);
}

int64_t q_stringview_last_index_of22(void* self, void* c, int64_t cs) {
    return QStringView_LastIndexOf22((QStringView*)self, (QChar*)c, cs);
}

int64_t q_stringview_last_index_of32(void* self, void* c, int64_t from, int64_t cs) {
    return QStringView_LastIndexOf32((QStringView*)self, (QChar*)c, from, cs);
}

int64_t q_stringview_index_of24(void* self, void* re, int64_t from) {
    return QStringView_IndexOf24((QStringView*)self, (QRegularExpression*)re, from);
}

int64_t q_stringview_index_of34(void* self, void* re, int64_t from, void* rmatch) {
    return QStringView_IndexOf34((QStringView*)self, (QRegularExpression*)re, from, (QRegularExpressionMatch*)rmatch);
}

int64_t q_stringview_last_index_of35(void* self, void* re, int64_t from, void* rmatch) {
    return QStringView_LastIndexOf35((QStringView*)self, (QRegularExpression*)re, from, (QRegularExpressionMatch*)rmatch);
}

bool q_stringview_contains24(void* self, void* re, void* rmatch) {
    return QStringView_Contains24((QStringView*)self, (QRegularExpression*)re, (QRegularExpressionMatch*)rmatch);
}

short q_stringview_to_short1(void* self, bool* ok) {
    return QStringView_ToShort1((QStringView*)self, (bool*)ok);
}

short q_stringview_to_short2(void* self, bool* ok, int base) {
    return QStringView_ToShort2((QStringView*)self, (bool*)ok, base);
}

unsigned short q_stringview_to_u_short1(void* self, bool* ok) {
    return QStringView_ToUShort1((QStringView*)self, (bool*)ok);
}

unsigned short q_stringview_to_u_short2(void* self, bool* ok, int base) {
    return QStringView_ToUShort2((QStringView*)self, (bool*)ok, base);
}

int32_t q_stringview_to_int1(void* self, bool* ok) {
    return QStringView_ToInt1((QStringView*)self, (bool*)ok);
}

int32_t q_stringview_to_int2(void* self, bool* ok, int base) {
    return QStringView_ToInt2((QStringView*)self, (bool*)ok, base);
}

uint32_t q_stringview_to_u_int1(void* self, bool* ok) {
    return QStringView_ToUInt1((QStringView*)self, (bool*)ok);
}

uint32_t q_stringview_to_u_int2(void* self, bool* ok, int base) {
    return QStringView_ToUInt2((QStringView*)self, (bool*)ok, base);
}

int64_t q_stringview_to_long1(void* self, bool* ok) {
    return QStringView_ToLong1((QStringView*)self, (bool*)ok);
}

int64_t q_stringview_to_long2(void* self, bool* ok, int base) {
    return QStringView_ToLong2((QStringView*)self, (bool*)ok, base);
}

uint64_t q_stringview_to_u_long1(void* self, bool* ok) {
    return QStringView_ToULong1((QStringView*)self, (bool*)ok);
}

uint64_t q_stringview_to_u_long2(void* self, bool* ok, int base) {
    return QStringView_ToULong2((QStringView*)self, (bool*)ok, base);
}

long long q_stringview_to_long_long1(void* self, bool* ok) {
    return QStringView_ToLongLong1((QStringView*)self, (bool*)ok);
}

long long q_stringview_to_long_long2(void* self, bool* ok, int base) {
    return QStringView_ToLongLong2((QStringView*)self, (bool*)ok, base);
}

uint64_t q_stringview_to_u_long_long1(void* self, bool* ok) {
    return QStringView_ToULongLong1((QStringView*)self, (bool*)ok);
}

uint64_t q_stringview_to_u_long_long2(void* self, bool* ok, int base) {
    return QStringView_ToULongLong2((QStringView*)self, (bool*)ok, base);
}

float q_stringview_to_float1(void* self, bool* ok) {
    return QStringView_ToFloat1((QStringView*)self, (bool*)ok);
}

double q_stringview_to_double1(void* self, bool* ok) {
    return QStringView_ToDouble1((QStringView*)self, (bool*)ok);
}

void q_stringview_delete(void* self) {
    QStringView_Delete((QStringView*)(self));
}
