#pragma once
#ifndef SRC_QT6C_LIBQRANDOM_H
#define SRC_QT6C_LIBQRANDOM_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)

/// q_randomgenerator_new constructs a new QRandomGenerator object.
///
QRandomGenerator* q_randomgenerator_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)

/// q_randomgenerator_new2 constructs a new QRandomGenerator object.
///
/// @param seedBuffer uint32_t*
/// @param lenVal int64_t
///
QRandomGenerator* q_randomgenerator_new2(uint32_t* seedBuffer, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)

/// q_randomgenerator_new3 constructs a new QRandomGenerator object.
///
/// @param begin uint32_t*
/// @param end uint32_t*
///
QRandomGenerator* q_randomgenerator_new3(uint32_t* begin, uint32_t* end);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)

/// q_randomgenerator_new4 constructs a new QRandomGenerator object.
///
/// @param other QRandomGenerator*
///
QRandomGenerator* q_randomgenerator_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html)

/// q_randomgenerator_new5 constructs a new QRandomGenerator object.
///
/// @param seedValue uint32_t
///
QRandomGenerator* q_randomgenerator_new5(uint32_t seedValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-eq)
///
/// @param self QRandomGenerator*
/// @param other QRandomGenerator*
///
void q_randomgenerator_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// @param self QRandomGenerator*
///
uint32_t q_randomgenerator_generate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// @param self QRandomGenerator*
///
uint64_t q_randomgenerator_generate64(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// @param self QRandomGenerator*
///
double q_randomgenerator_generate_double(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param highest double
///
double q_randomgenerator_bounded(void* self, double highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param highest uint32_t
///
uint32_t q_randomgenerator_bounded2(void* self, uint32_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest uint32_t
/// @param highest uint32_t
///
uint32_t q_randomgenerator_bounded3(void* self, uint32_t lowest, uint32_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param highest int
///
int32_t q_randomgenerator_bounded4(void* self, int highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest int
/// @param highest int
///
int32_t q_randomgenerator_bounded5(void* self, int lowest, int highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param highest uint64_t
///
uint64_t q_randomgenerator_bounded6(void* self, uint64_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest uint64_t
/// @param highest uint64_t
///
uint64_t q_randomgenerator_bounded7(void* self, uint64_t lowest, uint64_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param highest long long
///
long long q_randomgenerator_bounded8(void* self, long long highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest long long
/// @param highest long long
///
long long q_randomgenerator_bounded9(void* self, long long lowest, long long highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest int
/// @param highest long long
///
long long q_randomgenerator_bounded10(void* self, int lowest, long long highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest long long
/// @param highest int
///
long long q_randomgenerator_bounded11(void* self, long long lowest, int highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest uint32_t
/// @param highest uint64_t
///
uint64_t q_randomgenerator_bounded12(void* self, uint32_t lowest, uint64_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator*
/// @param lowest uint64_t
/// @param highest uint32_t
///
uint64_t q_randomgenerator_bounded13(void* self, uint64_t lowest, uint32_t highest);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// @param self QRandomGenerator*
/// @param begin uint32_t*
/// @param end uint32_t*
///
void q_randomgenerator_generate2(void* self, uint32_t* begin, uint32_t* end);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#operator-28-29)
///
/// @param self QRandomGenerator*
///
uint32_t q_randomgenerator_operator_call(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// @param self QRandomGenerator*
///
void q_randomgenerator_seed(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
///
/// @param self QRandomGenerator*
/// @param z uint64_t
///
void q_randomgenerator_discard(void* self, uint64_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
///
uint32_t q_randomgenerator_min();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
///
uint32_t q_randomgenerator_max();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
///
QRandomGenerator* q_randomgenerator_system();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
///
QRandomGenerator* q_randomgenerator_global();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
///
QRandomGenerator* q_randomgenerator_securely_seeded();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// @param self QRandomGenerator*
/// @param s uint32_t
///
void q_randomgenerator_seed1(void* self, uint32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#dtor.QRandomGenerator)
///
/// Delete this object from C++ memory.
///
/// @param self QRandomGenerator*
///
void q_randomgenerator_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new constructs a new QRandomGenerator64 object.
///
QRandomGenerator64* q_randomgenerator64_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new2 constructs a new QRandomGenerator64 object.
///
/// @param seedBuffer uint32_t*
/// @param lenVal int64_t
///
QRandomGenerator64* q_randomgenerator64_new2(uint32_t* seedBuffer, int64_t lenVal);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new3 constructs a new QRandomGenerator64 object.
///
/// @param begin uint32_t*
/// @param end uint32_t*
///
QRandomGenerator64* q_randomgenerator64_new3(uint32_t* begin, uint32_t* end);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new4 constructs a new QRandomGenerator64 object.
///
/// @param other QRandomGenerator*
///
QRandomGenerator64* q_randomgenerator64_new4(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new5 constructs a new QRandomGenerator64 object.
///
/// @param param1 QRandomGenerator64*
///
QRandomGenerator64* q_randomgenerator64_new5(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html)

/// q_randomgenerator64_new6 constructs a new QRandomGenerator64 object.
///
/// @param seedValue uint32_t
///
QRandomGenerator64* q_randomgenerator64_new6(uint32_t seedValue);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
///
/// @param self QRandomGenerator64*
///
uint64_t q_randomgenerator64_generate(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-28-29)
///
/// @param self QRandomGenerator64*
///
uint64_t q_randomgenerator64_operator_call(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
///
/// @param self QRandomGenerator64*
/// @param z uint64_t
///
void q_randomgenerator64_discard(void* self, uint64_t z);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
///
uint64_t q_randomgenerator64_min();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
///
uint64_t q_randomgenerator64_max();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
///
QRandomGenerator64* q_randomgenerator64_system();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
///
QRandomGenerator64* q_randomgenerator64_global();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
///
QRandomGenerator64* q_randomgenerator64_securely_seeded();

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator-eq)
///
/// @param self QRandomGenerator64*
/// @param param1 QRandomGenerator64*
///
void q_randomgenerator64_operator_assign(void* self, void* param1);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// @param self QRandomGenerator64*
///
uint64_t q_randomgenerator64_generate64(void* self);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// @param self QRandomGenerator64*
///
double q_randomgenerator64_generate_double(void* self);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param highest double
///
double q_randomgenerator64_bounded(void* self, double highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param highest uint32_t
///
uint32_t q_randomgenerator64_bounded2(void* self, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest uint32_t
/// @param highest uint32_t
///
uint32_t q_randomgenerator64_bounded3(void* self, uint32_t lowest, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param highest int
///
int32_t q_randomgenerator64_bounded4(void* self, int highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest int
/// @param highest int
///
int32_t q_randomgenerator64_bounded5(void* self, int lowest, int highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param highest uint64_t
///
uint64_t q_randomgenerator64_bounded6(void* self, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest uint64_t
/// @param highest uint64_t
///
uint64_t q_randomgenerator64_bounded7(void* self, uint64_t lowest, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param highest long long
///
long long q_randomgenerator64_bounded8(void* self, long long highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest long long
/// @param highest long long
///
long long q_randomgenerator64_bounded9(void* self, long long lowest, long long highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest int
/// @param highest long long
///
long long q_randomgenerator64_bounded10(void* self, int lowest, long long highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest long long
/// @param highest int
///
long long q_randomgenerator64_bounded11(void* self, long long lowest, int highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest uint32_t
/// @param highest uint64_t
///
uint64_t q_randomgenerator64_bounded12(void* self, uint32_t lowest, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// @param self QRandomGenerator64*
/// @param lowest uint64_t
/// @param highest uint32_t
///
uint64_t q_randomgenerator64_bounded13(void* self, uint64_t lowest, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// @param self QRandomGenerator64*
/// @param begin uint32_t*
/// @param end uint32_t*
///
void q_randomgenerator64_generate2(void* self, uint32_t* begin, uint32_t* end);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// @param self QRandomGenerator64*
///
void q_randomgenerator64_seed(void* self);

/// Inherited from QRandomGenerator
///
/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// @param self QRandomGenerator64*
/// @param s uint32_t
///
void q_randomgenerator64_seed1(void* self, uint32_t s);

/// [Upstream resources](https://doc.qt.io/qt-6/qrandomgenerator64.html#dtor.QRandomGenerator64)
///
/// Delete this object from C++ memory.
///
/// @param self QRandomGenerator64*
///
void q_randomgenerator64_delete(void* self);

#endif
