#include "libqrandom.hpp"
#include "libqrandom.h"

QRandomGenerator* q_randomgenerator_new() {
    return QRandomGenerator_new();
}

QRandomGenerator* q_randomgenerator_new2(uint32_t* seedBuffer, int64_t lenVal) {
    return QRandomGenerator_new2(seedBuffer, lenVal);
}

QRandomGenerator* q_randomgenerator_new3(uint32_t* begin, uint32_t* end) {
    return QRandomGenerator_new3(begin, end);
}

QRandomGenerator* q_randomgenerator_new4(void* other) {
    return QRandomGenerator_new4((QRandomGenerator*)other);
}

QRandomGenerator* q_randomgenerator_new5(uint32_t seedValue) {
    return QRandomGenerator_new5(seedValue);
}

void q_randomgenerator_operator_assign(void* self, void* other) {
    QRandomGenerator_OperatorAssign((QRandomGenerator*)self, (QRandomGenerator*)other);
}

uint32_t q_randomgenerator_generate(void* self) {
    return QRandomGenerator_Generate((QRandomGenerator*)self);
}

uint64_t q_randomgenerator_generate64(void* self) {
    return QRandomGenerator_Generate64((QRandomGenerator*)self);
}

double q_randomgenerator_generate_double(void* self) {
    return QRandomGenerator_GenerateDouble((QRandomGenerator*)self);
}

double q_randomgenerator_bounded(void* self, double highest) {
    return QRandomGenerator_Bounded((QRandomGenerator*)self, highest);
}

uint32_t q_randomgenerator_bounded_with_highest(void* self, uint32_t highest) {
    return QRandomGenerator_BoundedWithHighest((QRandomGenerator*)self, highest);
}

uint32_t q_randomgenerator_bounded2(void* self, uint32_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded2((QRandomGenerator*)self, lowest, highest);
}

int32_t q_randomgenerator_bounded3(void* self, int highest) {
    return QRandomGenerator_Bounded3((QRandomGenerator*)self, highest);
}

