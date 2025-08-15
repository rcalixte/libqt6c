#pragma once
#ifndef SRCQT6C_LIBQGENERICPLUGINFACTORY_H
#define SRCQT6C_LIBQGENERICPLUGINFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html

/// q_genericpluginfactory_new constructs a new QGenericPluginFactory object.
///
/// @param other QGenericPluginFactory*
QGenericPluginFactory* q_genericpluginfactory_new(void* other);

/// q_genericpluginfactory_new2 constructs a new QGenericPluginFactory object and invalidates the source QGenericPluginFactory object.
///
/// @param other QGenericPluginFactory*
QGenericPluginFactory* q_genericpluginfactory_new2(void* other);

/// q_genericpluginfactory_copy_assign shallow copies `other` into `self`.
///
/// @param self QGenericPluginFactory*
/// @param other QGenericPluginFactory*
void q_genericpluginfactory_copy_assign(void* self, void* other);

/// q_genericpluginfactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QGenericPluginFactory*
/// @param other QGenericPluginFactory*
void q_genericpluginfactory_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
///
/// Caller is responsible for freeing the returned memory
///
const char** q_genericpluginfactory_keys();

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
///
/// @param param1 const char*
/// @param param2 const char*
QObject* q_genericpluginfactory_create(const char* param1, const char* param2);

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#dtor.QGenericPluginFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QGenericPluginFactory*
void q_genericpluginfactory_delete(void* self);

#endif
