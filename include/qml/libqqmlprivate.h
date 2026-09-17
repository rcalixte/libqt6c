#pragma once
#ifndef QML_LIBQQMLPRIVATE_H
#define QML_LIBQQMLPRIVATE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate-h.html#qHash)
///
/// @param func QObject* func(QObject* param1)
/// @param seed uintptr_t
///
uintptr_t q_qqmlprivate_h_q_hash(QObject* (*func)(void* funcparam1), uintptr_t seed);

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_SINGLETONCONSTRUCTIONMODE_NONE = 0,
    QQMLPRIVATE_SINGLETONCONSTRUCTIONMODE_CONSTRUCTOR = 1,
    QQMLPRIVATE_SINGLETONCONSTRUCTIONMODE_FACTORY = 2,
    QQMLPRIVATE_SINGLETONCONSTRUCTIONMODE_FACTORYWRAPPER = 3
} QQmlPrivate__SingletonConstructionMode;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_AUTOPARENTRESULT_PARENTED = 0,
    QQMLPRIVATE_AUTOPARENTRESULT_INCOMPATIBLEOBJECT = 1,
    QQMLPRIVATE_AUTOPARENTRESULT_INCOMPATIBLEPARENT = 2
} QQmlPrivate__AutoParentResult;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_VALUETYPECREATIONMETHOD_NONE = 0,
    QQMLPRIVATE_VALUETYPECREATIONMETHOD_CONSTRUCT = 1,
    QQMLPRIVATE_VALUETYPECREATIONMETHOD_STRUCTURED = 2
} QQmlPrivate__ValueTypeCreationMethod;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_REGISTRATIONTYPE_TYPEREGISTRATION = 0,
    QQMLPRIVATE_REGISTRATIONTYPE_INTERFACEREGISTRATION = 1,
    QQMLPRIVATE_REGISTRATIONTYPE_AUTOPARENTREGISTRATION = 2,
    QQMLPRIVATE_REGISTRATIONTYPE_SINGLETONREGISTRATION = 3,
    QQMLPRIVATE_REGISTRATIONTYPE_COMPOSITEREGISTRATION = 4,
    QQMLPRIVATE_REGISTRATIONTYPE_COMPOSITESINGLETONREGISTRATION = 5,
    QQMLPRIVATE_REGISTRATIONTYPE_QMLUNITCACHEHOOKREGISTRATION = 6,
    QQMLPRIVATE_REGISTRATIONTYPE_TYPEANDREVISIONSREGISTRATION = 7,
    QQMLPRIVATE_REGISTRATIONTYPE_SINGLETONANDREVISIONSREGISTRATION = 8,
    QQMLPRIVATE_REGISTRATIONTYPE_SEQUENTIALCONTAINERREGISTRATION = 9,
    QQMLPRIVATE_REGISTRATIONTYPE_SEQUENTIALCONTAINERANDREVISIONSREGISTRATION = 10
} QQmlPrivate__RegistrationType;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_QMLREGISTRATIONWARNING_UNCONSTRUCTIBLETYPE = 0,
    QQMLPRIVATE_QMLREGISTRATIONWARNING_UNCONSTRUCTIBLESINGLETON = 1,
    QQMLPRIVATE_QMLREGISTRATIONWARNING_NONQOBJECTWITHATACHED = 2
} QQmlPrivate__QmlRegistrationWarning;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_REGISTERTYPE_STRUCTVERSION_BASE = 0,
    QQMLPRIVATE_REGISTERTYPE_STRUCTVERSION_FINALIZERCAST = 1,
    QQMLPRIVATE_REGISTERTYPE_STRUCTVERSION_CREATIONMETHOD = 2,
    QQMLPRIVATE_REGISTERTYPE_STRUCTVERSION_CURRENTVERSION = 2
} QQmlPrivate__RegisterType__StructVersion;

/// [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)

typedef enum {
    QQMLPRIVATE_AOTCOMPILEDCONTEXT__INVALIDSTRINGID = 4294967295
} QQmlPrivate__AOTCompiledContext__;

#endif
