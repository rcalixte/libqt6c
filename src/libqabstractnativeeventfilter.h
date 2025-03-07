#pragma once
#ifndef SRCQT6C_LIBQABSTRACTNATIVEEVENTFILTER_H
#define SRCQT6C_LIBQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QAbstractNativeEventFilter* q_abstractnativeeventfilter_new();
bool q_abstractnativeeventfilter_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractnativeeventfilter_on_native_event_filter(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));
bool q_abstractnativeeventfilter_qbase_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);
void q_abstractnativeeventfilter_delete(void* self);

#endif
