#include "libqhashfunctions.hpp"
#include "libqhashfunctions.h"

QHashSeed* q_hashseed_new(void* other) {
    return QHashSeed_new((QHashSeed*)other);
}

QHashSeed* q_hashseed_new2(void* other) {
    return QHashSeed_new2((QHashSeed*)other);
}

QHashSeed* q_hashseed_new3() {
    return QHashSeed_new3();
}

QHashSeed* q_hashseed_new4(uint64_t d) {
    return QHashSeed_new4(d);
}

void q_hashseed_copy_assign(void* self, void* other) {
    QHashSeed_CopyAssign((QHashSeed*)self, (QHashSeed*)other);
}

void q_hashseed_move_assign(void* self, void* other) {
    QHashSeed_MoveAssign((QHashSeed*)self, (QHashSeed*)other);
}

uint64_t q_hashseed_to_unsigned_long(void* self) {
    return QHashSeed_ToUnsignedLong((QHashSeed*)self);
}

QHashSeed* q_hashseed_global_seed() {
    return QHashSeed_GlobalSeed();
}

void q_hashseed_set_deterministic_global_seed() {
    QHashSeed_SetDeterministicGlobalSeed();
}

void q_hashseed_reset_random_global_seed() {
    QHashSeed_ResetRandomGlobalSeed();
}

void q_hashseed_delete(void* self) {
    QHashSeed_Delete((QHashSeed*)(self));
}
