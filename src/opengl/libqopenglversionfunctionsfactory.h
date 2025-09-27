#pragma once
#ifndef SRC_OPENGLQT6C_LIBQOPENGLVERSIONFUNCTIONSFACTORY_H
#define SRC_OPENGLQT6C_LIBQOPENGLVERSIONFUNCTIONSFACTORY_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html

/// q_openglversionfunctionsfactory_new constructs a new QOpenGLVersionFunctionsFactory object.
///
/// @param other QOpenGLVersionFunctionsFactory*
QOpenGLVersionFunctionsFactory* q_openglversionfunctionsfactory_new(void* other);

/// q_openglversionfunctionsfactory_new2 constructs a new QOpenGLVersionFunctionsFactory object and invalidates the source QOpenGLVersionFunctionsFactory object.
///
/// @param other QOpenGLVersionFunctionsFactory*
QOpenGLVersionFunctionsFactory* q_openglversionfunctionsfactory_new2(void* other);

/// q_openglversionfunctionsfactory_copy_assign shallow copies `other` into `self`.
///
/// @param self QOpenGLVersionFunctionsFactory*
/// @param other QOpenGLVersionFunctionsFactory*
void q_openglversionfunctionsfactory_copy_assign(void* self, void* other);

/// q_openglversionfunctionsfactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// @param self QOpenGLVersionFunctionsFactory*
/// @param other QOpenGLVersionFunctionsFactory*
void q_openglversionfunctionsfactory_move_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
///
QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get();

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
///
/// @param versionProfile QOpenGLVersionProfile*
QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get1(void* versionProfile);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#get)
///
/// @param versionProfile QOpenGLVersionProfile*
/// @param context QOpenGLContext*
QAbstractOpenGLFunctions* q_openglversionfunctionsfactory_get2(void* versionProfile, void* context);

/// [Qt documentation](https://doc.qt.io/qt-6/qopenglversionfunctionsfactory.html#dtor.QOpenGLVersionFunctionsFactory)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionFunctionsFactory*
void q_openglversionfunctionsfactory_delete(void* self);

#endif
