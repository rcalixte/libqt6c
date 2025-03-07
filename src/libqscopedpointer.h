#pragma once
#ifndef SRCQT6C_LIBQSCOPEDPOINTER_H
#define SRCQT6C_LIBQSCOPEDPOINTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new(void* other);
QScopedPointerPodDeleter* q_scopedpointerpoddeleter_new2(void* other);
void q_scopedpointerpoddeleter_copy_assign(void* self, void* other);
void q_scopedpointerpoddeleter_move_assign(void* self, void* other);
void q_scopedpointerpoddeleter_cleanup(void* pointer);
void q_scopedpointerpoddeleter_operator_call(void* self, void* pointer);
void q_scopedpointerpoddeleter_delete(void* self);

#endif
