#include "libqbytearrayview.hpp"
#include "libqbytearrayview.h"

QByteArrayView* q_bytearrayview_new(char* other) {
    return QByteArrayView_new(qstring(other));
}

QByteArrayView* q_bytearrayview_new2(char* other) {
    return QByteArrayView_new2(qstring(other));
}

QByteArrayView* q_bytearrayview_new3() {
    return QByteArrayView_new3();
}

QByteArrayView* q_bytearrayview_new4(char* param1) {
    return QByteArrayView_new4(qstring(param1));
}

void q_bytearrayview_copy_assign(void* self, void* other) {
    QByteArrayView_CopyAssign((QByteArrayView*)self, (QByteArrayView*)other);
}

void q_bytearrayview_move_assign(void* self, void* other) {
    QByteArrayView_MoveAssign((QByteArrayView*)self, (QByteArrayView*)other);
}

char* q_bytearrayview_to_byte_array(void* self) {
    libqt_string _str = QByteArrayView_ToByteArray((QByteArrayView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_bytearrayview_size(void* self) {
    return QByteArrayView_Size((QByteArrayView*)self);
}

const char* q_bytearrayview_data(void* self) {
    return QByteArrayView_Data((QByteArrayView*)self);
}

const char* q_bytearrayview_const_data(void* self) {
    return QByteArrayView_ConstData((QByteArrayView*)self);
}

char q_bytearrayview_operator_subscript(void* self, int64_t n) {
    return QByteArrayView_OperatorSubscript((QByteArrayView*)self, n);
}

char q_bytearrayview_at(void* self, int64_t n) {
    return QByteArrayView_At((QByteArrayView*)self, n);
}

char* q_bytearrayview_first(void* self, int64_t n) {
    libqt_string _str = QByteArrayView_First((QByteArrayView*)self, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_last(void* self, int64_t n) {
    libqt_string _str = QByteArrayView_Last((QByteArrayView*)self, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_sliced(void* self, int64_t pos) {
    libqt_string _str = QByteArrayView_Sliced((QByteArrayView*)self, pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_sliced2(void* self, int64_t pos, int64_t n) {
    libqt_string _str = QByteArrayView_Sliced2((QByteArrayView*)self, pos, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_slice(void* self, int64_t pos) {
    libqt_string _str = QByteArrayView_Slice((QByteArrayView*)self, pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_slice2(void* self, int64_t pos, int64_t n) {
    libqt_string _str = QByteArrayView_Slice2((QByteArrayView*)self, pos, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_chopped(void* self, int64_t lenVal) {
    libqt_string _str = QByteArrayView_Chopped((QByteArrayView*)self, lenVal);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_left(void* self, int64_t n) {
    libqt_string _str = QByteArrayView_Left((QByteArrayView*)self, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_right(void* self, int64_t n) {
    libqt_string _str = QByteArrayView_Right((QByteArrayView*)self, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

char* q_bytearrayview_mid(void* self, int64_t pos) {
    libqt_string _str = QByteArrayView_Mid((QByteArrayView*)self, pos);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_bytearrayview_truncate(void* self, int64_t n) {
    QByteArrayView_Truncate((QByteArrayView*)self, n);
}

void q_bytearrayview_chop(void* self, int64_t n) {
    QByteArrayView_Chop((QByteArrayView*)self, n);
}

char* q_bytearrayview_trimmed(void* self) {
    libqt_string _str = QByteArrayView_Trimmed((QByteArrayView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

short q_bytearrayview_to_short(void* self) {
    return QByteArrayView_ToShort((QByteArrayView*)self);
}

unsigned short q_bytearrayview_to_u_short(void* self) {
    return QByteArrayView_ToUShort((QByteArrayView*)self);
}

int32_t q_bytearrayview_to_int(void* self) {
    return QByteArrayView_ToInt((QByteArrayView*)self);
}

uint32_t q_bytearrayview_to_u_int(void* self) {
    return QByteArrayView_ToUInt((QByteArrayView*)self);
}

int64_t q_bytearrayview_to_long(void* self) {
    return QByteArrayView_ToLong((QByteArrayView*)self);
}

uint64_t q_bytearrayview_to_u_long(void* self) {
    return QByteArrayView_ToULong((QByteArrayView*)self);
}

long long q_bytearrayview_to_long_long(void* self) {
    return QByteArrayView_ToLongLong((QByteArrayView*)self);
}

uint64_t q_bytearrayview_to_u_long_long(void* self) {
    return QByteArrayView_ToULongLong((QByteArrayView*)self);
}

float q_bytearrayview_to_float(void* self) {
    return QByteArrayView_ToFloat((QByteArrayView*)self);
}

double q_bytearrayview_to_double(void* self) {
    return QByteArrayView_ToDouble((QByteArrayView*)self);
}

bool q_bytearrayview_starts_with(void* self, char* other) {
    return QByteArrayView_StartsWith((QByteArrayView*)self, qstring(other));
}

bool q_bytearrayview_starts_with2(void* self, char c) {
    return QByteArrayView_StartsWith2((QByteArrayView*)self, c);
}

bool q_bytearrayview_ends_with(void* self, char* other) {
    return QByteArrayView_EndsWith((QByteArrayView*)self, qstring(other));
}

bool q_bytearrayview_ends_with2(void* self, char c) {
    return QByteArrayView_EndsWith2((QByteArrayView*)self, c);
}

int64_t q_bytearrayview_index_of(void* self, char* a) {
    return QByteArrayView_IndexOf((QByteArrayView*)self, qstring(a));
}

int64_t q_bytearrayview_index_of2(void* self, char ch) {
    return QByteArrayView_IndexOf2((QByteArrayView*)self, ch);
}

bool q_bytearrayview_contains(void* self, char* a) {
    return QByteArrayView_Contains((QByteArrayView*)self, qstring(a));
}

bool q_bytearrayview_contains2(void* self, char c) {
    return QByteArrayView_Contains2((QByteArrayView*)self, c);
}

int64_t q_bytearrayview_last_index_of(void* self, char* a) {
    return QByteArrayView_LastIndexOf((QByteArrayView*)self, qstring(a));
}

int64_t q_bytearrayview_last_index_of2(void* self, char* a, int64_t from) {
    return QByteArrayView_LastIndexOf2((QByteArrayView*)self, qstring(a), from);
}

int64_t q_bytearrayview_last_index_of3(void* self, char ch) {
    return QByteArrayView_LastIndexOf3((QByteArrayView*)self, ch);
}

int64_t q_bytearrayview_count(void* self, char* a) {
    return QByteArrayView_Count((QByteArrayView*)self, qstring(a));
}

int64_t q_bytearrayview_count2(void* self, char ch) {
    return QByteArrayView_Count2((QByteArrayView*)self, ch);
}

int32_t q_bytearrayview_compare(void* self, char* a) {
    return QByteArrayView_Compare((QByteArrayView*)self, qstring(a));
}

bool q_bytearrayview_is_valid_utf8(void* self) {
    return QByteArrayView_IsValidUtf8((QByteArrayView*)self);
}

const char* q_bytearrayview_begin(void* self) {
    return QByteArrayView_Begin((QByteArrayView*)self);
}

const char* q_bytearrayview_end(void* self) {
    return QByteArrayView_End((QByteArrayView*)self);
}

const char* q_bytearrayview_cbegin(void* self) {
    return QByteArrayView_Cbegin((QByteArrayView*)self);
}

const char* q_bytearrayview_cend(void* self) {
    return QByteArrayView_Cend((QByteArrayView*)self);
}

bool q_bytearrayview_empty(void* self) {
    return QByteArrayView_Empty((QByteArrayView*)self);
}

char q_bytearrayview_front(void* self) {
    return QByteArrayView_Front((QByteArrayView*)self);
}

char q_bytearrayview_back(void* self) {
    return QByteArrayView_Back((QByteArrayView*)self);
}

int64_t q_bytearrayview_max_size(void* self) {
    return QByteArrayView_MaxSize((QByteArrayView*)self);
}

bool q_bytearrayview_is_null(void* self) {
    return QByteArrayView_IsNull((QByteArrayView*)self);
}

bool q_bytearrayview_is_empty(void* self) {
    return QByteArrayView_IsEmpty((QByteArrayView*)self);
}

int64_t q_bytearrayview_length(void* self) {
    return QByteArrayView_Length((QByteArrayView*)self);
}

char q_bytearrayview_first2(void* self) {
    return QByteArrayView_First2((QByteArrayView*)self);
}

char q_bytearrayview_last2(void* self) {
    return QByteArrayView_Last2((QByteArrayView*)self);
}

int64_t q_bytearrayview_max_size2() {
    return QByteArrayView_MaxSize2();
}

char* q_bytearrayview_mid2(void* self, int64_t pos, int64_t n) {
    libqt_string _str = QByteArrayView_Mid2((QByteArrayView*)self, pos, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

short q_bytearrayview_to_short1(void* self, bool* ok) {
    return QByteArrayView_ToShort1((QByteArrayView*)self, (bool*)ok);
}

short q_bytearrayview_to_short2(void* self, bool* ok, int base) {
    return QByteArrayView_ToShort2((QByteArrayView*)self, (bool*)ok, base);
}

unsigned short q_bytearrayview_to_u_short1(void* self, bool* ok) {
    return QByteArrayView_ToUShort1((QByteArrayView*)self, (bool*)ok);
}

unsigned short q_bytearrayview_to_u_short2(void* self, bool* ok, int base) {
    return QByteArrayView_ToUShort2((QByteArrayView*)self, (bool*)ok, base);
}

int32_t q_bytearrayview_to_int1(void* self, bool* ok) {
    return QByteArrayView_ToInt1((QByteArrayView*)self, (bool*)ok);
}

int32_t q_bytearrayview_to_int2(void* self, bool* ok, int base) {
    return QByteArrayView_ToInt2((QByteArrayView*)self, (bool*)ok, base);
}

uint32_t q_bytearrayview_to_u_int1(void* self, bool* ok) {
    return QByteArrayView_ToUInt1((QByteArrayView*)self, (bool*)ok);
}

uint32_t q_bytearrayview_to_u_int2(void* self, bool* ok, int base) {
    return QByteArrayView_ToUInt2((QByteArrayView*)self, (bool*)ok, base);
}

int64_t q_bytearrayview_to_long1(void* self, bool* ok) {
    return QByteArrayView_ToLong1((QByteArrayView*)self, (bool*)ok);
}

int64_t q_bytearrayview_to_long2(void* self, bool* ok, int base) {
    return QByteArrayView_ToLong2((QByteArrayView*)self, (bool*)ok, base);
}

uint64_t q_bytearrayview_to_u_long1(void* self, bool* ok) {
    return QByteArrayView_ToULong1((QByteArrayView*)self, (bool*)ok);
}

uint64_t q_bytearrayview_to_u_long2(void* self, bool* ok, int base) {
    return QByteArrayView_ToULong2((QByteArrayView*)self, (bool*)ok, base);
}

long long q_bytearrayview_to_long_long1(void* self, bool* ok) {
    return QByteArrayView_ToLongLong1((QByteArrayView*)self, (bool*)ok);
}

long long q_bytearrayview_to_long_long2(void* self, bool* ok, int base) {
    return QByteArrayView_ToLongLong2((QByteArrayView*)self, (bool*)ok, base);
}

uint64_t q_bytearrayview_to_u_long_long1(void* self, bool* ok) {
    return QByteArrayView_ToULongLong1((QByteArrayView*)self, (bool*)ok);
}

uint64_t q_bytearrayview_to_u_long_long2(void* self, bool* ok, int base) {
    return QByteArrayView_ToULongLong2((QByteArrayView*)self, (bool*)ok, base);
}

float q_bytearrayview_to_float1(void* self, bool* ok) {
    return QByteArrayView_ToFloat1((QByteArrayView*)self, (bool*)ok);
}

double q_bytearrayview_to_double1(void* self, bool* ok) {
    return QByteArrayView_ToDouble1((QByteArrayView*)self, (bool*)ok);
}

int64_t q_bytearrayview_index_of22(void* self, char* a, int64_t from) {
    return QByteArrayView_IndexOf22((QByteArrayView*)self, qstring(a), from);
}

int64_t q_bytearrayview_index_of23(void* self, char ch, int64_t from) {
    return QByteArrayView_IndexOf23((QByteArrayView*)self, ch, from);
}

int64_t q_bytearrayview_last_index_of22(void* self, char ch, int64_t from) {
    return QByteArrayView_LastIndexOf22((QByteArrayView*)self, ch, from);
}

int32_t q_bytearrayview_compare2(void* self, char* a, int32_t cs) {
    return QByteArrayView_Compare2((QByteArrayView*)self, qstring(a), cs);
}

void q_bytearrayview_delete(void* self) {
    QByteArrayView_Delete((QByteArrayView*)(self));
}
