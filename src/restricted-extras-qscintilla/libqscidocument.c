#include "libqscidocument.hpp"
#include "libqscidocument.h"

/// https://doc.qt.io/qt-6/qscidocument.html

/// q_scidocument_new constructs a new QsciDocument object.
///
///
QsciDocument* q_scidocument_new() {
    return QsciDocument_new();
}

/// q_scidocument_new2 constructs a new QsciDocument object.
///
/// ``` QsciDocument* param1 ```
QsciDocument* q_scidocument_new2(void* param1) {
    return QsciDocument_new2((QsciDocument*)param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscidocument.html#operator=)
///
/// ``` QsciDocument* self, QsciDocument* param1 ```
void q_scidocument_operator_assign(void* self, void* param1) {
    QsciDocument_OperatorAssign((QsciDocument*)self, (QsciDocument*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QsciDocument* self ```
void q_scidocument_delete(void* self) {
    QsciDocument_Delete((QsciDocument*)(self));
}