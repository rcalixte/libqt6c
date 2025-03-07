#pragma once
#ifndef SRCQT6C_LIBQGENERICPLUGINFACTORY_H
#define SRCQT6C_LIBQGENERICPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqobject.h"
#include <string.h>

QGenericPluginFactory* q_genericpluginfactory_new(void* other);
QGenericPluginFactory* q_genericpluginfactory_new2(void* other);
void q_genericpluginfactory_copy_assign(void* self, void* other);
void q_genericpluginfactory_move_assign(void* self, void* other);
const char** q_genericpluginfactory_keys();
QObject* q_genericpluginfactory_create(const char* param1, const char* param2);
void q_genericpluginfactory_delete(void* self);

#endif
