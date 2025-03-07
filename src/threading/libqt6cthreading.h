#pragma once
#ifndef SRCQT6C_LIBQT6CTHREADING_H
#define SRCQT6C_LIBQT6CTHREADING_H

#include <stdlib.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

void q_threading_exec_now(void* self, void (*func)(void*, void*));
void q_threading_exec(void* self, void (*func)(void*, void*));
void q_threading_exec_unique(void* self, void (*func)(void*, void*));
void q_threading_exec_once(void* self, void (*func)(void*, void*));
void q_threading_async(void* self, void (*func)(void*, void*));
void q_threading_async_unique(void* self, void (*func)(void*, void*));
void q_threading_async_once(void* self, void (*func)(void*, void*));
void q_threading_async_unique_once(void* self, void (*func)(void*, void*));
void q_threading_sync(void* self, void (*func)(void*, void*));
void q_threading_sync_unique(void* self, void (*func)(void*, void*));
void q_threading_sync_once(void* self, void (*func)(void*, void*));
void q_threading_sync_unique_once(void* self, void (*func)(void*, void*));

#ifdef __cplusplus
}
#endif

#endif
