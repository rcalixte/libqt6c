#pragma once
#ifndef SRCQT6C_LIBQCONTIGUOUSCACHE_H
#define SRCQT6C_LIBQCONTIGUOUSCACHE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QContiguousCacheData* q_contiguouscachedata_allocate_data(int64_t size, int64_t alignment);
void q_contiguouscachedata_free_data(void* data);
void q_contiguouscachedata_delete(void* self);

#endif
