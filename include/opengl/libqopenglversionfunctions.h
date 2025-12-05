#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLVERSIONFUNCTIONS_H
#define SRC_OPENGL_QT6C_LIBQOPENGLVERSIONFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)

/// q_openglversionstatus_new constructs a new QOpenGLVersionStatus object.
///
/// @param other QOpenGLVersionStatus*
///
QOpenGLVersionStatus* q_openglversionstatus_new(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)

/// q_openglversionstatus_new2 constructs a new QOpenGLVersionStatus object and invalidates the source QOpenGLVersionStatus object.
///
/// @param other QOpenGLVersionStatus*
///
QOpenGLVersionStatus* q_openglversionstatus_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)

/// q_openglversionstatus_new3 constructs a new QOpenGLVersionStatus object.
///
QOpenGLVersionStatus* q_openglversionstatus_new3();

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)

/// q_openglversionstatus_new4 constructs a new QOpenGLVersionStatus object.
///
/// @param majorVersion int
/// @param minorVersion int
/// @param functionStatus enum QOpenGLVersionStatus__OpenGLStatus
///
QOpenGLVersionStatus* q_openglversionstatus_new4(int majorVersion, int minorVersion, int32_t functionStatus);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html)

/// q_openglversionstatus_new5 constructs a new QOpenGLVersionStatus object.
///
/// @param param1 QOpenGLVersionStatus*
///
QOpenGLVersionStatus* q_openglversionstatus_new5(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
///
/// @param self QOpenGLVersionStatus*
///
libqt_pair /* tuple of int and int */ q_openglversionstatus_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
///
/// @param self QOpenGLVersionStatus*
/// @param version libqt_pair /* tuple of int and int */
///
void q_openglversionstatus_set_version(void* self, libqt_pair /* tuple of int and int */ version);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
///
/// @param self QOpenGLVersionStatus*
///
/// @return enum QOpenGLVersionStatus__OpenGLStatus
///
int32_t q_openglversionstatus_status(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#status-var)
///
/// @param self QOpenGLVersionStatus*
/// @param status enum QOpenGLVersionStatus__OpenGLStatus
///
void q_openglversionstatus_set_status(void* self, int32_t status);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#operator-eq)
///
/// @param self QOpenGLVersionStatus*
/// @param param1 QOpenGLVersionStatus*
///
void q_openglversionstatus_operator_assign(void* self, void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#dtor.QOpenGLVersionStatus)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionStatus*
///
void q_openglversionstatus_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLVersionFunctionsBackend*
///
QOpenGLContext* q_openglversionfunctionsbackend_context(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLVersionFunctionsBackend*
/// @param context QOpenGLContext*
///
void q_openglversionfunctionsbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#dtor.QOpenGLVersionFunctionsBackend)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionFunctionsBackend*
///
void q_openglversionfunctionsbackend_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#initializeOpenGLFunctions)
///
/// @param self QAbstractOpenGLFunctions*
///
bool q_abstractopenglfunctions_initialize_open_g_l_functions(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractopenglfunctions.html#dtor.QAbstractOpenGLFunctions)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractOpenGLFunctions*
///
void q_abstractopenglfunctions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_0_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_0_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_0_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_0_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_1_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_1_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_1_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_1_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_2_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_2_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_2_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_2_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_3_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_3_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_3_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_3_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_4_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_4_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_4_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_4_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend*
///
QOpenGLContext* q_openglfunctions_1_5_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_5_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend*
///
QOpenGLContext* q_openglfunctions_2_0_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_2_0_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-1-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_1_CoreBackend*
///
QOpenGLContext* q_openglfunctions_2_1_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_1_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_2_1_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend*
///
QOpenGLContext* q_openglfunctions_3_0_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_0_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-1-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_1_CoreBackend*
///
QOpenGLContext* q_openglfunctions_3_1_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_1_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_1_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-2-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_2_CoreBackend*
///
QOpenGLContext* q_openglfunctions_3_2_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_2_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_2_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_3_CoreBackend*
///
QOpenGLContext* q_openglfunctions_3_3_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_3_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_3_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_0_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_0_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_0_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_0_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_1_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_1_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_1_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_1_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-2-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_2_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_2_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_2_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_2_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-3-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_3_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_3_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_3_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_3_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-4-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_4_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_4_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_4_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_4_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_5_CoreBackend*
///
QOpenGLContext* q_openglfunctions_4_5_corebackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_5_CoreBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_5_corebackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_1_0_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_0_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_1_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_1_1_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_1_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_1_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-2-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_2_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_1_2_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_2_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_2_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-3-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_3_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_1_3_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_3_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_3_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-4-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_4_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_1_4_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_1_4_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_1_4_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_0_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_2_0_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_2_0_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_2_0_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_0_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_3_0_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_0_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_0_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_3_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_3_3_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_3_3_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_3_3_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-deprecatedbackend.html)

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_5_DeprecatedBackend*
///
QOpenGLContext* q_openglfunctions_4_5_deprecatedbackend_context(void* self);

/// Inherited from QOpenGLVersionFunctionsBackend
///
/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsbackend.html#context-var)
///
/// @param self QOpenGLFunctions_4_5_DeprecatedBackend*
/// @param context QOpenGLContext*
///
void q_openglfunctions_4_5_deprecatedbackend_set_context(void* self, void* context);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctions.html#public-types)

typedef enum {
    QOPENGLVERSIONSTATUS_OPENGLSTATUS_CORESTATUS = 0,
    QOPENGLVERSIONSTATUS_OPENGLSTATUS_DEPRECATEDSTATUS = 1,
    QOPENGLVERSIONSTATUS_OPENGLSTATUS_INVALIDSTATUS = 2
} QOpenGLVersionStatus__OpenGLStatus;

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctions.html#public-types)

typedef enum {
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_0_CORE = 0,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_1_CORE = 1,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_2_CORE = 2,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_3_CORE = 3,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_4_CORE = 4,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_5_CORE = 5,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_2_0_CORE = 6,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_2_1_CORE = 7,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_0_CORE = 8,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_1_CORE = 9,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_2_CORE = 10,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_3_CORE = 11,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_0_CORE = 12,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_1_CORE = 13,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_2_CORE = 14,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_3_CORE = 15,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_4_CORE = 16,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_5_CORE = 17,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_0_DEPRECATED = 18,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_1_DEPRECATED = 19,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_2_DEPRECATED = 20,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_3_DEPRECATED = 21,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_1_4_DEPRECATED = 22,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_2_0_DEPRECATED = 23,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_0_DEPRECATED = 24,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_3_3_DEPRECATED = 25,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGL_4_5_DEPRECATED = 26,
    QOPENGLVERSIONFUNCTIONSBACKEND_VERSION_OPENGLVERSIONBACKENDCOUNT = 27
} QOpenGLVersionFunctionsBackend__Version;

#endif
