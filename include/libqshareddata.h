#pragma once
#ifndef SRCQT6C_LIBQSHAREDDATA_H
#define SRCQT6C_LIBQSHAREDDATA_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QSharedData* q_shareddata_new();
QSharedData* q_shareddata_new2(void* param1);
void q_shareddata_delete(void* self);

QAdoptSharedDataTag* q_adoptshareddatatag_new(void* other);
QAdoptSharedDataTag* q_adoptshareddatatag_new2(void* other);
QAdoptSharedDataTag* q_adoptshareddatatag_new3();
void q_adoptshareddatatag_copy_assign(void* self, void* other);
void q_adoptshareddatatag_move_assign(void* self, void* other);
void q_adoptshareddatatag_delete(void* self);

#endif
