#include <stdint.h>
#include "libqt6cthreading.hpp"
#include "libqt6cthreading.h"

void q_threading_exec_now(void* context, void (*callback)(void*)) {
    Threading_ExecNow(context, (intptr_t)callback);
}

void q_threading_exec(void* context, void (*callback)(void*)) {
    Threading_Exec(context, (intptr_t)callback);
}

void q_threading_exec_unique(void* context, void (*callback)(void*)) {
    Threading_ExecUnique(context, (intptr_t)callback);
}

void q_threading_exec_once(void* context, void (*callback)(void*)) {
    Threading_ExecOnce(context, (intptr_t)callback);
}

void q_threading_async(void* context, void (*callback)(void*)) {
    Threading_Async(context, (intptr_t)callback);
}

void q_threading_async_unique(void* context, void (*callback)(void*)) {
    Threading_AsyncUnique(context, (intptr_t)callback);
}

void q_threading_async_once(void* context, void (*callback)(void*)) {
    Threading_AsyncOnce(context, (intptr_t)callback);
}

void q_threading_async_unique_once(void* context, void (*callback)(void*)) {
    Threading_AsyncUniqueOnce(context, (intptr_t)callback);
}

void q_threading_sync(void* context, void (*callback)(void*)) {
    Threading_Sync(context, (intptr_t)callback);
}

void q_threading_sync_unique(void* context, void (*callback)(void*)) {
    Threading_SyncUnique(context, (intptr_t)callback);
}

void q_threading_sync_once(void* context, void (*callback)(void*)) {
    Threading_SyncOnce(context, (intptr_t)callback);
}

void q_threading_sync_unique_once(void* context, void (*callback)(void*)) {
    Threading_SyncUniqueOnce(context, (intptr_t)callback);
}
