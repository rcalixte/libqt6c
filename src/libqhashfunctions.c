#include "libqbitarray.hpp"
#include "libqchar.hpp"
#include "libqnamespace.hpp"
#include "libqhashfunctions.hpp"
#include "libqhashfunctions.h"

int32_t q_qhashfunctions_q_global_q_hash_seed() {
    return qhashfunctions_QGlobalQHashSeed();
}

void q_qhashfunctions_q_set_global_q_hash_seed(int newSeed) {
    qhashfunctions_QSetGlobalQHashSeed(newSeed);
}

uintptr_t q_qhashfunctions_q_hash_bits(void* p, uintptr_t size, uintptr_t seed) {
    return qhashfunctions_QHashBits(p, size, seed);
}

uintptr_t q_qhashfunctions_q_hash(char key, uintptr_t seed) {
    return qhashfunctions_QHash(key, seed);
}

uintptr_t q_qhashfunctions_q_hash2(unsigned char key, uintptr_t seed) {
    return qhashfunctions_QHash2(key, seed);
}

uintptr_t q_qhashfunctions_q_hash3(signed char key, uintptr_t seed) {
    return qhashfunctions_QHash3(key, seed);
}

uintptr_t q_qhashfunctions_q_hash4(uint16_t key, uintptr_t seed) {
    return qhashfunctions_QHash4(key, seed);
}

uintptr_t q_qhashfunctions_q_hash5(short key, uintptr_t seed) {
    return qhashfunctions_QHash5(key, seed);
}

uintptr_t q_qhashfunctions_q_hash6(uint32_t key, uintptr_t seed) {
    return qhashfunctions_QHash6(key, seed);
}

uintptr_t q_qhashfunctions_q_hash7(int key, uintptr_t seed) {
    return qhashfunctions_QHash7(key, seed);
}

uintptr_t q_qhashfunctions_q_hash8(uintptr_t key, uintptr_t seed) {
    return qhashfunctions_QHash8(key, seed);
}

uintptr_t q_qhashfunctions_q_hash9(long key, uintptr_t seed) {
    return qhashfunctions_QHash9(key, seed);
}

uintptr_t q_qhashfunctions_q_hash10(uint64_t key, uintptr_t seed) {
    return qhashfunctions_QHash10(key, seed);
}

uintptr_t q_qhashfunctions_q_hash11(int64_t key, uintptr_t seed) {
    return qhashfunctions_QHash11(key, seed);
}

uintptr_t q_qhashfunctions_q_hash12(float key, uintptr_t seed) {
    return qhashfunctions_QHash12(key, seed);
}

uintptr_t q_qhashfunctions_q_hash13(double key, uintptr_t seed) {
    return qhashfunctions_QHash13(key, seed);
}

uintptr_t q_qhashfunctions_q_hash19(void* key, uintptr_t seed) {
    return qhashfunctions_QHash19((QChar*)key, seed);
}

uintptr_t q_qhashfunctions_q_hash20(char* key, uintptr_t seed) {
    return qhashfunctions_QHash20(qstring(key), seed);
}

uintptr_t q_qhashfunctions_q_hash22(const char* key, uintptr_t seed) {
    return qhashfunctions_QHash22(qstring(key), seed);
}

uintptr_t q_qhashfunctions_q_hash23(const char* key, uintptr_t seed) {
    return qhashfunctions_QHash23(qstring(key), seed);
}

uintptr_t q_qhashfunctions_q_hash24(void* key, uintptr_t seed) {
    return qhashfunctions_QHash24((QBitArray*)key, seed);
}

uintptr_t q_qhashfunctions_q_hash25(char* key, uintptr_t seed) {
    return qhashfunctions_QHash25(qstring(key), seed);
}

uintptr_t q_qhashfunctions_q_hash26(void* key, uintptr_t seed) {
    return qhashfunctions_QHash26((QKeyCombination*)key, seed);
}

uint32_t q_qhashfunctions_hash(const char* key, uint32_t chained) {
    return qhashfunctions_Hash(qstring(key), chained);
}

QHashSeed* q_hashseed_new(void* other) {
    return QHashSeed_New((QHashSeed*)other);
}

QHashSeed* q_hashseed_new2(void* other) {
    return QHashSeed_New2((QHashSeed*)other);
}

QHashSeed* q_hashseed_new3() {
    return QHashSeed_New3();
}

QHashSeed* q_hashseed_new4(uintptr_t d) {
    return QHashSeed_New4(d);
}

void q_hashseed_copy_assign(void* self, void* other) {
    QHashSeed_CopyAssign((QHashSeed*)self, (QHashSeed*)other);
}

void q_hashseed_move_assign(void* self, void* other) {
    QHashSeed_MoveAssign((QHashSeed*)self, (QHashSeed*)other);
}

uintptr_t q_hashseed_to_unsigned_long(void* self) {
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
