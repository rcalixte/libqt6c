#include "libqbardataitem.hpp"
#include "libqbardataitem.h"

QBarDataItem* q_bardataitem_new() {
    return QBarDataItem_New();
}

QBarDataItem* q_bardataitem_new2(float value) {
    return QBarDataItem_New2(value);
}

QBarDataItem* q_bardataitem_new3(float value, float angle) {
    return QBarDataItem_New3(value, angle);
}

QBarDataItem* q_bardataitem_new4(const void* other) {
    return QBarDataItem_New4((QBarDataItem*)other);
}

void q_bardataitem_operator_assign(void* self, const void* other) {
    QBarDataItem_OperatorAssign((QBarDataItem*)self, (QBarDataItem*)other);
}

void q_bardataitem_set_value(void* self, float val) {
    QBarDataItem_SetValue((QBarDataItem*)self, val);
}

float q_bardataitem_value(const void* self) {
    return QBarDataItem_Value((QBarDataItem*)self);
}

void q_bardataitem_set_rotation(void* self, float angle) {
    QBarDataItem_SetRotation((QBarDataItem*)self, angle);
}

float q_bardataitem_rotation(const void* self) {
    return QBarDataItem_Rotation((QBarDataItem*)self);
}

void q_bardataitem_delete(void* self) {
    QBarDataItem_Delete((QBarDataItem*)(self));
}
