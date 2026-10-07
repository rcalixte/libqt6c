#pragma once
#ifndef QML_LIBQQML_H
#define QML_LIBQQML_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html)

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlClearTypeRegistrations)
///
void q_qqml_h_qml_clear_type_registrations();

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterTypeNotAvailable)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
/// @param message const char*
///
int32_t q_qqml_h_qml_register_type_not_available(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* message);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterUncreatableMetaObject)
///
/// @param staticMetaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
/// @param reason const char*
///
int32_t q_qqml_h_qml_register_uncreatable_meta_object(const void* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* reason);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExecuteDeferred)
///
/// @param param1 QObject*
///
void q_qqml_h_qml_execute_deferred(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlContext)
///
/// @param param1 QObject*
///
QQmlContext* q_qqml_h_qml_context(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlEngine)
///
/// @param param1 QObject*
///
QQmlEngine* q_qqml_h_qml_engine(const void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesFunction)
///
/// @param param1 QObject*
/// @param param2 QMetaObject*
///
/// @return QObject* (*QQmlAttachedPropertiesFunc)(void* funcparam1)
///
QQmlAttachedPropertiesFunc q_qqml_h_qml_attached_properties_function(void* param1, const void* param2);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlAttachedPropertiesObject)
///
/// @param param1 QObject*
/// @param func QObject* func(QObject* param1)
/// @param create bool
///
QObject* q_qqml_h_qml_attached_properties_object(void* param1, QObject* (*func)(void* funcparam1), bool create);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlExtendedObject)
///
/// @param param1 QObject*
///
QObject* q_qqml_h_qml_extended_object(void* param1);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlProtectModule)
///
/// @param uri const char*
/// @param majVersion int
///
bool q_qqml_h_qml_protect_module(const char* uri, int majVersion);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModule)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
///
void q_qqml_h_qml_register_module(const char* uri, int versionMajor, int versionMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterModuleImport)
///
/// @param uri const char*
/// @param moduleMajor int
/// @param import const char*
/// @param importMajor int
/// @param importMinor int
///
void q_qqml_h_qml_register_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlUnregisterModuleImport)
///
/// @param uri const char*
/// @param moduleMajor int
/// @param import const char*
/// @param importMajor int
/// @param importMinor int
///
void q_qqml_h_qml_unregister_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterSingletonType)
///
/// @param url QUrl*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_register_singleton_type(const void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterType)
///
/// @param url QUrl*
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_register_type(const void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
///
/// @param metaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param qmlTypeIds libqt_list of int
/// @param classInfoMetaObject QMetaObject*
/// @param extensionMetaObject QMetaObject*
///
void q_qqml_h_qml_register_namespace_and_revisions(const void* metaObject, const char* uri, int versionMajor, libqt_list qmlTypeIds, const void* classInfoMetaObject, const void* extensionMetaObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlRegisterNamespaceAndRevisions)
///
/// @param metaObject QMetaObject*
/// @param uri const char*
/// @param versionMajor int
/// @param qmlTypeIds libqt_list of int
/// @param classInfoMetaObject QMetaObject*
///
void q_qqml_h_qml_register_namespace_and_revisions2(const void* metaObject, const char* uri, int versionMajor, libqt_list qmlTypeIds, const void* classInfoMetaObject);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml-h.html#qmlTypeId)
///
/// @param uri const char*
/// @param versionMajor int
/// @param versionMinor int
/// @param qmlName const char*
///
int32_t q_qqml_h_qml_type_id(const char* uri, int versionMajor, int versionMinor, const char* qmlName);

/// [Upstream resources](https://doc.qt.io/qt-6/qqml.html#public-types)

typedef enum {
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTMODULEANY = -1,
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTLATEST = -1,
    QQMLMODULEIMPORTSPECIALVERSIONS_QQMLMODULEIMPORTAUTO = -2
} QQmlModuleImportSpecialVersions__;

#endif
