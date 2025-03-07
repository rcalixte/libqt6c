#include <QStringTokenizerBaseBase>
#include <qstringtokenizer.h>
#include "libqstringtokenizer.hpp"
#include "libqstringtokenizer.hxx"

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new(QStringTokenizerBaseBase* other) {
    return new QStringTokenizerBaseBase(*other);
}

QStringTokenizerBaseBase* QStringTokenizerBaseBase_new2(QStringTokenizerBaseBase* param1) {
    return new QStringTokenizerBaseBase(*param1);
}

void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other) {
    *self = *other;
}
