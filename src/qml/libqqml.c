#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlcontext.hpp"
#include "libqqmlengine.hpp"
#include "../libqurl.hpp"
#include "libqqml.hpp"
#include "libqqml.h"

void q_qqml_h_qml_clear_type_registrations() {
    qqml_h_QmlClearTypeRegistrations();
}

int32_t q_qqml_h_qml_register_type_not_available(const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* message) {
    return qqml_h_QmlRegisterTypeNotAvailable(uri, versionMajor, versionMinor, qmlName, qstring(message));
}

int32_t q_qqml_h_qml_register_uncreatable_meta_object(const void* staticMetaObject, const char* uri, int versionMajor, int versionMinor, const char* qmlName, const char* reason) {
    return qqml_h_QmlRegisterUncreatableMetaObject((QMetaObject*)staticMetaObject, uri, versionMajor, versionMinor, qmlName, qstring(reason));
}

void q_qqml_h_qml_execute_deferred(void* param1) {
    qqml_h_QmlExecuteDeferred((QObject*)param1);
}

QQmlContext* q_qqml_h_qml_context(const void* param1) {
    return qqml_h_QmlContext((QObject*)param1);
}

QQmlEngine* q_qqml_h_qml_engine(const void* param1) {
    return qqml_h_QmlEngine((QObject*)param1);
}

QQmlAttachedPropertiesFunc q_qqml_h_qml_attached_properties_function(void* param1, const void* param2) {
    return (QQmlAttachedPropertiesFunc)qqml_h_QmlAttachedPropertiesFunction((QObject*)param1, (QMetaObject*)param2);
}

QObject* q_qqml_h_qml_attached_properties_object(void* param1, QObject* (*func)(void* funcparam1), bool create) {
    return qqml_h_QmlAttachedPropertiesObject((QObject*)param1, (intptr_t)func, create);
}

QObject* q_qqml_h_qml_extended_object(void* param1) {
    return qqml_h_QmlExtendedObject((QObject*)param1);
}

bool q_qqml_h_qml_protect_module(const char* uri, int majVersion) {
    return qqml_h_QmlProtectModule(uri, majVersion);
}

void q_qqml_h_qml_register_module(const char* uri, int versionMajor, int versionMinor) {
    qqml_h_QmlRegisterModule(uri, versionMajor, versionMinor);
}

void q_qqml_h_qml_register_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qqml_h_QmlRegisterModuleImport(uri, moduleMajor, import, importMajor, importMinor);
}

void q_qqml_h_qml_unregister_module_import(const char* uri, int moduleMajor, const char* import, int importMajor, int importMinor) {
    qqml_h_QmlUnregisterModuleImport(uri, moduleMajor, import, importMajor, importMinor);
}

int32_t q_qqml_h_qml_register_singleton_type(const void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlRegisterSingletonType((QUrl*)url, uri, versionMajor, versionMinor, qmlName);
}

int32_t q_qqml_h_qml_register_type(const void* url, const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlRegisterType((QUrl*)url, uri, versionMajor, versionMinor, qmlName);
}

void q_qqml_h_qml_register_namespace_and_revisions(const void* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const void* classInfoMetaObject, const void* extensionMetaObject) {
    qqml_h_QmlRegisterNamespaceAndRevisions((QMetaObject*)metaObject, uri, versionMajor, qmlTypeIds, (QMetaObject*)classInfoMetaObject, (QMetaObject*)extensionMetaObject);
}

void q_qqml_h_qml_register_namespace_and_revisions2(const void* metaObject, const char* uri, int versionMajor, libqt_list /* of int */ qmlTypeIds, const void* classInfoMetaObject) {
    qqml_h_QmlRegisterNamespaceAndRevisions2((QMetaObject*)metaObject, uri, versionMajor, qmlTypeIds, (QMetaObject*)classInfoMetaObject);
}

int32_t q_qqml_h_qml_type_id(const char* uri, int versionMajor, int versionMinor, const char* qmlName) {
    return qqml_h_QmlTypeId(uri, versionMajor, versionMinor, qmlName);
}
