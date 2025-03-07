#include "libqchar.hpp"
#include <string.h>
#include "libqanystringview.hpp"
#include "libqanystringview.h"

/// https://doc.qt.io/qt-6/qanystringview.html

/// q_anystringview_new constructs a new QAnyStringView object.
///
/// ``` const char* other ```
QAnyStringView* q_anystringview_new(const char* other) {
    libqt_strview other_strview = qstrview(other);

    return QAnyStringView_new((QAnyStringView*)&other_strview);
}

/// q_anystringview_new2 constructs a new QAnyStringView object and invalidates the source QAnyStringView object.
///
/// ``` const char* other ```
QAnyStringView* q_anystringview_new2(const char* other) {
    libqt_strview other_strview = qstrview(other);

    return QAnyStringView_new2((QAnyStringView*)&other_strview);
}

/// q_anystringview_new3 constructs a new QAnyStringView object.
///
///
QAnyStringView* q_anystringview_new3() {
    return QAnyStringView_new3();
}

/// q_anystringview_new4 constructs a new QAnyStringView object.
///
/// ``` const char* str ```
QAnyStringView* q_anystringview_new4(const char* str) {
    return QAnyStringView_new4(qstring(str));
}

/// q_anystringview_new5 constructs a new QAnyStringView object.
///
/// ``` const char* str ```
QAnyStringView* q_anystringview_new5(const char* str) {
    return QAnyStringView_new5(qstring(str));
}

/// q_anystringview_new6 constructs a new QAnyStringView object.
///
/// ``` QChar* c ```
QAnyStringView* q_anystringview_new6(void* c) {
    return QAnyStringView_new6((QChar*)c);
}

/// q_anystringview_new7 constructs a new QAnyStringView object.
///
/// ``` const char* param1 ```
QAnyStringView* q_anystringview_new7(const char* param1) {
    libqt_strview param1_strview = qstrview(param1);

    return QAnyStringView_new7((QAnyStringView*)&param1_strview);
}

/// q_anystringview_copy_assign shallow copies `other` into `self`.
///
/// ``` QAnyStringView* self, QAnyStringView* other ```
void q_anystringview_copy_assign(void* self, void* other) {
    QAnyStringView_CopyAssign((QAnyStringView*)self, (QAnyStringView*)other);
}

/// q_anystringview_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QAnyStringView* self, QAnyStringView* other ```
void q_anystringview_move_assign(void* self, void* other) {
    QAnyStringView_MoveAssign((QAnyStringView*)self, (QAnyStringView*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#toString)
///
/// ``` QAnyStringView* self ```
const char* q_anystringview_to_string(void* self) {
    libqt_string _str = QAnyStringView_ToString((QAnyStringView*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_size(void* self) {
    return QAnyStringView_Size((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#data)
///
/// ``` QAnyStringView* self ```
void* q_anystringview_data(void* self) {
    return QAnyStringView_Data((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// ``` const char* lhs, const char* rhs ```
int32_t q_anystringview_compare(const char* lhs, const char* rhs) {
    libqt_strview lhs_strview = qstrview(lhs);
    libqt_strview rhs_strview = qstrview(rhs);
    return QAnyStringView_Compare((QAnyStringView*)&lhs_strview, (QAnyStringView*)&rhs_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#equal)
///
/// ``` const char* lhs, const char* rhs ```
bool q_anystringview_equal(const char* lhs, const char* rhs) {
    libqt_strview lhs_strview = qstrview(lhs);
    libqt_strview rhs_strview = qstrview(rhs);
    return QAnyStringView_Equal((QAnyStringView*)&lhs_strview, (QAnyStringView*)&rhs_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#front)
///
/// ``` QAnyStringView* self ```
QChar* q_anystringview_front(void* self) {
    return QAnyStringView_Front((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#back)
///
/// ``` QAnyStringView* self ```
QChar* q_anystringview_back(void* self) {
    return QAnyStringView_Back((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#empty)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_empty(void* self) {
    return QAnyStringView_Empty((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#size_bytes)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_size_bytes(void* self) {
    return QAnyStringView_SizeBytes((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isNull)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_is_null(void* self) {
    return QAnyStringView_IsNull((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#isEmpty)
///
/// ``` QAnyStringView* self ```
bool q_anystringview_is_empty(void* self) {
    return QAnyStringView_IsEmpty((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#length)
///
/// ``` QAnyStringView* self ```
int64_t q_anystringview_length(void* self) {
    return QAnyStringView_Length((QAnyStringView*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qanystringview.html#compare)
///
/// ``` const char* lhs, const char* rhs, enum Qt__CaseSensitivity cs ```
int32_t q_anystringview_compare3(const char* lhs, const char* rhs, int64_t cs) {
    libqt_strview lhs_strview = qstrview(lhs);
    libqt_strview rhs_strview = qstrview(rhs);
    return QAnyStringView_Compare3((QAnyStringView*)&lhs_strview, (QAnyStringView*)&rhs_strview, cs);
}

/// Delete this object from C++ memory.
///
/// ``` QAnyStringView* self ```
void q_anystringview_delete(void* self) {
    QAnyStringView_Delete((QAnyStringView*)(self));
}