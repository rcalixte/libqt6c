#pragma once
#ifndef SRCQT6C_LIBQFLAGS_H
#define SRCQT6C_LIBQFLAGS_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qflag.html

/// q_flag_new constructs a new QFlag object.
///
/// @param other QFlag*
QFlag* q_flag_new(void* other);

/// q_flag_new2 constructs a new QFlag object and invalidates the source QFlag object.
///
/// @param other QFlag*
QFlag* q_flag_new2(void* other);

/// q_flag_new3 constructs a new QFlag object.
///
/// @param value int
QFlag* q_flag_new3(int value);

/// q_flag_new4 constructs a new QFlag object.
///
/// @param value uint32_t
QFlag* q_flag_new4(uint32_t value);

/// q_flag_new5 constructs a new QFlag object.
///
/// @param value short
QFlag* q_flag_new5(short value);

/// q_flag_new6 constructs a new QFlag object.
///
/// @param value unsigned short
QFlag* q_flag_new6(unsigned short value);

/// q_flag_new7 constructs a new QFlag object.
///
/// @param param1 QFlag*
QFlag* q_flag_new7(void* param1);

/// q_flag_copy_assign shallow copies `other` into `self`.
///
/// @param self QFlag*
/// @param other QFlag*
void q_flag_copy_assign(void* self, void* other);

/// q_flag_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QFlag*
/// @param other QFlag*
void q_flag_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#operator)
///
/// @param self QFlag*
int32_t q_flag_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#operator)
///
/// @param self QFlag*
uint32_t q_flag_to_unsigned_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qflag.html#dtor.QFlag)
///
/// Delete this object from C++ memory.
///
/// @param self QFlag*
void q_flag_delete(void* self);

/// https://doc.qt.io/qt-6/qincompatibleflag.html

/// q_incompatibleflag_new constructs a new QIncompatibleFlag object.
///
/// @param other QIncompatibleFlag*
QIncompatibleFlag* q_incompatibleflag_new(void* other);

/// q_incompatibleflag_new2 constructs a new QIncompatibleFlag object and invalidates the source QIncompatibleFlag object.
///
/// @param other QIncompatibleFlag*
QIncompatibleFlag* q_incompatibleflag_new2(void* other);

/// q_incompatibleflag_new3 constructs a new QIncompatibleFlag object.
///
/// @param i int
QIncompatibleFlag* q_incompatibleflag_new3(int i);

/// q_incompatibleflag_new4 constructs a new QIncompatibleFlag object.
///
/// @param param1 QIncompatibleFlag*
QIncompatibleFlag* q_incompatibleflag_new4(void* param1);

/// q_incompatibleflag_copy_assign shallow copies `other` into `self`.
///
/// @param self QIncompatibleFlag*
/// @param other QIncompatibleFlag*
void q_incompatibleflag_copy_assign(void* self, void* other);

/// q_incompatibleflag_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QIncompatibleFlag*
/// @param other QIncompatibleFlag*
void q_incompatibleflag_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qincompatibleflag.html#operator)
///
/// @param self QIncompatibleFlag*
int32_t q_incompatibleflag_to_int(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qincompatibleflag.html#dtor.QIncompatibleFlag)
///
/// Delete this object from C++ memory.
///
/// @param self QIncompatibleFlag*
void q_incompatibleflag_delete(void* self);

#endif
