#include "libqstringtokenizer.hpp"
#include "libqstringtokenizer.h"

/// https://doc.qt.io/qt-6/qstringtokenizerbasebase.html

/// q_stringtokenizerbasebase_new constructs a new QStringTokenizerBaseBase object.
///
/// ``` QStringTokenizerBaseBase* other ```
QStringTokenizerBaseBase* q_stringtokenizerbasebase_new(void* other) {
    return QStringTokenizerBaseBase_new((QStringTokenizerBaseBase*)other);
}

/// q_stringtokenizerbasebase_new2 constructs a new QStringTokenizerBaseBase object.
///
/// ``` QStringTokenizerBaseBase* param1 ```
QStringTokenizerBaseBase* q_stringtokenizerbasebase_new2(void* param1) {
    return QStringTokenizerBaseBase_new2((QStringTokenizerBaseBase*)param1);
}

/// q_stringtokenizerbasebase_copy_assign shallow copies `other` into `self`.
///
/// ``` QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other ```
void q_stringtokenizerbasebase_copy_assign(void* self, void* other) {
    QStringTokenizerBaseBase_CopyAssign((QStringTokenizerBaseBase*)self, (QStringTokenizerBaseBase*)other);
}
