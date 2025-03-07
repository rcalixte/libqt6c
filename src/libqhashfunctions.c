#include "libqhashfunctions.hpp"
#include "libqhashfunctions.h"

/// https://doc.qt.io/qt-6/qhashseed.html

/// q_hashseed_new constructs a new QHashSeed object.
///
/// ``` QHashSeed* other ```
QHashSeed* q_hashseed_new(void* other) {
    return QHashSeed_new((QHashSeed*)other);
}

/// q_hashseed_new2 constructs a new QHashSeed object and invalidates the source QHashSeed object.
///
/// ``` QHashSeed* other ```
QHashSeed* q_hashseed_new2(void* other) {
    return QHashSeed_new2((QHashSeed*)other);
}

/// q_hashseed_new3 constructs a new QHashSeed object.
///
///
QHashSeed* q_hashseed_new3() {
    return QHashSeed_new3();
}

/// q_hashseed_new4 constructs a new QHashSeed object.
///
/// ``` uint64_t d ```
QHashSeed* q_hashseed_new4(uint64_t d) {
    return QHashSeed_new4(d);
}

/// q_hashseed_copy_assign shallow copies `other` into `self`.
///
/// ``` QHashSeed* self, QHashSeed* other ```
void q_hashseed_copy_assign(void* self, void* other) {
    QHashSeed_CopyAssign((QHashSeed*)self, (QHashSeed*)other);
}

/// q_hashseed_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QHashSeed* self, QHashSeed* other ```
void q_hashseed_move_assign(void* self, void* other) {
    QHashSeed_MoveAssign((QHashSeed*)self, (QHashSeed*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#operator unsigned long)
///
/// ``` QHashSeed* self ```
uint64_t q_hashseed_to_unsigned_long(void* self) {
    return QHashSeed_ToUnsignedLong((QHashSeed*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#globalSeed)
///
///
QHashSeed* q_hashseed_global_seed() {
    return QHashSeed_GlobalSeed();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#setDeterministicGlobalSeed)
///
///
void q_hashseed_set_deterministic_global_seed() {
    QHashSeed_SetDeterministicGlobalSeed();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qhashseed.html#resetRandomGlobalSeed)
///
///
void q_hashseed_reset_random_global_seed() {
    QHashSeed_ResetRandomGlobalSeed();
}

/// Delete this object from C++ memory.
///
/// ``` QHashSeed* self ```
void q_hashseed_delete(void* self) {
    QHashSeed_Delete((QHashSeed*)(self));
}