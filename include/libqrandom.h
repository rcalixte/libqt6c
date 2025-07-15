#pragma once
#ifndef SRCQT6C_LIBQRANDOM_H
#define SRCQT6C_LIBQRANDOM_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qrandomgenerator.html

/// q_randomgenerator_new constructs a new QRandomGenerator object.
///
///
QRandomGenerator* q_randomgenerator_new();

/// q_randomgenerator_new2 constructs a new QRandomGenerator object.
///
/// ``` uint32_t* seedBuffer, int64_t lenVal ```
QRandomGenerator* q_randomgenerator_new2(uint32_t* seedBuffer, int64_t lenVal);

/// q_randomgenerator_new3 constructs a new QRandomGenerator object.
///
/// ``` uint32_t* begin, uint32_t* end ```
QRandomGenerator* q_randomgenerator_new3(uint32_t* begin, uint32_t* end);

/// q_randomgenerator_new4 constructs a new QRandomGenerator object.
///
/// ``` QRandomGenerator* other ```
QRandomGenerator* q_randomgenerator_new4(void* other);

/// q_randomgenerator_new5 constructs a new QRandomGenerator object.
///
/// ``` uint32_t seedValue ```
QRandomGenerator* q_randomgenerator_new5(uint32_t seedValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator=)
///
/// ``` QRandomGenerator* self, QRandomGenerator* other ```
void q_randomgenerator_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator* self ```
uint32_t q_randomgenerator_generate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// ``` QRandomGenerator* self ```
uint64_t q_randomgenerator_generate64(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// ``` QRandomGenerator* self ```
double q_randomgenerator_generate_double(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, double highest ```
double q_randomgenerator_bounded(void* self, double highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t highest ```
uint32_t q_randomgenerator_bounded2(void* self, uint32_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t lowest, uint32_t highest ```
uint32_t q_randomgenerator_bounded3(void* self, uint32_t lowest, uint32_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int highest ```
int32_t q_randomgenerator_bounded4(void* self, int highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int lowest, int highest ```
int32_t q_randomgenerator_bounded5(void* self, int lowest, int highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t highest ```
uint64_t q_randomgenerator_bounded6(void* self, uint64_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t lowest, uint64_t highest ```
uint64_t q_randomgenerator_bounded7(void* self, uint64_t lowest, uint64_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long highest ```
long long q_randomgenerator_bounded8(void* self, long long highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long lowest, long long highest ```
long long q_randomgenerator_bounded9(void* self, long long lowest, long long highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int lowest, long long highest ```
long long q_randomgenerator_bounded10(void* self, int lowest, long long highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long lowest, int highest ```
long long q_randomgenerator_bounded11(void* self, long long lowest, int highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t lowest, uint64_t highest ```
uint64_t q_randomgenerator_bounded12(void* self, uint32_t lowest, uint64_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t lowest, uint32_t highest ```
uint64_t q_randomgenerator_bounded13(void* self, uint64_t lowest, uint32_t highest);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator* self, uint32_t* begin, uint32_t* end ```
void q_randomgenerator_generate2(void* self, uint32_t* begin, uint32_t* end);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator())
///
/// ``` QRandomGenerator* self ```
uint32_t q_randomgenerator_operator_call(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator* self ```
void q_randomgenerator_seed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
///
/// ``` QRandomGenerator* self, uint64_t z ```
void q_randomgenerator_discard(void* self, uint64_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
///
///
uint32_t q_randomgenerator_min();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
///
///
uint32_t q_randomgenerator_max();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
///
///
QRandomGenerator* q_randomgenerator_system();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
///
///
QRandomGenerator* q_randomgenerator_global();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
///
///
QRandomGenerator* q_randomgenerator_securely_seeded();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator* self, uint32_t s ```
void q_randomgenerator_seed1(void* self, uint32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#dtor.QRandomGenerator)
///
/// Delete this object from C++ memory.
///
/// ``` QRandomGenerator* self ```
void q_randomgenerator_delete(void* self);

/// https://doc.qt.io/qt-6/qrandomgenerator64.html

/// q_randomgenerator64_new constructs a new QRandomGenerator64 object.
///
///
QRandomGenerator64* q_randomgenerator64_new();

/// q_randomgenerator64_new2 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t* seedBuffer, int64_t lenVal ```
QRandomGenerator64* q_randomgenerator64_new2(uint32_t* seedBuffer, int64_t lenVal);

/// q_randomgenerator64_new3 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t* begin, uint32_t* end ```
QRandomGenerator64* q_randomgenerator64_new3(uint32_t* begin, uint32_t* end);

/// q_randomgenerator64_new4 constructs a new QRandomGenerator64 object.
///
/// ``` QRandomGenerator* other ```
QRandomGenerator64* q_randomgenerator64_new4(void* other);

/// q_randomgenerator64_new5 constructs a new QRandomGenerator64 object.
///
/// ``` QRandomGenerator64* param1 ```
QRandomGenerator64* q_randomgenerator64_new5(void* param1);

/// q_randomgenerator64_new6 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t seedValue ```
QRandomGenerator64* q_randomgenerator64_new6(uint32_t seedValue);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_generate(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator())
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_operator_call(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
///
/// ``` QRandomGenerator64* self, uint64_t z ```
void q_randomgenerator64_discard(void* self, uint64_t z);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
///
///
uint64_t q_randomgenerator64_min();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
///
///
uint64_t q_randomgenerator64_max();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
///
///
QRandomGenerator64* q_randomgenerator64_system();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
///
///
QRandomGenerator64* q_randomgenerator64_global();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
///
///
QRandomGenerator64* q_randomgenerator64_securely_seeded();

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator=)
///
/// ``` QRandomGenerator64* self, QRandomGenerator64* param1 ```
void q_randomgenerator64_operator_assign(void* self, void* param1);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_generate64(void* self);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// ``` QRandomGenerator64* self ```
double q_randomgenerator64_generate_double(void* self);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, double highest ```
double q_randomgenerator64_bounded(void* self, double highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t highest ```
uint32_t q_randomgenerator64_bounded2(void* self, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t lowest, uint32_t highest ```
uint32_t q_randomgenerator64_bounded3(void* self, uint32_t lowest, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int highest ```
int32_t q_randomgenerator64_bounded4(void* self, int highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int lowest, int highest ```
int32_t q_randomgenerator64_bounded5(void* self, int lowest, int highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t highest ```
uint64_t q_randomgenerator64_bounded6(void* self, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t lowest, uint64_t highest ```
uint64_t q_randomgenerator64_bounded7(void* self, uint64_t lowest, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long highest ```
long long q_randomgenerator64_bounded8(void* self, long long highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long lowest, long long highest ```
long long q_randomgenerator64_bounded9(void* self, long long lowest, long long highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int lowest, long long highest ```
long long q_randomgenerator64_bounded10(void* self, int lowest, long long highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long lowest, int highest ```
long long q_randomgenerator64_bounded11(void* self, long long lowest, int highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t lowest, uint64_t highest ```
uint64_t q_randomgenerator64_bounded12(void* self, uint32_t lowest, uint64_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t lowest, uint32_t highest ```
uint64_t q_randomgenerator64_bounded13(void* self, uint64_t lowest, uint32_t highest);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator64* self, uint32_t* begin, uint32_t* end ```
void q_randomgenerator64_generate2(void* self, uint32_t* begin, uint32_t* end);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator64* self ```
void q_randomgenerator64_seed(void* self);

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator64* self, uint32_t s ```
void q_randomgenerator64_seed1(void* self, uint32_t s);

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#dtor.QRandomGenerator64)
///
/// Delete this object from C++ memory.
///
/// ``` QRandomGenerator64* self ```
void q_randomgenerator64_delete(void* self);

#endif
