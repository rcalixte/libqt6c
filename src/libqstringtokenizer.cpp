#include <QStringTokenizerBaseBase>
#include <qstringtokenizer.h>
#include "libqstringtokenizer.hpp"
#include "libqstringtokenizer.hxx"

QStringTokenizerBaseBase* QStringTokenizerBaseBase_New(const QStringTokenizerBaseBase* other) {
    return new QStringTokenizerBaseBase(*other);
}

QStringTokenizerBaseBase* QStringTokenizerBaseBase_New2(const QStringTokenizerBaseBase* param1) {
    return new QStringTokenizerBaseBase(*param1);
}

void QStringTokenizerBaseBase_CopyAssign(QStringTokenizerBaseBase* self, QStringTokenizerBaseBase* other) {
    *self = *other;
}
