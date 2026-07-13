#include "../libqvariant.hpp"
#include "libqdbusextratypes.hpp"
#include "libqdbusextratypes.h"

QDBusObjectPath* q_dbusobjectpath_new() {
    return QDBusObjectPath_New();
}

QDBusObjectPath* q_dbusobjectpath_new2(const char* path) {
    return QDBusObjectPath_New2(path);
}

QDBusObjectPath* q_dbusobjectpath_new3(char* path) {
    return QDBusObjectPath_New3(qstring(path));
}

QDBusObjectPath* q_dbusobjectpath_new4(const char* path) {
    return QDBusObjectPath_New4(qstring(path));
}

QDBusObjectPath* q_dbusobjectpath_new5(void* param1) {
    return QDBusObjectPath_New5((QDBusObjectPath*)param1);
}

void q_dbusobjectpath_swap(void* self, void* other) {
    QDBusObjectPath_Swap((QDBusObjectPath*)self, (QDBusObjectPath*)other);
}

void q_dbusobjectpath_set_path(void* self, const char* path) {
    QDBusObjectPath_SetPath((QDBusObjectPath*)self, qstring(path));
}

const char* q_dbusobjectpath_path(void* self) {
    libqt_string _str = QDBusObjectPath_Path((QDBusObjectPath*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

QVariant* q_dbusobjectpath_to_q_variant(void* self) {
    return QDBusObjectPath_ToQVariant((QDBusObjectPath*)self);
}

void q_dbusobjectpath_delete(void* self) {
    QDBusObjectPath_Delete((QDBusObjectPath*)(self));
}

QDBusSignature* q_dbussignature_new() {
    return QDBusSignature_New();
}

QDBusSignature* q_dbussignature_new2(const char* signature) {
    return QDBusSignature_New2(signature);
}

QDBusSignature* q_dbussignature_new3(char* signature) {
    return QDBusSignature_New3(qstring(signature));
}

QDBusSignature* q_dbussignature_new4(const char* signature) {
    return QDBusSignature_New4(qstring(signature));
}

QDBusSignature* q_dbussignature_new5(void* param1) {
    return QDBusSignature_New5((QDBusSignature*)param1);
}

void q_dbussignature_swap(void* self, void* other) {
    QDBusSignature_Swap((QDBusSignature*)self, (QDBusSignature*)other);
}

void q_dbussignature_set_signature(void* self, const char* signature) {
    QDBusSignature_SetSignature((QDBusSignature*)self, qstring(signature));
}

const char* q_dbussignature_signature(void* self) {
    libqt_string _str = QDBusSignature_Signature((QDBusSignature*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_dbussignature_delete(void* self) {
    QDBusSignature_Delete((QDBusSignature*)(self));
}

QDBusVariant* q_dbusvariant_new() {
    return QDBusVariant_New();
}

QDBusVariant* q_dbusvariant_new2(void* variant) {
    return QDBusVariant_New2((QVariant*)variant);
}

QDBusVariant* q_dbusvariant_new3(void* param1) {
    return QDBusVariant_New3((QDBusVariant*)param1);
}

void q_dbusvariant_swap(void* self, void* other) {
    QDBusVariant_Swap((QDBusVariant*)self, (QDBusVariant*)other);
}

void q_dbusvariant_set_variant(void* self, void* variant) {
    QDBusVariant_SetVariant((QDBusVariant*)self, (QVariant*)variant);
}

QVariant* q_dbusvariant_variant(void* self) {
    return QDBusVariant_Variant((QDBusVariant*)self);
}

void q_dbusvariant_operator_assign(void* self, void* param1) {
    QDBusVariant_OperatorAssign((QDBusVariant*)self, (QDBusVariant*)param1);
}

void q_dbusvariant_delete(void* self) {
    QDBusVariant_Delete((QDBusVariant*)(self));
}
