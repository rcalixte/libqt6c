#include "libqstringtokenizer.hpp"
#include "libqstringtokenizer.h"

QStringTokenizerBaseBase* q_stringtokenizerbasebase_new(void* other) {
    return QStringTokenizerBaseBase_new((QStringTokenizerBaseBase*)other);
}

QStringTokenizerBaseBase* q_stringtokenizerbasebase_new2(void* param1) {
    return QStringTokenizerBaseBase_new2((QStringTokenizerBaseBase*)param1);
}

void q_stringtokenizerbasebase_copy_assign(void* self, void* other) {
    QStringTokenizerBaseBase_CopyAssign((QStringTokenizerBaseBase*)self, (QStringTokenizerBaseBase*)other);
}
