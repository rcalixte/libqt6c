#pragma once
#ifndef OPENGL_LIBQOPENGLVERSIONPROFILE_H
#define OPENGL_LIBQOPENGLVERSIONPROFILE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

struct pair_int_int;

typedef struct pair_int_int pair_int_int;

#ifndef PAIR_INT_INT
#define PAIR_INT_INT
struct pair_int_int {
    int first;
    int second;
};
#endif

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new constructs a new QOpenGLVersionProfile object.
///
QOpenGLVersionProfile* q_openglversionprofile_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new2 constructs a new QOpenGLVersionProfile object.
///
/// @param format QSurfaceFormat*
///
QOpenGLVersionProfile* q_openglversionprofile_new2(const void* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html)

/// q_openglversionprofile_new3 constructs a new QOpenGLVersionProfile object.
///
/// @param other QOpenGLVersionProfile*
///
QOpenGLVersionProfile* q_openglversionprofile_new3(const void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#operator-eq)
///
/// @param self QOpenGLVersionProfile*
/// @param rhs QOpenGLVersionProfile*
///
void q_openglversionprofile_operator_assign(void* self, const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#version)
///
/// @param self const QOpenGLVersionProfile*
///
/// @return pair_int_int tuple of int and int
///
pair_int_int q_openglversionprofile_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setVersion)
///
/// @param self QOpenGLVersionProfile*
/// @param majorVersion int
/// @param minorVersion int
///
void q_openglversionprofile_set_version(void* self, int majorVersion, int minorVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#profile)
///
/// @param self const QOpenGLVersionProfile*
///
/// @return enum QSurfaceFormat__OpenGLContextProfile
///
int32_t q_openglversionprofile_profile(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#setProfile)
///
/// @param self QOpenGLVersionProfile*
/// @param profile enum QSurfaceFormat__OpenGLContextProfile
///
void q_openglversionprofile_set_profile(void* self, int32_t profile);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#hasProfiles)
///
/// @param self const QOpenGLVersionProfile*
///
bool q_openglversionprofile_has_profiles(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isLegacyVersion)
///
/// @param self const QOpenGLVersionProfile*
///
bool q_openglversionprofile_is_legacy_version(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#isValid)
///
/// @param self const QOpenGLVersionProfile*
///
bool q_openglversionprofile_is_valid(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile.html#dtor.QOpenGLVersionProfile)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionProfile*
///
void q_openglversionprofile_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionprofile-h.html#qHash)
///
/// @param v QOpenGLVersionProfile*
/// @param seed size_t
///
size_t q_qopenglversionprofile_h_q_hash(const void* v, size_t seed);
#endif
