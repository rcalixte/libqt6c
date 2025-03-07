#pragma once
#ifndef SRCQT6C_LIBQTHREADSTORAGE_H
#define SRCQT6C_LIBQTHREADSTORAGE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QThreadStorageData* q_threadstoragedata_new(void* param1);
void* q_threadstoragedata_get(void* self);
void* q_threadstoragedata_set(void* self, void* p);
void q_threadstoragedata_finish(void* param1);
void q_threadstoragedata_delete(void* self);

#endif
