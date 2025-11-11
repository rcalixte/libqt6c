#include "libqbytearrayview.hpp"
#include "libqchar.hpp"
#include "libqlatin1stringview.hpp"
#include "libqlatin1stringview.h"

QLatin1String* q_latin1string_new() {
    return QLatin1String_new();
}

QLatin1String* q_latin1string_new2(const char* s) {
    return QLatin1String_new2(s);
}

QLatin1String* q_latin1string_new3(const char* f, const char* l) {
    return QLatin1String_new3(f, l);
}

QLatin1String* q_latin1string_new4(const char* s, int64_t sz) {
    return QLatin1String_new4(s, sz);
}

QLatin1String* q_latin1string_new5(const char* s) {
    return QLatin1String_new5(qstring(s));
}

QLatin1String* q_latin1string_new6(const char* s) {
    return QLatin1String_new6(qstring(s));
}

void q_latin1string_copy_assign(void* self, void* other) {
    QLatin1String_CopyAssign((QLatin1String*)self, (QLatin1String*)other);
}

void q_latin1string_move_assign(void* self, void* other) {
    QLatin1String_MoveAssign((QLatin1String*)self, (QLatin1String*)other);
}

const char* q_latin1string_to_string(void* self) {
    libqt_string _str = QLatin1String_ToString((QLatin1String*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

const char* q_latin1string_latin1(void* self) {
    return QLatin1String_Latin1((QLatin1String*)self);
}

int64_t q_latin1string_size(void* self) {
    return QLatin1String_Size((QLatin1String*)self);
}

const char* q_latin1string_data(void* self) {
    return QLatin1String_Data((QLatin1String*)self);
}

const char* q_latin1string_const_data(void* self) {
    return QLatin1String_ConstData((QLatin1String*)self);
}

const char* q_latin1string_const_begin(void* self) {
    return QLatin1String_ConstBegin((QLatin1String*)self);
}

const char* q_latin1string_const_end(void* self) {
    return QLatin1String_ConstEnd((QLatin1String*)self);
}

QLatin1Char* q_latin1string_first(void* self) {
    return QLatin1String_First((QLatin1String*)self);
}

QLatin1Char* q_latin1string_last(void* self) {
    return QLatin1String_Last((QLatin1String*)self);
}

int64_t q_latin1string_length(void* self) {
    return QLatin1String_Length((QLatin1String*)self);
}

bool q_latin1string_is_null(void* self) {
    return QLatin1String_IsNull((QLatin1String*)self);
}

bool q_latin1string_is_empty(void* self) {
    return QLatin1String_IsEmpty((QLatin1String*)self);
}

bool q_latin1string_empty(void* self) {
    return QLatin1String_Empty((QLatin1String*)self);
}

QLatin1Char* q_latin1string_at(void* self, int64_t i) {
    return QLatin1String_At((QLatin1String*)self, i);
}

QLatin1Char* q_latin1string_operator_subscript(void* self, int64_t i) {
    return QLatin1String_OperatorSubscript((QLatin1String*)self, i);
}

QLatin1Char* q_latin1string_front(void* self) {
    return QLatin1String_Front((QLatin1String*)self);
}

QLatin1Char* q_latin1string_back(void* self) {
    return QLatin1String_Back((QLatin1String*)self);
}

int32_t q_latin1string_compare4(void* self, void* c) {
    return QLatin1String_Compare4((QLatin1String*)self, (QChar*)c);
}

int32_t q_latin1string_compare5(void* self, void* c, int32_t cs) {
    return QLatin1String_Compare5((QLatin1String*)self, (QChar*)c, cs);
}

bool q_latin1string_starts_with3(void* self, void* c) {
    return QLatin1String_StartsWith3((QLatin1String*)self, (QChar*)c);
}

bool q_latin1string_starts_with4(void* self, void* c, int32_t cs) {
    return QLatin1String_StartsWith4((QLatin1String*)self, (QChar*)c, cs);
}

bool q_latin1string_ends_with3(void* self, void* c) {
    return QLatin1String_EndsWith3((QLatin1String*)self, (QChar*)c);
}

bool q_latin1string_ends_with4(void* self, void* c, int32_t cs) {
    return QLatin1String_EndsWith4((QLatin1String*)self, (QChar*)c, cs);
}

int64_t q_latin1string_index_of3(void* self, void* c) {
    return QLatin1String_IndexOf3((QLatin1String*)self, (QChar*)c);
}

bool q_latin1string_contains3(void* self, void* c) {
    return QLatin1String_Contains3((QLatin1String*)self, (QChar*)c);
}

int64_t q_latin1string_last_index_of5(void* self, void* c) {
    return QLatin1String_LastIndexOf5((QLatin1String*)self, (QChar*)c);
}

int64_t q_latin1string_last_index_of6(void* self, void* c, int64_t from) {
    return QLatin1String_LastIndexOf6((QLatin1String*)self, (QChar*)c, from);
}

int64_t q_latin1string_count3(void* self, void* ch) {
    return QLatin1String_Count3((QLatin1String*)self, (QChar*)ch);
}

short q_latin1string_to_short(void* self) {
    return QLatin1String_ToShort((QLatin1String*)self);
}

unsigned short q_latin1string_to_u_short(void* self) {
    return QLatin1String_ToUShort((QLatin1String*)self);
}

int32_t q_latin1string_to_int(void* self) {
    return QLatin1String_ToInt((QLatin1String*)self);
}

uint32_t q_latin1string_to_u_int(void* self) {
    return QLatin1String_ToUInt((QLatin1String*)self);
}

int64_t q_latin1string_to_long(void* self) {
    return QLatin1String_ToLong((QLatin1String*)self);
}

uint64_t q_latin1string_to_u_long(void* self) {
    return QLatin1String_ToULong((QLatin1String*)self);
}

long long q_latin1string_to_long_long(void* self) {
    return QLatin1String_ToLongLong((QLatin1String*)self);
}

uint64_t q_latin1string_to_u_long_long(void* self) {
    return QLatin1String_ToULongLong((QLatin1String*)self);
}

float q_latin1string_to_float(void* self) {
    return QLatin1String_ToFloat((QLatin1String*)self);
}

double q_latin1string_to_double(void* self) {
    return QLatin1String_ToDouble((QLatin1String*)self);
}

const char* q_latin1string_begin(void* self) {
    return QLatin1String_Begin((QLatin1String*)self);
}

const char* q_latin1string_cbegin(void* self) {
    return QLatin1String_Cbegin((QLatin1String*)self);
}

const char* q_latin1string_end(void* self) {
    return QLatin1String_End((QLatin1String*)self);
}

const char* q_latin1string_cend(void* self) {
    return QLatin1String_Cend((QLatin1String*)self);
}

int64_t q_latin1string_max_size(void* self) {
    return QLatin1String_MaxSize((QLatin1String*)self);
}

int64_t q_latin1string_max_size2() {
    return QLatin1String_MaxSize2();
}

void q_latin1string_chop(void* self, int64_t n) {
    QLatin1String_Chop((QLatin1String*)self, n);
}

void q_latin1string_truncate(void* self, int64_t n) {
    QLatin1String_Truncate((QLatin1String*)self, n);
}

int64_t q_latin1string_index_of24(void* self, void* c, int64_t from) {
    return QLatin1String_IndexOf24((QLatin1String*)self, (QChar*)c, from);
}

int64_t q_latin1string_index_of34(void* self, void* c, int64_t from, int32_t cs) {
    return QLatin1String_IndexOf34((QLatin1String*)self, (QChar*)c, from, cs);
}

bool q_latin1string_contains24(void* self, void* c, int32_t cs) {
    return QLatin1String_Contains24((QLatin1String*)self, (QChar*)c, cs);
}

int64_t q_latin1string_last_index_of24(void* self, void* c, int32_t cs) {
    return QLatin1String_LastIndexOf24((QLatin1String*)self, (QChar*)c, cs);
}

int64_t q_latin1string_last_index_of34(void* self, void* c, int64_t from, int32_t cs) {
    return QLatin1String_LastIndexOf34((QLatin1String*)self, (QChar*)c, from, cs);
}

int64_t q_latin1string_count24(void* self, void* ch, int32_t cs) {
    return QLatin1String_Count24((QLatin1String*)self, (QChar*)ch, cs);
}

short q_latin1string_to_short1(void* self, bool* ok) {
    return QLatin1String_ToShort1((QLatin1String*)self, (bool*)ok);
}

short q_latin1string_to_short2(void* self, bool* ok, int base) {
    return QLatin1String_ToShort2((QLatin1String*)self, (bool*)ok, base);
}

unsigned short q_latin1string_to_u_short1(void* self, bool* ok) {
    return QLatin1String_ToUShort1((QLatin1String*)self, (bool*)ok);
}

unsigned short q_latin1string_to_u_short2(void* self, bool* ok, int base) {
    return QLatin1String_ToUShort2((QLatin1String*)self, (bool*)ok, base);
}

int32_t q_latin1string_to_int1(void* self, bool* ok) {
    return QLatin1String_ToInt1((QLatin1String*)self, (bool*)ok);
}

int32_t q_latin1string_to_int2(void* self, bool* ok, int base) {
    return QLatin1String_ToInt2((QLatin1String*)self, (bool*)ok, base);
}

uint32_t q_latin1string_to_u_int1(void* self, bool* ok) {
    return QLatin1String_ToUInt1((QLatin1String*)self, (bool*)ok);
}

uint32_t q_latin1string_to_u_int2(void* self, bool* ok, int base) {
    return QLatin1String_ToUInt2((QLatin1String*)self, (bool*)ok, base);
}

int64_t q_latin1string_to_long1(void* self, bool* ok) {
    return QLatin1String_ToLong1((QLatin1String*)self, (bool*)ok);
}

int64_t q_latin1string_to_long2(void* self, bool* ok, int base) {
    return QLatin1String_ToLong2((QLatin1String*)self, (bool*)ok, base);
}

uint64_t q_latin1string_to_u_long1(void* self, bool* ok) {
    return QLatin1String_ToULong1((QLatin1String*)self, (bool*)ok);
}

uint64_t q_latin1string_to_u_long2(void* self, bool* ok, int base) {
    return QLatin1String_ToULong2((QLatin1String*)self, (bool*)ok, base);
}

long long q_latin1string_to_long_long1(void* self, bool* ok) {
    return QLatin1String_ToLongLong1((QLatin1String*)self, (bool*)ok);
}

long long q_latin1string_to_long_long2(void* self, bool* ok, int base) {
    return QLatin1String_ToLongLong2((QLatin1String*)self, (bool*)ok, base);
}

uint64_t q_latin1string_to_u_long_long1(void* self, bool* ok) {
    return QLatin1String_ToULongLong1((QLatin1String*)self, (bool*)ok);
}

uint64_t q_latin1string_to_u_long_long2(void* self, bool* ok, int base) {
    return QLatin1String_ToULongLong2((QLatin1String*)self, (bool*)ok, base);
}

float q_latin1string_to_float1(void* self, bool* ok) {
    return QLatin1String_ToFloat1((QLatin1String*)self, (bool*)ok);
}

double q_latin1string_to_double1(void* self, bool* ok) {
    return QLatin1String_ToDouble1((QLatin1String*)self, (bool*)ok);
}

void q_latin1string_delete(void* self) {
    QLatin1String_Delete((QLatin1String*)(self));
}
