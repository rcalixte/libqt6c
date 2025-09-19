#include "libqdbusargument.hpp"
#include "../libqmetatype.hpp"
#include "libqdbusmetatype.hpp"
#include "libqdbusmetatype.h"

QDBusMetaType* q_dbusmetatype_new(void* other) {
    return QDBusMetaType_new((QDBusMetaType*)other);
}

QDBusMetaType* q_dbusmetatype_new2(void* other) {
    return QDBusMetaType_new2((QDBusMetaType*)other);
}

void q_dbusmetatype_copy_assign(void* self, void* other) {
    QDBusMetaType_CopyAssign((QDBusMetaType*)self, (QDBusMetaType*)other);
}

void q_dbusmetatype_move_assign(void* self, void* other) {
    QDBusMetaType_MoveAssign((QDBusMetaType*)self, (QDBusMetaType*)other);
}

bool q_dbusmetatype_marshall(void* param1, void* id, void* data) {
    return QDBusMetaType_Marshall((QDBusArgument*)param1, (QMetaType*)id, data);
}

bool q_dbusmetatype_demarshall(void* param1, void* id, void* data) {
    return QDBusMetaType_Demarshall((QDBusArgument*)param1, (QMetaType*)id, data);
}

void q_dbusmetatype_register_custom_type(void* type, const char* signature) {
    QDBusMetaType_RegisterCustomType((QMetaType*)type, qstring(signature));
}

QMetaType* q_dbusmetatype_signature_to_meta_type(const char* signature) {
    return QDBusMetaType_SignatureToMetaType(signature);
}

const char* q_dbusmetatype_type_to_signature(void* type) {
    return QDBusMetaType_TypeToSignature((QMetaType*)type);
}

void q_dbusmetatype_delete(void* self) {
    QDBusMetaType_Delete((QDBusMetaType*)(self));
}
