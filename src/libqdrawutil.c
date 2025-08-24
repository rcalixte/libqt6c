#include "libqdrawutil.hpp"
#include "libqdrawutil.h"

QTileRules* q_tilerules_new(void* other) {
    return QTileRules_new((QTileRules*)other);
}

QTileRules* q_tilerules_new2(void* other) {
    return QTileRules_new2((QTileRules*)other);
}

QTileRules* q_tilerules_new3(int32_t horizontalRule, int32_t verticalRule) {
    return QTileRules_new3(horizontalRule, verticalRule);
}

QTileRules* q_tilerules_new4() {
    return QTileRules_new4();
}

QTileRules* q_tilerules_new5(void* param1) {
    return QTileRules_new5((QTileRules*)param1);
}

QTileRules* q_tilerules_new6(int32_t rule) {
    return QTileRules_new6(rule);
}

void q_tilerules_copy_assign(void* self, void* other) {
    QTileRules_CopyAssign((QTileRules*)self, (QTileRules*)other);
}

void q_tilerules_move_assign(void* self, void* other) {
    QTileRules_MoveAssign((QTileRules*)self, (QTileRules*)other);
}

int32_t q_tilerules_horizontal(void* self) {
    return QTileRules_Horizontal((QTileRules*)self);
}

void q_tilerules_set_horizontal(void* self, int32_t horizontal) {
    QTileRules_SetHorizontal((QTileRules*)self, horizontal);
}

int32_t q_tilerules_vertical(void* self) {
    return QTileRules_Vertical((QTileRules*)self);
}

void q_tilerules_set_vertical(void* self, int32_t vertical) {
    QTileRules_SetVertical((QTileRules*)self, vertical);
}

void q_tilerules_delete(void* self) {
    QTileRules_Delete((QTileRules*)(self));
}
