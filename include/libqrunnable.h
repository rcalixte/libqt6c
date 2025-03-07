#pragma once
#ifndef SRCQT6C_LIBQRUNNABLE_H
#define SRCQT6C_LIBQRUNNABLE_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QRunnable* q_runnable_new();
void q_runnable_run(void* self);
void q_runnable_on_run(void* self, void (*slot)());
void q_runnable_qbase_run(void* self);
bool q_runnable_auto_delete(void* self);
void q_runnable_set_auto_delete(void* self, bool autoDelete);
void q_runnable_delete(void* self);

#endif
