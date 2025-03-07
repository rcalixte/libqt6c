#pragma once
#ifndef SRCQT6C_LIBQSIZEPOLICY_H
#define SRCQT6C_LIBQSIZEPOLICY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqvariant.h"

QSizePolicy* q_sizepolicy_new(void* other);
QSizePolicy* q_sizepolicy_new2(void* other);
QSizePolicy* q_sizepolicy_new3();
QSizePolicy* q_sizepolicy_new4(int64_t horizontal, int64_t vertical);
QSizePolicy* q_sizepolicy_new5(void* param1);
QSizePolicy* q_sizepolicy_new6(int64_t horizontal, int64_t vertical, int64_t typeVal);
void q_sizepolicy_copy_assign(void* self, void* other);
void q_sizepolicy_move_assign(void* self, void* other);
int64_t q_sizepolicy_horizontal_policy(void* self);
int64_t q_sizepolicy_vertical_policy(void* self);
int64_t q_sizepolicy_control_type(void* self);
void q_sizepolicy_set_horizontal_policy(void* self, int64_t d);
void q_sizepolicy_set_vertical_policy(void* self, int64_t d);
void q_sizepolicy_set_control_type(void* self, int64_t typeVal);
int64_t q_sizepolicy_expanding_directions(void* self);
void q_sizepolicy_set_height_for_width(void* self, bool b);
bool q_sizepolicy_has_height_for_width(void* self);
void q_sizepolicy_set_width_for_height(void* self, bool b);
bool q_sizepolicy_has_width_for_height(void* self);
bool q_sizepolicy_operator_equal(void* self, void* s);
bool q_sizepolicy_operator_not_equal(void* self, void* s);
QVariant* q_sizepolicy_to_q_variant(void* self);
int32_t q_sizepolicy_horizontal_stretch(void* self);
int32_t q_sizepolicy_vertical_stretch(void* self);
void q_sizepolicy_set_horizontal_stretch(void* self, int stretchFactor);
void q_sizepolicy_set_vertical_stretch(void* self, int stretchFactor);
bool q_sizepolicy_retain_size_when_hidden(void* self);
void q_sizepolicy_set_retain_size_when_hidden(void* self, bool retainSize);
void q_sizepolicy_transpose(void* self);
QSizePolicy* q_sizepolicy_transposed(void* self);
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
