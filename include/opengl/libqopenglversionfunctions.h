#pragma once
#ifndef SRC_OPENGL_QT6C_LIBQOPENGLVERSIONFUNCTIONS_H
#define SRC_OPENGL_QT6C_LIBQOPENGLVERSIONFUNCTIONS_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

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
/// @return pair_int_int tuple of int and int
///
pair_int_int q_openglversionstatus_version(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionstatus.html#version-var)
///
/// @param self QOpenGLVersionStatus*
/// @param version pair_int_int tuple of int and int
///
void q_openglversionstatus_set_version(void* self, pair_int_int version);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
///
/// @param self QOpenGLVersionFunctionsStorage*
///
QOpenGLVersionFunctionsBackend** q_openglversionfunctionsstorage_backends(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#backends-var)
///
/// @param self QOpenGLVersionFunctionsStorage*
/// @param backends QOpenGLVersionFunctionsBackend**
///
void q_openglversionfunctionsstorage_set_backends(void* self, void** backends);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglversionfunctionsstorage.html#dtor.QOpenGLVersionFunctionsStorage)
///
/// Delete this object from C++ memory.
///
/// @param self QOpenGLVersionFunctionsStorage*
///
void q_openglversionfunctionsstorage_delete(void* self);

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

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
///
/// @param self QOpenGLFunctions_1_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLenum__Function)(uint32_t funcparam1)
///
GLboolean__GLenum__Function q_openglfunctions_1_0_corebackend__functions_is_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-corebackend-functions.html#IsEnabled-var)
///
/// @param self QOpenGLFunctions_1_0_CoreBackend__Functions*
/// @param isEnabled uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_0_corebackend__functions_set_is_enabled(void* self, uint8_t (*isEnabled)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_0_CoreBackend__Functions*
///
void q_openglfunctions_1_0_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
///
/// @param self QOpenGLFunctions_1_1_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_1_1_corebackend__functions_is_texture(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-1-corebackend-functions.html#IsTexture-var)
///
/// @param self QOpenGLFunctions_1_1_CoreBackend__Functions*
/// @param isTexture uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_1_corebackend__functions_set_is_texture(void* self, uint8_t (*isTexture)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_1_CoreBackend__Functions*
///
void q_openglfunctions_1_1_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLenum__Function)(uint32_t funcparam1)
///
GLboolean__GLenum__Function q_openglfunctions_1_5_corebackend__functions_unmap_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#UnmapBuffer-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
/// @param unmapBuffer uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_5_corebackend__functions_set_unmap_buffer(void* self, uint8_t (*unmapBuffer)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_1_5_corebackend__functions_is_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsBuffer-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
/// @param isBuffer uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_5_corebackend__functions_set_is_buffer(void* self, uint8_t (*isBuffer)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_1_5_corebackend__functions_is_query(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-5-corebackend-functions.html#IsQuery-var)
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
/// @param isQuery uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_5_corebackend__functions_set_is_query(void* self, uint8_t (*isQuery)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_5_CoreBackend__Functions*
///
void q_openglfunctions_1_5_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_2_0_corebackend__functions_is_shader(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsShader-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
/// @param isShader uint8_t func(uint32_t param1)
///
void q_openglfunctions_2_0_corebackend__functions_set_is_shader(void* self, uint8_t (*isShader)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_2_0_corebackend__functions_is_program(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#IsProgram-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
/// @param isProgram uint8_t func(uint32_t param1)
///
void q_openglfunctions_2_0_corebackend__functions_set_is_program(void* self, uint8_t (*isProgram)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
///
/// @return uint32_t (*GLuint__GLenum__Function)(uint32_t funcparam1)
///
GLuint__GLenum__Function q_openglfunctions_2_0_corebackend__functions_create_shader(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateShader-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
/// @param createShader uint32_t func(uint32_t param1)
///
void q_openglfunctions_2_0_corebackend__functions_set_create_shader(void* self, uint32_t (*createShader)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
///
/// @return uint32_t (*GLuint__void__Function)()
///
GLuint__void__Function q_openglfunctions_2_0_corebackend__functions_create_program(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-2-0-corebackend-functions.html#CreateProgram-var)
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
/// @param createProgram uint32_t func()
///
void q_openglfunctions_2_0_corebackend__functions_set_create_program(void* self, uint32_t (*createProgram)());

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_2_0_CoreBackend__Functions*
///
void q_openglfunctions_2_0_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_vertex_array(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsVertexArray-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
/// @param isVertexArray uint8_t func(uint32_t param1)
///
void q_openglfunctions_3_0_corebackend__functions_set_is_vertex_array(void* self, uint8_t (*isVertexArray)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_framebuffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsFramebuffer-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
/// @param isFramebuffer uint8_t func(uint32_t param1)
///
void q_openglfunctions_3_0_corebackend__functions_set_is_framebuffer(void* self, uint8_t (*isFramebuffer)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_renderbuffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsRenderbuffer-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
/// @param isRenderbuffer uint8_t func(uint32_t param1)
///
void q_openglfunctions_3_0_corebackend__functions_set_is_renderbuffer(void* self, uint8_t (*isRenderbuffer)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLenum_GLuint__Function)(uint32_t funcparam1, uint32_t funcparam2)
///
GLboolean__GLenum_GLuint__Function q_openglfunctions_3_0_corebackend__functions_is_enabledi(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-0-corebackend-functions.html#IsEnabledi-var)
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
/// @param isEnabledi uint8_t func(uint32_t param1, uint32_t param2)
///
void q_openglfunctions_3_0_corebackend__functions_set_is_enabledi(void* self, uint8_t (*isEnabledi)(uint32_t funcparam1, uint32_t funcparam2));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_3_0_CoreBackend__Functions*
///
void q_openglfunctions_3_0_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
///
/// @param self QOpenGLFunctions_3_3_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_3_3_corebackend__functions_is_sampler(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-3-3-corebackend-functions.html#IsSampler-var)
///
/// @param self QOpenGLFunctions_3_3_CoreBackend__Functions*
/// @param isSampler uint8_t func(uint32_t param1)
///
void q_openglfunctions_3_3_corebackend__functions_set_is_sampler(void* self, uint8_t (*isSampler)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_3_3_CoreBackend__Functions*
///
void q_openglfunctions_3_3_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
///
/// @param self QOpenGLFunctions_4_0_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_4_0_corebackend__functions_is_transform_feedback(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-0-corebackend-functions.html#IsTransformFeedback-var)
///
/// @param self QOpenGLFunctions_4_0_CoreBackend__Functions*
/// @param isTransformFeedback uint8_t func(uint32_t param1)
///
void q_openglfunctions_4_0_corebackend__functions_set_is_transform_feedback(void* self, uint8_t (*isTransformFeedback)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_0_CoreBackend__Functions*
///
void q_openglfunctions_4_0_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
///
/// @param self QOpenGLFunctions_4_1_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_4_1_corebackend__functions_is_program_pipeline(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-1-corebackend-functions.html#IsProgramPipeline-var)
///
/// @param self QOpenGLFunctions_4_1_CoreBackend__Functions*
/// @param isProgramPipeline uint8_t func(uint32_t param1)
///
void q_openglfunctions_4_1_corebackend__functions_set_is_program_pipeline(void* self, uint8_t (*isProgramPipeline)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_1_CoreBackend__Functions*
///
void q_openglfunctions_4_1_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
///
/// @param self QOpenGLFunctions_4_5_CoreBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_4_5_corebackend__functions_unmap_named_buffer(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-4-5-corebackend-functions.html#UnmapNamedBuffer-var)
///
/// @param self QOpenGLFunctions_4_5_CoreBackend__Functions*
/// @param unmapNamedBuffer uint8_t func(uint32_t param1)
///
void q_openglfunctions_4_5_corebackend__functions_set_unmap_named_buffer(void* self, uint8_t (*unmapNamedBuffer)(uint32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_4_5_CoreBackend__Functions*
///
void q_openglfunctions_4_5_corebackend__functions_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
///
/// @return uint8_t (*GLboolean__GLuint__Function)(uint32_t funcparam1)
///
GLboolean__GLuint__Function q_openglfunctions_1_0_deprecatedbackend__functions_is_list(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#IsList-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
/// @param isList uint8_t func(uint32_t param1)
///
void q_openglfunctions_1_0_deprecatedbackend__functions_set_is_list(void* self, uint8_t (*isList)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
///
/// @return int32_t (*GLint__GLenum__Function)(uint32_t funcparam1)
///
GLint__GLenum__Function q_openglfunctions_1_0_deprecatedbackend__functions_render_mode(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#RenderMode-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
/// @param renderMode int32_t func(uint32_t param1)
///
void q_openglfunctions_1_0_deprecatedbackend__functions_set_render_mode(void* self, int32_t (*renderMode)(uint32_t funcparam1));

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
///
/// @return uint32_t (*GLuint__GLsizei__Function)(int32_t funcparam1)
///
GLuint__GLsizei__Function q_openglfunctions_1_0_deprecatedbackend__functions_gen_lists(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qopenglfunctions-1-0-deprecatedbackend-functions.html#GenLists-var)
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
/// @param genLists uint32_t func(int32_t param1)
///
void q_openglfunctions_1_0_deprecatedbackend__functions_set_gen_lists(void* self, uint32_t (*genLists)(int32_t funcparam1));

/// Delete this object from C++ memory.
///
/// @param self QOpenGLFunctions_1_0_DeprecatedBackend__Functions*
///
void q_openglfunctions_1_0_deprecatedbackend__functions_delete(void* self);

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
