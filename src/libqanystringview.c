#include "libqchar.hpp"
#include <string.h>
#include "libqanystringview.hpp"
#include "libqanystringview.h"

QAnyStringView* q_anystringview_new(const char* other) {
    return QAnyStringView_new(other);
}

QAnyStringView* q_anystringview_new2(char* other) {
    return QAnyStringView_new2(other);
}

QAnyStringView* q_anystringview_new3() {
    return QAnyStringView_new3();
}

QAnyStringView* q_anystringview_new4(const char* str) {
    return QAnyStringView_new4(qstring(str));
}

QAnyStringView* q_anystringview_new5(const char* str) {
    return QAnyStringView_new5(qstring(str));
}

QAnyStringView* q_anystringview_new6(void* c) {
    return QAnyStringView_new6((QChar*)c);
}

QAnyStringView* q_anystringview_new7(const char* param1) {
    return QAnyStringView_new7(param1);
}

void q_anystringview_copy_assign(void* self, void* other) {
    QAnyStringView_CopyAssign((QAnyStringView*)self, (QAnyStringView*)other);
}

void q_anystringview_move_assign(void* self, void* other) {
    QAnyStringView_MoveAssign((QAnyStringView*)self, (QAnyStringView*)other);
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

int32_t q_anystringview_compare(char* lhs, char* rhs) {
    return QAnyStringView_Compare(lhs, rhs);
}

bool q_anystringview_equal(char* lhs, char* rhs) {
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

bool q_anystringview_is_null(void* self) {
    return QAnyStringView_IsNull((QAnyStringView*)self);
}

bool q_anystringview_is_empty(void* self) {
    return QAnyStringView_IsEmpty((QAnyStringView*)self);
}

int64_t q_anystringview_length(void* self) {
    return QAnyStringView_Length((QAnyStringView*)self);
}

int32_t q_anystringview_compare3(char* lhs, char* rhs, int64_t cs) {
    return QAnyStringView_Compare3(lhs, rhs, cs);
}

void q_anystringview_delete(void* self) {
    QAnyStringView_Delete((QAnyStringView*)(self));
}
