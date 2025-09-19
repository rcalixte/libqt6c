#include <QByteArray>
#include <QDBusArgument>
#include <QDBusMetaType>
#include <QMetaType>
#include <qdbusmetatype.h>
#include "libqdbusmetatype.hpp"
#include "libqdbusmetatype.hxx"

QDBusMetaType* QDBusMetaType_new(const QDBusMetaType* other) {
    return new QDBusMetaType(*other);
}

QDBusMetaType* QDBusMetaType_new2(QDBusMetaType* other) {
    return new QDBusMetaType(std::move(*other));
}

void QDBusMetaType_CopyAssign(QDBusMetaType* self, QDBusMetaType* other) {
    *self = *other;
}

void QDBusMetaType_MoveAssign(QDBusMetaType* self, QDBusMetaType* other) {
    *self = std::move(*other);
}

bool QDBusMetaType_Marshall(QDBusArgument* param1, QMetaType* id, const void* data) {
    return QDBusMetaType::marshall(*param1, *id, data);
}

bool QDBusMetaType_Demarshall(const QDBusArgument* param1, QMetaType* id, void* data) {
    return QDBusMetaType::demarshall(*param1, *id, data);
}

void QDBusMetaType_RegisterCustomType(QMetaType* type, const libqt_string signature) {
    QByteArray signature_QByteArray(signature.data, signature.len);
    QDBusMetaType::registerCustomType(*type, signature_QByteArray);
}

QMetaType* QDBusMetaType_SignatureToMetaType(const char* signature) {
    return new QMetaType(QDBusMetaType::signatureToMetaType(signature));
}

const char* QDBusMetaType_TypeToSignature(QMetaType* type) {
    return (const char*)QDBusMetaType::typeToSignature(*type);
}

void QDBusMetaType_Delete(QDBusMetaType* self) {
    delete self;
}
