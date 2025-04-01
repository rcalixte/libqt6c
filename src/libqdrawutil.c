#include "libqdrawutil.hpp"
#include "libqdrawutil.h"

QTileRules* q_tilerules_new(void* other) {
    return QTileRules_new((QTileRules*)other);
}

QTileRules* q_tilerules_new2(void* other) {
    return QTileRules_new2((QTileRules*)other);
}

QTileRules* q_tilerules_new3(int64_t horizontalRule, int64_t verticalRule) {
    return QTileRules_new3(horizontalRule, verticalRule);
}

QTileRules* q_tilerules_new4() {
    return QTileRules_new4();
}

QTileRules* q_tilerules_new5(void* param1) {
    return QTileRules_new5((QTileRules*)param1);
}

QTileRules* q_tilerules_new6(int64_t rule) {
    return QTileRules_new6(rule);
}

void q_tilerules_copy_assign(void* self, void* other) {
    QTileRules_CopyAssign((QTileRules*)self, (QTileRules*)other);
}

void q_tilerules_move_assign(void* self, void* other) {
    QTileRules_MoveAssign((QTileRules*)self, (QTileRules*)other);
}

void q_tilerules_delete(void* self) {
    QTileRules_Delete((QTileRules*)(self));
}
