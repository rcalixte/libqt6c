#include "libqrandom.hpp"
#include "libqrandom.h"

/// https://doc.qt.io/qt-6/qrandomgenerator.html

/// q_randomgenerator_new constructs a new QRandomGenerator object.
///
///
QRandomGenerator* q_randomgenerator_new() {
    return QRandomGenerator_new();
}

/// q_randomgenerator_new2 constructs a new QRandomGenerator object.
///
/// ``` uint32_t* seedBuffer, int64_t lenVal ```
QRandomGenerator* q_randomgenerator_new2(uint32_t* seedBuffer, int64_t lenVal) {
    return QRandomGenerator_new2(seedBuffer, lenVal);
}

/// q_randomgenerator_new3 constructs a new QRandomGenerator object.
///
/// ``` uint32_t* begin, uint32_t* end ```
QRandomGenerator* q_randomgenerator_new3(uint32_t* begin, uint32_t* end) {
    return QRandomGenerator_new3(begin, end);
}

/// q_randomgenerator_new4 constructs a new QRandomGenerator object.
///
/// ``` QRandomGenerator* other ```
QRandomGenerator* q_randomgenerator_new4(void* other) {
    return QRandomGenerator_new4((QRandomGenerator*)other);
}

/// q_randomgenerator_new5 constructs a new QRandomGenerator object.
///
/// ``` uint32_t seedValue ```
QRandomGenerator* q_randomgenerator_new5(uint32_t seedValue) {
    return QRandomGenerator_new5(seedValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator=)
///
/// ``` QRandomGenerator* self, QRandomGenerator* other ```
void q_randomgenerator_operator_assign(void* self, void* other) {
    QRandomGenerator_OperatorAssign((QRandomGenerator*)self, (QRandomGenerator*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator* self ```
uint32_t q_randomgenerator_generate(void* self) {
    return QRandomGenerator_Generate((QRandomGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// ``` QRandomGenerator* self ```
uint64_t q_randomgenerator_generate64(void* self) {
    return QRandomGenerator_Generate64((QRandomGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// ``` QRandomGenerator* self ```
double q_randomgenerator_generate_double(void* self) {
    return QRandomGenerator_GenerateDouble((QRandomGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, double highest ```
double q_randomgenerator_bounded(void* self, double highest) {
    return QRandomGenerator_Bounded((QRandomGenerator*)self, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t highest ```
uint32_t q_randomgenerator_bounded_with_highest(void* self, uint32_t highest) {
    return QRandomGenerator_BoundedWithHighest((QRandomGenerator*)self, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t lowest, uint32_t highest ```
uint32_t q_randomgenerator_bounded2(void* self, uint32_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded2((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int highest ```
int32_t q_randomgenerator_bounded3(void* self, int highest) {
    return QRandomGenerator_Bounded3((QRandomGenerator*)self, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int lowest, int highest ```
int32_t q_randomgenerator_bounded4(void* self, int lowest, int highest) {
    return QRandomGenerator_Bounded4((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t highest ```
uint64_t q_randomgenerator_bounded5(void* self, uint64_t highest) {
    return QRandomGenerator_Bounded5((QRandomGenerator*)self, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t lowest, uint64_t highest ```
uint64_t q_randomgenerator_bounded6(void* self, uint64_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded6((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long highest ```
long long q_randomgenerator_bounded7(void* self, long long highest) {
    return QRandomGenerator_Bounded7((QRandomGenerator*)self, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long lowest, long long highest ```
long long q_randomgenerator_bounded8(void* self, long long lowest, long long highest) {
    return QRandomGenerator_Bounded8((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, int lowest, long long highest ```
long long q_randomgenerator_bounded9(void* self, int lowest, long long highest) {
    return QRandomGenerator_Bounded9((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, long long lowest, int highest ```
long long q_randomgenerator_bounded10(void* self, long long lowest, int highest) {
    return QRandomGenerator_Bounded10((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint32_t lowest, uint64_t highest ```
uint64_t q_randomgenerator_bounded11(void* self, uint32_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded11((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator* self, uint64_t lowest, uint32_t highest ```
uint64_t q_randomgenerator_bounded12(void* self, uint64_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded12((QRandomGenerator*)self, lowest, highest);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator* self, uint32_t* begin, uint32_t* end ```
void q_randomgenerator_generate2(void* self, uint32_t* begin, uint32_t* end) {
    QRandomGenerator_Generate2((QRandomGenerator*)self, begin, end);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#operator())
///
/// ``` QRandomGenerator* self ```
uint32_t q_randomgenerator_operator_call(void* self) {
    return QRandomGenerator_OperatorCall((QRandomGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator* self ```
void q_randomgenerator_seed(void* self) {
    QRandomGenerator_Seed((QRandomGenerator*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#discard)
///
/// ``` QRandomGenerator* self, uint64_t z ```
void q_randomgenerator_discard(void* self, uint64_t z) {
    QRandomGenerator_Discard((QRandomGenerator*)self, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#min)
///
///
uint32_t q_randomgenerator_min() {
    return QRandomGenerator_Min();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#max)
///
///
uint32_t q_randomgenerator_max() {
    return QRandomGenerator_Max();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#system)
///
///
QRandomGenerator* q_randomgenerator_system() {
    return QRandomGenerator_System();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#global)
///
///
QRandomGenerator* q_randomgenerator_global() {
    return QRandomGenerator_Global();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#securelySeeded)
///
///
QRandomGenerator* q_randomgenerator_securely_seeded() {
    return QRandomGenerator_SecurelySeeded();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator* self, uint32_t s ```
void q_randomgenerator_seed1(void* self, uint32_t s) {
    QRandomGenerator_Seed1((QRandomGenerator*)self, s);
}

/// Delete this object from C++ memory.
///
/// ``` QRandomGenerator* self ```
void q_randomgenerator_delete(void* self) {
    QRandomGenerator_Delete((QRandomGenerator*)(self));
}

/// https://doc.qt.io/qt-6/qrandomgenerator64.html

/// q_randomgenerator64_new constructs a new QRandomGenerator64 object.
///
///
QRandomGenerator64* q_randomgenerator64_new() {
    return QRandomGenerator64_new();
}

/// q_randomgenerator64_new2 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t* seedBuffer, int64_t lenVal ```
QRandomGenerator64* q_randomgenerator64_new2(uint32_t* seedBuffer, int64_t lenVal) {
    return QRandomGenerator64_new2(seedBuffer, lenVal);
}

/// q_randomgenerator64_new3 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t* begin, uint32_t* end ```
QRandomGenerator64* q_randomgenerator64_new3(uint32_t* begin, uint32_t* end) {
    return QRandomGenerator64_new3(begin, end);
}

/// q_randomgenerator64_new4 constructs a new QRandomGenerator64 object.
///
/// ``` QRandomGenerator* other ```
QRandomGenerator64* q_randomgenerator64_new4(void* other) {
    return QRandomGenerator64_new4((QRandomGenerator*)other);
}

/// q_randomgenerator64_new5 constructs a new QRandomGenerator64 object.
///
/// ``` QRandomGenerator64* param1 ```
QRandomGenerator64* q_randomgenerator64_new5(void* param1) {
    return QRandomGenerator64_new5((QRandomGenerator64*)param1);
}

/// q_randomgenerator64_new6 constructs a new QRandomGenerator64 object.
///
/// ``` uint32_t seedValue ```
QRandomGenerator64* q_randomgenerator64_new6(uint32_t seedValue) {
    return QRandomGenerator64_new6(seedValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#generate)
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_generate(void* self) {
    return QRandomGenerator64_Generate((QRandomGenerator64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator())
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_operator_call(void* self) {
    return QRandomGenerator64_OperatorCall((QRandomGenerator64*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#discard)
///
/// ``` QRandomGenerator64* self, uint64_t z ```
void q_randomgenerator64_discard(void* self, uint64_t z) {
    QRandomGenerator64_Discard((QRandomGenerator64*)self, z);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#min)
///
///
uint64_t q_randomgenerator64_min() {
    return QRandomGenerator64_Min();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#max)
///
///
uint64_t q_randomgenerator64_max() {
    return QRandomGenerator64_Max();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#system)
///
///
QRandomGenerator64* q_randomgenerator64_system() {
    return QRandomGenerator64_System();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#global)
///
///
QRandomGenerator64* q_randomgenerator64_global() {
    return QRandomGenerator64_Global();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#securelySeeded)
///
///
QRandomGenerator64* q_randomgenerator64_securely_seeded() {
    return QRandomGenerator64_SecurelySeeded();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator64.html#operator=)
///
/// ``` QRandomGenerator64* self, QRandomGenerator64* param1 ```
void q_randomgenerator64_operator_assign(void* self, void* param1) {
    QRandomGenerator64_OperatorAssign((QRandomGenerator64*)self, (QRandomGenerator64*)param1);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate64)
///
/// ``` QRandomGenerator64* self ```
uint64_t q_randomgenerator64_generate64(void* self) {
    return QRandomGenerator_Generate64((QRandomGenerator*)self);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generateDouble)
///
/// ``` QRandomGenerator64* self ```
double q_randomgenerator64_generate_double(void* self) {
    return QRandomGenerator_GenerateDouble((QRandomGenerator*)self);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, double highest ```
double q_randomgenerator64_bounded(void* self, double highest) {
    return QRandomGenerator_Bounded((QRandomGenerator*)self, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t highest ```
uint32_t q_randomgenerator64_bounded_with_highest(void* self, uint32_t highest) {
    return QRandomGenerator_BoundedWithHighest((QRandomGenerator*)self, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t lowest, uint32_t highest ```
uint32_t q_randomgenerator64_bounded2(void* self, uint32_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded2((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int highest ```
int32_t q_randomgenerator64_bounded3(void* self, int highest) {
    return QRandomGenerator_Bounded3((QRandomGenerator*)self, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int lowest, int highest ```
int32_t q_randomgenerator64_bounded4(void* self, int lowest, int highest) {
    return QRandomGenerator_Bounded4((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t highest ```
uint64_t q_randomgenerator64_bounded5(void* self, uint64_t highest) {
    return QRandomGenerator_Bounded5((QRandomGenerator*)self, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t lowest, uint64_t highest ```
uint64_t q_randomgenerator64_bounded6(void* self, uint64_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded6((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long highest ```
long long q_randomgenerator64_bounded7(void* self, long long highest) {
    return QRandomGenerator_Bounded7((QRandomGenerator*)self, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long lowest, long long highest ```
long long q_randomgenerator64_bounded8(void* self, long long lowest, long long highest) {
    return QRandomGenerator_Bounded8((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, int lowest, long long highest ```
long long q_randomgenerator64_bounded9(void* self, int lowest, long long highest) {
    return QRandomGenerator_Bounded9((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, long long lowest, int highest ```
long long q_randomgenerator64_bounded10(void* self, long long lowest, int highest) {
    return QRandomGenerator_Bounded10((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint32_t lowest, uint64_t highest ```
uint64_t q_randomgenerator64_bounded11(void* self, uint32_t lowest, uint64_t highest) {
    return QRandomGenerator_Bounded11((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#bounded)
///
/// ``` QRandomGenerator64* self, uint64_t lowest, uint32_t highest ```
uint64_t q_randomgenerator64_bounded12(void* self, uint64_t lowest, uint32_t highest) {
    return QRandomGenerator_Bounded12((QRandomGenerator*)self, lowest, highest);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#generate)
///
/// ``` QRandomGenerator64* self, uint32_t* begin, uint32_t* end ```
void q_randomgenerator64_generate2(void* self, uint32_t* begin, uint32_t* end) {
    QRandomGenerator_Generate2((QRandomGenerator*)self, begin, end);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator64* self ```
void q_randomgenerator64_seed(void* self) {
    QRandomGenerator_Seed((QRandomGenerator*)self);
}

/// Inherited from QRandomGenerator
///
/// [Qt documentation](https://doc.qt.io/qt-6/qrandomgenerator.html#seed)
///
/// ``` QRandomGenerator64* self, uint32_t s ```
void q_randomgenerator64_seed1(void* self, uint32_t s) {
    QRandomGenerator_Seed1((QRandomGenerator*)self, s);
}

/// Delete this object from C++ memory.
///
/// ``` QRandomGenerator64* self ```
void q_randomgenerator64_delete(void* self) {
    QRandomGenerator64_Delete((QRandomGenerator64*)(self));
}