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

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html

/// q_genericpluginfactory_new constructs a new QGenericPluginFactory object.
///
/// ``` QGenericPluginFactory* other ```
QGenericPluginFactory* q_genericpluginfactory_new(void* other);

/// q_genericpluginfactory_new2 constructs a new QGenericPluginFactory object and invalidates the source QGenericPluginFactory object.
///
/// ``` QGenericPluginFactory* other ```
QGenericPluginFactory* q_genericpluginfactory_new2(void* other);

/// q_genericpluginfactory_copy_assign shallow copies `other` into `self`.
///
/// ``` QGenericPluginFactory* self, QGenericPluginFactory* other ```
void q_genericpluginfactory_copy_assign(void* self, void* other);

/// q_genericpluginfactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QGenericPluginFactory* self, QGenericPluginFactory* other ```
void q_genericpluginfactory_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
///
///
const char** q_genericpluginfactory_keys();

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
///
/// ``` const char* param1, const char* param2 ```
QObject* q_genericpluginfactory_create(const char* param1, const char* param2);

/// Delete this object from C++ memory.
///
/// ``` QGenericPluginFactory* self ```
void q_genericpluginfactory_delete(void* self);

#endif