int32_t q_randomgenerator_bounded4(void* self, int lowest, int highest) {
    return QRandomGenerator_Bounded4((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator_bounded5(void* self, uint64_t highest) {
    return QRandomGenerator_Bounded5((QRandomGenerator*)self, highest);
}

uint64_t q_randomgenerator_bounded6(void* self, uint64_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded6((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator_bounded7(void* self, long long highest) {
    return QRandomGenerator_Bounded7((QRandomGenerator*)self, highest);
}

long long q_randomgenerator_bounded8(void* self, long long lowest, long long highest) {
    return QRandomGenerator_Bounded8((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator_bounded9(void* self, int lowest, long long highest) {
    return QRandomGenerator_Bounded9((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator_bounded10(void* self, long long lowest, int highest) {
    return QRandomGenerator_Bounded10((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator_bounded11(void* self, uint32_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded11((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator_bounded12(void* self, uint64_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded12((QRandomGenerator*)self, lowest, highest);
}

void q_randomgenerator_generate2(void* self, uint32_t* begin, uint32_t* end) {
    QRandomGenerator_Generate2((QRandomGenerator*)self, begin, end);
}

uint32_t q_randomgenerator_operator_call(void* self) {
    return QRandomGenerator_OperatorCall((QRandomGenerator*)self);
}

void q_randomgenerator_seed(void* self) {
    QRandomGenerator_Seed((QRandomGenerator*)self);
}

void q_randomgenerator_discard(void* self, uint64_t z) {
    QRandomGenerator_Discard((QRandomGenerator*)self, z);
}

uint32_t q_randomgenerator_min() {
    return QRandomGenerator_Min();
}

uint32_t q_randomgenerator_max() {
    return QRandomGenerator_Max();
}

QRandomGenerator* q_randomgenerator_system() {
    return QRandomGenerator_System();
}

QRandomGenerator* q_randomgenerator_global() {
    return QRandomGenerator_Global();
}

QRandomGenerator* q_randomgenerator_securely_seeded() {
    return QRandomGenerator_SecurelySeeded();
}

void q_randomgenerator_seed1(void* self, uint32_t s) {
    QRandomGenerator_Seed1((QRandomGenerator*)self, s);
}

void q_randomgenerator_delete(void* self) {
    QRandomGenerator_Delete((QRandomGenerator*)(self));
}

QRandomGenerator64* q_randomgenerator64_new() {
    return QRandomGenerator64_new();
}

QRandomGenerator64* q_randomgenerator64_new2(uint32_t* seedBuffer, int64_t lenVal) {
    return QRandomGenerator64_new2(seedBuffer, lenVal);
}

QRandomGenerator64* q_randomgenerator64_new3(uint32_t* begin, uint32_t* end) {
    return QRandomGenerator64_new3(begin, end);
}

QRandomGenerator64* q_randomgenerator64_new4(void* other) {
    return QRandomGenerator64_new4((QRandomGenerator*)other);
}

QRandomGenerator64* q_randomgenerator64_new5(void* param1) {
    return QRandomGenerator64_new5((QRandomGenerator64*)param1);
}

QRandomGenerator64* q_randomgenerator64_new6(uint32_t seedValue) {
    return QRandomGenerator64_new6(seedValue);
}

uint64_t q_randomgenerator64_generate(void* self) {
    return QRandomGenerator64_Generate((QRandomGenerator64*)self);
}

uint64_t q_randomgenerator64_operator_call(void* self) {
    return QRandomGenerator64_OperatorCall((QRandomGenerator64*)self);
}

void q_randomgenerator64_discard(void* self, uint64_t z) {
    QRandomGenerator64_Discard((QRandomGenerator64*)self, z);
}

uint64_t q_randomgenerator64_min() {
    return QRandomGenerator64_Min();
}

uint64_t q_randomgenerator64_max() {
    return QRandomGenerator64_Max();
}

QRandomGenerator64* q_randomgenerator64_system() {
    return QRandomGenerator64_System();
}

QRandomGenerator64* q_randomgenerator64_global() {
    return QRandomGenerator64_Global();
}

QRandomGenerator64* q_randomgenerator64_securely_seeded() {
    return QRandomGenerator64_SecurelySeeded();
}

void q_randomgenerator64_operator_assign(void* self, void* param1) {
    QRandomGenerator64_OperatorAssign((QRandomGenerator64*)self, (QRandomGenerator64*)param1);
}

uint64_t q_randomgenerator64_generate64(void* self) {
    return QRandomGenerator_Generate64((QRandomGenerator*)self);
}

double q_randomgenerator64_generate_double(void* self) {
    return QRandomGenerator_GenerateDouble((QRandomGenerator*)self);
}

double q_randomgenerator64_bounded(void* self, double highest) {
    return QRandomGenerator_Bounded((QRandomGenerator*)self, highest);
}

uint32_t q_randomgenerator64_bounded_with_highest(void* self, uint32_t highest) {
    return QRandomGenerator_BoundedWithHighest((QRandomGenerator*)self, highest);
}

uint32_t q_randomgenerator64_bounded2(void* self, uint32_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded2((QRandomGenerator*)self, lowest, highest);
}

int32_t q_randomgenerator64_bounded3(void* self, int highest) {
    return QRandomGenerator_Bounded3((QRandomGenerator*)self, highest);
}

int32_t q_randomgenerator64_bounded4(void* self, int lowest, int highest) {
    return QRandomGenerator_Bounded4((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator64_bounded5(void* self, uint64_t highest) {
    return QRandomGenerator_Bounded5((QRandomGenerator*)self, highest);
}

uint64_t q_randomgenerator64_bounded6(void* self, uint64_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded6((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator64_bounded7(void* self, long long highest) {
    return QRandomGenerator_Bounded7((QRandomGenerator*)self, highest);
}

long long q_randomgenerator64_bounded8(void* self, long long lowest, long long highest) {
    return QRandomGenerator_Bounded8((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator64_bounded9(void* self, int lowest, long long highest) {
    return QRandomGenerator_Bounded9((QRandomGenerator*)self, lowest, highest);
}

long long q_randomgenerator64_bounded10(void* self, long long lowest, int highest) {
    return QRandomGenerator_Bounded10((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator64_bounded11(void* self, uint32_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded11((QRandomGenerator*)self, lowest, highest);
}

uint64_t q_randomgenerator64_bounded12(void* self, uint64_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded12((QRandomGenerator*)self, lowest, highest);
}

void q_randomgenerator64_generate2(void* self, uint32_t* begin, uint32_t* end) {
    QRandomGenerator_Generate2((QRandomGenerator*)self, begin, end);
}

void q_randomgenerator64_seed(void* self) {
    QRandomGenerator_Seed((QRandomGenerator*)self);
}

void q_randomgenerator64_seed1(void* self, uint32_t s) {
    QRandomGenerator_Seed1((QRandomGenerator*)self, s);
}

void q_randomgenerator64_delete(void* self) {
    QRandomGenerator64_Delete((QRandomGenerator64*)(self));
}
