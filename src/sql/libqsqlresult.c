#include "libqsqldriver.hpp"
#include "libqsqlerror.hpp"
#include "libqsqlrecord.hpp"
#include "../libqvariant.hpp"
#include "../libqnamespace.hpp"
#include "libqsqlresult.hpp"
#include "libqsqlresult.h"

QVariant* q_sqlresult_handle(void* self) {
    return QSqlResult_Handle((QSqlResult*)self);
}

void q_sqlresult_delete(void* self) {
    QSqlResult_Delete((QSqlResult*)(self));
}
