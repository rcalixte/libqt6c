#pragma once
#ifndef SRCQT6C_LIBQSIZEPOLICY_H
#define SRCQT6C_LIBQSIZEPOLICY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qsizepolicy.html

/// q_sizepolicy_new constructs a new QSizePolicy object.
///
/// @param other QSizePolicy*
QSizePolicy* q_sizepolicy_new(void* other);

/// q_sizepolicy_new2 constructs a new QSizePolicy object and invalidates the source QSizePolicy object.
///
/// @param other QSizePolicy*
QSizePolicy* q_sizepolicy_new2(void* other);

/// q_sizepolicy_new3 constructs a new QSizePolicy object.
///
QSizePolicy* q_sizepolicy_new3();

/// q_sizepolicy_new4 constructs a new QSizePolicy object.
///
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
QSizePolicy* q_sizepolicy_new4(int32_t horizontal, int32_t vertical);

/// q_sizepolicy_new5 constructs a new QSizePolicy object.
///
/// @param param1 QSizePolicy*
QSizePolicy* q_sizepolicy_new5(void* param1);

/// q_sizepolicy_new6 constructs a new QSizePolicy object.
///
/// @param horizontal enum QSizePolicy__Policy
/// @param vertical enum QSizePolicy__Policy
/// @param typeVal enum QSizePolicy__ControlType
QSizePolicy* q_sizepolicy_new6(int32_t horizontal, int32_t vertical, int32_t typeVal);

/// q_sizepolicy_copy_assign shallow copies `other` into `self`.
///
/// @param self QSizePolicy*
/// @param other QSizePolicy*
void q_sizepolicy_copy_assign(void* self, void* other);

/// q_sizepolicy_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QSizePolicy*
/// @param other QSizePolicy*
void q_sizepolicy_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalPolicy)
///
/// @param self QSizePolicy*
///
/// @return enum QSizePolicy__Policy
int32_t q_sizepolicy_horizontal_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#verticalPolicy)
///
/// @param self QSizePolicy*
///
/// @return enum QSizePolicy__Policy
int32_t q_sizepolicy_vertical_policy(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#controlType)
///
/// @param self QSizePolicy*
///
/// @return enum QSizePolicy__ControlType
int32_t q_sizepolicy_control_type(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalPolicy)
///
/// @param self QSizePolicy*
/// @param d enum QSizePolicy__Policy
void q_sizepolicy_set_horizontal_policy(void* self, int32_t d);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalPolicy)
///
/// @param self QSizePolicy*
/// @param d enum QSizePolicy__Policy
void q_sizepolicy_set_vertical_policy(void* self, int32_t d);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setControlType)
///
/// @param self QSizePolicy*
/// @param typeVal enum QSizePolicy__ControlType
void q_sizepolicy_set_control_type(void* self, int32_t typeVal);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#expandingDirections)
///
/// @param self QSizePolicy*
///
/// @return flag of enum Qt__Orientation
int32_t q_sizepolicy_expanding_directions(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHeightForWidth)
///
/// @param self QSizePolicy*
/// @param b bool
void q_sizepolicy_set_height_for_width(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#hasHeightForWidth)
///
/// @param self QSizePolicy*
bool q_sizepolicy_has_height_for_width(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setWidthForHeight)
///
/// @param self QSizePolicy*
/// @param b bool
void q_sizepolicy_set_width_for_height(void* self, bool b);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#hasWidthForHeight)
///
/// @param self QSizePolicy*
bool q_sizepolicy_has_width_for_height(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator-eq-eq)
///
/// @param self QSizePolicy*
/// @param s QSizePolicy*
bool q_sizepolicy_operator_equal(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator-not-eq)
///
/// @param self QSizePolicy*
/// @param s QSizePolicy*
bool q_sizepolicy_operator_not_equal(void* self, void* s);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#operator)
///
/// @param self QSizePolicy*
QVariant* q_sizepolicy_to_q_variant(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#horizontalStretch)
///
/// @param self QSizePolicy*
int32_t q_sizepolicy_horizontal_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#verticalStretch)
///
/// @param self QSizePolicy*
int32_t q_sizepolicy_vertical_stretch(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setHorizontalStretch)
///
/// @param self QSizePolicy*
/// @param stretchFactor int
void q_sizepolicy_set_horizontal_stretch(void* self, int stretchFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setVerticalStretch)
///
/// @param self QSizePolicy*
/// @param stretchFactor int
void q_sizepolicy_set_vertical_stretch(void* self, int stretchFactor);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#retainSizeWhenHidden)
///
/// @param self QSizePolicy*
bool q_sizepolicy_retain_size_when_hidden(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#setRetainSizeWhenHidden)
///
/// @param self QSizePolicy*
/// @param retainSize bool
void q_sizepolicy_set_retain_size_when_hidden(void* self, bool retainSize);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#transpose)
///
/// @param self QSizePolicy*
void q_sizepolicy_transpose(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#transposed)
///
/// @param self QSizePolicy*
QSizePolicy* q_sizepolicy_transposed(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qsizepolicy.html#dtor.QSizePolicy)
///
/// Delete this object from C++ memory.
///
/// @param self QSizePolicy*
void q_sizepolicy_delete(void* self);

/// https://doc.qt.io/qt-6/qsizepolicy.html#types

typedef enum {
    QSIZEPOLICY_POLICYFLAG_GROWFLAG = 1,
    QSIZEPOLICY_POLICYFLAG_EXPANDFLAG = 2,
    QSIZEPOLICY_POLICYFLAG_SHRINKFLAG = 4,
    QSIZEPOLICY_POLICYFLAG_IGNOREFLAG = 8
} QSizePolicy__PolicyFlag;

typedef enum {
    QSIZEPOLICY_POLICY_FIXED = 0,
    QSIZEPOLICY_POLICY_MINIMUM = 1,
    QSIZEPOLICY_POLICY_MAXIMUM = 4,
    QSIZEPOLICY_POLICY_PREFERRED = 5,
    QSIZEPOLICY_POLICY_MINIMUMEXPANDING = 3,
    QSIZEPOLICY_POLICY_EXPANDING = 7,
    QSIZEPOLICY_POLICY_IGNORED = 13
} QSizePolicy__Policy;

typedef enum {
    QSIZEPOLICY_CONTROLTYPE_DEFAULTTYPE = 1,
    QSIZEPOLICY_CONTROLTYPE_BUTTONBOX = 2,
    QSIZEPOLICY_CONTROLTYPE_CHECKBOX = 4,
    QSIZEPOLICY_CONTROLTYPE_COMBOBOX = 8,
    QSIZEPOLICY_CONTROLTYPE_FRAME = 16,
    QSIZEPOLICY_CONTROLTYPE_GROUPBOX = 32,
    QSIZEPOLICY_CONTROLTYPE_LABEL = 64,
    QSIZEPOLICY_CONTROLTYPE_LINE = 128,
    QSIZEPOLICY_CONTROLTYPE_LINEEDIT = 256,
    QSIZEPOLICY_CONTROLTYPE_PUSHBUTTON = 512,
    QSIZEPOLICY_CONTROLTYPE_RADIOBUTTON = 1024,
    QSIZEPOLICY_CONTROLTYPE_SLIDER = 2048,
    QSIZEPOLICY_CONTROLTYPE_SPINBOX = 4096,
    QSIZEPOLICY_CONTROLTYPE_TABWIDGET = 8192,
    QSIZEPOLICY_CONTROLTYPE_TOOLBUTTON = 16384
} QSizePolicy__ControlType;

#endif
