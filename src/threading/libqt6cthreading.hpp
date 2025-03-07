#pragma once
#ifndef SRCC_LIBQT6CTHREADING_H
#define SRCC_LIBQT6CTHREADING_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

// Direct
void Threading_ExecNow(void* self, intptr_t cb);

// Auto
void Threading_Exec(void* self, intptr_t cb);
void Threading_ExecUnique(void* self, intptr_t cb);
void Threading_ExecOnce(void* self, intptr_t cb);

// Queued
void Threading_Async(void* self, intptr_t cb);
void Threading_AsyncUnique(void* self, intptr_t cb);
void Threading_AsyncOnce(void* self, intptr_t cb);
void Threading_AsyncUniqueOnce(void* self, intptr_t cb);

// Blocking
void Threading_Sync(void* self, intptr_t cb);
void Threading_SyncUnique(void* self, intptr_t cb);
void Threading_SyncOnce(void* self, intptr_t cb);
void Threading_SyncUniqueOnce(void* self, intptr_t cb);

#ifdef __cplusplus
}
#endif

#endif
