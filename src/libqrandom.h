#pragma once
#ifndef SRCQT6C_LIBQRANDOM_H
#define SRCQT6C_LIBQRANDOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QRandomGenerator* q_randomgenerator_new();
QRandomGenerator* q_randomgenerator_new2(uint32_t* seedBuffer, int64_t lenVal);
QRandomGenerator* q_randomgenerator_new3(uint32_t* begin, uint32_t* end);
QRandomGenerator* q_randomgenerator_new4(void* other);
QRandomGenerator* q_randomgenerator_new5(uint32_t seedValue);
void q_randomgenerator_operator_assign(void* self, void* other);
uint32_t q_randomgenerator_generate(void* self);
uint64_t q_randomgenerator_generate64(void* self);
double q_randomgenerator_generate_double(void* self);
double q_randomgenerator_bounded(void* self, double highest);
uint32_t q_randomgenerator_bounded_with_highest(void* self, uint32_t highest);
uint32_t q_randomgenerator_bounded2(void* self, uint32_t lowest, uint32_t highest);
int32_t q_randomgenerator_bounded3(void* self, int highest);
int32_t q_randomgenerator_bounded4(void* self, int lowest, int highest);
uint64_t q_randomgenerator_bounded5(void* self, uint64_t highest);
uint64_t q_randomgenerator_bounded6(void* self, uint64_t lowest, uint64_t highest);
long long q_randomgenerator_bounded7(void* self, long long highest);
long long q_randomgenerator_bounded8(void* self, long long lowest, long long highest);
long long q_randomgenerator_bounded9(void* self, int lowest, long long highest);
long long q_randomgenerator_bounded10(void* self, long long lowest, int highest);
uint64_t q_randomgenerator_bounded11(void* self, uint32_t lowest, uint64_t highest);
uint64_t q_randomgenerator_bounded12(void* self, uint64_t lowest, uint32_t highest);
void q_randomgenerator_generate2(void* self, uint32_t* begin, uint32_t* end);
uint32_t q_randomgenerator_operator_call(void* self);
void q_randomgenerator_seed(void* self);
void q_randomgenerator_discard(void* self, uint64_t z);
uint32_t q_randomgenerator_min();
uint32_t q_randomgenerator_max();
QRandomGenerator* q_randomgenerator_system();
QRandomGenerator* q_randomgenerator_global();
QRandomGenerator* q_randomgenerator_securely_seeded();
void q_randomgenerator_seed1(void* self, uint32_t s);
void q_randomgenerator_delete(void* self);

QRandomGenerator64* q_randomgenerator64_new();
QRandomGenerator64* q_randomgenerator64_new2(uint32_t* seedBuffer, int64_t lenVal);
QRandomGenerator64* q_randomgenerator64_new3(uint32_t* begin, uint32_t* end);
QRandomGenerator64* q_randomgenerator64_new4(void* other);
QRandomGenerator64* q_randomgenerator64_new5(void* param1);
QRandomGenerator64* q_randomgenerator64_new6(uint32_t seedValue);
uint64_t q_randomgenerator64_generate(void* self);
uint64_t q_randomgenerator64_operator_call(void* self);
void q_randomgenerator64_discard(void* self, uint64_t z);
uint64_t q_randomgenerator64_min();
uint64_t q_randomgenerator64_max();
QRandomGenerator64* q_randomgenerator64_system();
QRandomGenerator64* q_randomgenerator64_global();
QRandomGenerator64* q_randomgenerator64_securely_seeded();
void q_randomgenerator64_operator_assign(void* self, void* param1);
uint64_t q_randomgenerator64_generate64(void* self);
double q_randomgenerator64_generate_double(void* self);
double q_randomgenerator64_bounded(void* self, double highest);
uint32_t q_randomgenerator64_bounded_with_highest(void* self, uint32_t highest);
uint32_t q_randomgenerator64_bounded2(void* self, uint32_t lowest, uint32_t highest);
int32_t q_randomgenerator64_bounded3(void* self, int highest);
int32_t q_randomgenerator64_bounded4(void* self, int lowest, int highest);
uint64_t q_randomgenerator64_bounded5(void* self, uint64_t highest);
uint64_t q_randomgenerator64_bounded6(void* self, uint64_t lowest, uint64_t highest);
long long q_randomgenerator64_bounded7(void* self, long long highest);
long long q_randomgenerator64_bounded8(void* self, long long lowest, long long highest);
long long q_randomgenerator64_bounded9(void* self, int lowest, long long highest);
long long q_randomgenerator64_bounded10(void* self, long long lowest, int highest);
uint64_t q_randomgenerator64_bounded11(void* self, uint32_t lowest, uint64_t highest);
uint64_t q_randomgenerator64_bounded12(void* self, uint64_t lowest, uint32_t highest);
void q_randomgenerator64_generate2(void* self, uint32_t* begin, uint32_t* end);
void q_randomgenerator64_seed(void* self);
void q_randomgenerator64_seed1(void* self, uint32_t s);
void q_randomgenerator64_delete(void* self);

#endif
