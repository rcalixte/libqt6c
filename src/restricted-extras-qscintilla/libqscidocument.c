#include "libqscidocument.hpp"
#include "libqscidocument.h"

QsciDocument* q_scidocument_new() {
    return QsciDocument_new();
}

QsciDocument* q_scidocument_new2(void* param1) {
    return QsciDocument_new2((QsciDocument*)param1);
}

void q_scidocument_operator_assign(void* self, void* param1) {
    QsciDocument_OperatorAssign((QsciDocument*)self, (QsciDocument*)param1);
}

void q_scidocument_delete(void* self) {
    QsciDocument_Delete((QsciDocument*)(self));
}
