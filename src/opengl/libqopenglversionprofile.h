#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLVERSIONPROFILE_H
#define SRC_OPENGL_QT6C_LIBQOPENGLVERSIONPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new constructs a new QOpenGLVersionProfile object.
///
QOpenGLVersionProfile* q_openglversionprofile_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new2 constructs a new QOpenGLVersionProfile object.
///
/// @param format QSurfaceFormat*
///
QOpenGLVersionProfile* q_openglversionprofile_new2(void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new3 constructs a new QOpenGLVersionProfile object.
///
/// @param other QOpenGLVersionProfile*
///
QOpenGLVersionProfile* q_openglversionprofile_new3(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
///
/// @param self QOpenGLVersionProfile*
/// @param rhs QOpenGLVersionProfile*
///
void q_openglversionprofile_operator_assign(void* self, void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
///
/// @param self QOpenGLVersionProfile*
///
libqt_pair /* tuple of int and int */ q_openglversionprofile_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setVersion)
///
/// @param self QOpenGLVersionProfile*
/// @param majorVersion int
/// @param minorVersion int
///
void q_openglversionprofile_set_version(void* self, int majorVersion, int minorVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#profile)
///
/// @param self QOpenGLVersionProfile*
///
/// @return enum QSurfaceFormat__OpenGLContextProfile
///
int32_t q_openglversionprofile_profile(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
///
/// @param self QOpenGLVersionProfile*
/// @param profile enum QSurfaceFormat__OpenGLContextProfile
///
void q_openglversionprofile_set_profile(void* self, int32_t profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
///
/// @param self QOpenGLVersionProfile*
///
bool q_openglversionprofile_has_profiles(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
///
/// @param self QOpenGLVersionProfile*
///
bool q_openglversionprofile_is_legacy_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
///
/// @param self QOpenGLVersionProfile*
///
bool q_openglversionprofile_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionProfile*
///
void q_openglversionprofile_delete(void* self);

#endif
