#include "libqchar.hpp"
#include "libqanystringview.hpp"
#include "libqanystringview.h"

QAnyStringView* q_anystringview_new(const char* other) {
    return QAnyStringView_new(other);
}

QAnyStringView* q_anystringview_new2(const char* other) {
    return QAnyStringView_new2(other);
}

QAnyStringView* q_anystringview_new3() {
    return QAnyStringView_new3();
}

QAnyStringView* q_anystringview_new4(char* str) {
    return QAnyStringView_new4(qstring(str));
}

QAnyStringView* q_anystringview_new5(const char* str) {
    return QAnyStringView_new5(qstring(str));
}

QAnyStringView* q_anystringview_new6(const char* param1) {
    return QAnyStringView_new6(param1);
}

void q_anystringview_copy_assign(void* self, void* other) {
    QAnyStringView_CopyAssign((QAnyStringView*)self, (QAnyStringView*)other);
}

void q_anystringview_move_assign(void* self, void* other) {
    QAnyStringView_MoveAssign((QAnyStringView*)self, (QAnyStringView*)other);
}

const char* q_anystringview_mid(void* self, int64_t pos) {
    const char* _ret = QAnyStringView_Mid((QAnyStringView*)self, pos);
    return _ret;
}

const char* q_anystringview_left(void* self, int64_t n) {
    const char* _ret = QAnyStringView_Left((QAnyStringView*)self, n);
    return _ret;
}

const char* q_anystringview_right(void* self, int64_t n) {
    const char* _ret = QAnyStringView_Right((QAnyStringView*)self, n);
    return _ret;
}

const char* q_anystringview_sliced(void* self, int64_t pos) {
    const char* _ret = QAnyStringView_Sliced((QAnyStringView*)self, pos);
    return _ret;
}

const char* q_anystringview_sliced2(void* self, int64_t pos, int64_t n) {
    const char* _ret = QAnyStringView_Sliced2((QAnyStringView*)self, pos, n);
    return _ret;
}

const char* q_anystringview_first(void* self, int64_t n) {
    const char* _ret = QAnyStringView_First((QAnyStringView*)self, n);
    return _ret;
}

const char* q_anystringview_last(void* self, int64_t n) {
    const char* _ret = QAnyStringView_Last((QAnyStringView*)self, n);
    return _ret;
}

const char* q_anystringview_chopped(void* self, int64_t n) {
    const char* _ret = QAnyStringView_Chopped((QAnyStringView*)self, n);
    return _ret;
}

const char* q_anystringview_slice(void* self, int64_t pos) {
    const char* _ret = QAnyStringView_Slice((QAnyStringView*)self, pos);
    return _ret;
}

const char* q_anystringview_slice2(void* self, int64_t pos, int64_t n) {
    const char* _ret = QAnyStringView_Slice2((QAnyStringView*)self, pos, n);
    return _ret;
}

void q_anystringview_truncate(void* self, int64_t n) {
    QAnyStringView_Truncate((QAnyStringView*)self, n);
}

void q_anystringview_chop(void* self, int64_t n) {
    QAnyStringView_Chop((QAnyStringView*)self, n);
}

const char* q_anystringview_to_string(void* self) {
    libqt_string _str = QAnyStringView_ToString((QAnyStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

int64_t q_anystringview_size(void* self) {
    return QAnyStringView_Size((QAnyStringView*)self);
}

const void* q_anystringview_data(void* self) {
    return QAnyStringView_Data((QAnyStringView*)self);
}

int32_t q_anystringview_compare(const char* lhs, const char* rhs) {
    return QAnyStringView_Compare(lhs, rhs);
}

bool q_anystringview_equal(const char* lhs, const char* rhs) {
    return QAnyStringView_Equal(lhs, rhs);
}

QChar* q_anystringview_front(void* self) {
    return QAnyStringView_Front((QAnyStringView*)self);
}

QChar* q_anystringview_back(void* self) {
    return QAnyStringView_Back((QAnyStringView*)self);
}

bool q_anystringview_empty(void* self) {
    return QAnyStringView_Empty((QAnyStringView*)self);
}

int64_t q_anystringview_size_bytes(void* self) {
    return QAnyStringView_SizeBytes((QAnyStringView*)self);
}

int64_t q_anystringview_max_size(void* self) {
    return QAnyStringView_MaxSize((QAnyStringView*)self);
}

bool q_anystringview_is_null(void* self) {
    return QAnyStringView_IsNull((QAnyStringView*)self);
}

bool q_anystringview_is_empty(void* self) {
    return QAnyStringView_IsEmpty((QAnyStringView*)self);
}

int64_t q_anystringview_length(void* self) {
    return QAnyStringView_Length((QAnyStringView*)self);
}

const char* q_anystringview_mid2(void* self, int64_t pos, int64_t n) {
    const char* _ret = QAnyStringView_Mid2((QAnyStringView*)self, pos, n);
    return _ret;
}

int32_t q_anystringview_compare3(const char* lhs, const char* rhs, int32_t cs) {
    return QAnyStringView_Compare3(lhs, rhs, cs);
}

void q_anystringview_delete(void* self) {
    QAnyStringView_Delete((QAnyStringView*)(self));
}
