#include <string.h>
#include "libqstyle.hpp"
#include "libqstylefactory.hpp"
#include "libqstylefactory.h"

/// https://doc.qt.io/qt-6/qstylefactory.html

/// q_stylefactory_new constructs a new QStyleFactory object.
///
/// ``` QStyleFactory* other ```
QStyleFactory* q_stylefactory_new(void* other) {
    return QStyleFactory_new((QStyleFactory*)other);
}

/// q_stylefactory_new2 constructs a new QStyleFactory object and invalidates the source QStyleFactory object.
///
/// ``` QStyleFactory* other ```
QStyleFactory* q_stylefactory_new2(void* other) {
    return QStyleFactory_new2((QStyleFactory*)other);
}

/// q_stylefactory_copy_assign shallow copies `other` into `self`.
///
/// ``` QStyleFactory* self, QStyleFactory* other ```
void q_stylefactory_copy_assign(void* self, void* other) {
    QStyleFactory_CopyAssign((QStyleFactory*)self, (QStyleFactory*)other);
}

/// q_stylefactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QStyleFactory* self, QStyleFactory* other ```
void q_stylefactory_move_assign(void* self, void* other) {
    QStyleFactory_MoveAssign((QStyleFactory*)self, (QStyleFactory*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#keys)
///
///
const char** q_stylefactory_keys() {
    libqt_list _arr = QStyleFactory_Keys();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstylefactory.html#create)
///
/// ``` const char* param1 ```
QStyle* q_stylefactory_create(const char* param1) {
    return QStyleFactory_Create(qstring(param1));
}

/// Delete this object from C++ memory.
///
/// ``` QStyleFactory* self ```
void q_stylefactory_delete(void* self) {
    QStyleFactory_Delete((QStyleFactory*)(self));
}