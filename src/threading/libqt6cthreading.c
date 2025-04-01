#include <stdint.h>
#include "libqt6cthreading.hpp"
#include "libqt6cthreading.h"

void q_threading_exec_now(void* self, void (*func)(void*, void*)) {
    Threading_ExecNow(self, (intptr_t)func);
}

void q_threading_exec(void* self, void (*func)(void*, void*)) {
    Threading_Exec(self, (intptr_t)func);
}

void q_threading_exec_unique(void* self, void (*func)(void*, void*)) {
    Threading_ExecUnique(self, (intptr_t)func);
}

void q_threading_exec_once(void* self, void (*func)(void*, void*)) {
    Threading_ExecOnce(self, (intptr_t)func);
}

void q_threading_async(void* self, void (*func)(void*, void*)) {
    Threading_Async(self, (intptr_t)func);
}

void q_threading_async_unique(void* self, void (*func)(void*, void*)) {
    Threading_AsyncUnique(self, (intptr_t)func);
}

void q_threading_async_once(void* self, void (*func)(void*, void*)) {
    Threading_AsyncOnce(self, (intptr_t)func);
}

void q_threading_async_unique_once(void* self, void (*func)(void*, void*)) {
    Threading_AsyncUniqueOnce(self, (intptr_t)func);
}

void q_threading_sync(void* self, void (*func)(void*, void*)) {
    Threading_Sync(self, (intptr_t)func);
}

void q_threading_sync_unique(void* self, void (*func)(void*, void*)) {
    Threading_SyncUnique(self, (intptr_t)func);
}

void q_threading_sync_once(void* self, void (*func)(void*, void*)) {
    Threading_SyncOnce(self, (intptr_t)func);
}

void q_threading_sync_unique_once(void* self, void (*func)(void*, void*)) {
    Threading_SyncUniqueOnce(self, (intptr_t)func);
}
