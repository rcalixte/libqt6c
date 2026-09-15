#include "../libqobjectdefs.hpp"
#include "../libqobject.hpp"
#include "libqqmlengine.hpp"
#include "../libqvariant.hpp"
#include "libqqmllist.hpp"
#include "libqqmllist.h"

QQmlListReference* q_qmllistreference_new() {
    return QQmlListReference_New();
}

QQmlListReference* q_qmllistreference_new2(void* variant) {
    return QQmlListReference_New2((QVariant*)variant);
}

QQmlListReference* q_qmllistreference_new3(void* o, const char* property) {
    return QQmlListReference_New3((QObject*)o, property);
}

QQmlListReference* q_qmllistreference_new4(void* variant) {
    return QQmlListReference_New4((QVariant*)variant);
}

QQmlListReference* q_qmllistreference_new5(void* o, const char* property) {
    return QQmlListReference_New5((QObject*)o, property);
}

QQmlListReference* q_qmllistreference_new6(void* param1) {
    return QQmlListReference_New6((QQmlListReference*)param1);
}

QQmlListReference* q_qmllistreference_new7(void* variant, void* engine) {
    return QQmlListReference_New7((QVariant*)variant, (QQmlEngine*)engine);
}

QQmlListReference* q_qmllistreference_new8(void* o, const char* property, void* engine) {
    return QQmlListReference_New8((QObject*)o, property, (QQmlEngine*)engine);
}

void q_qmllistreference_operator_assign(void* self, void* param1) {
    QQmlListReference_OperatorAssign((QQmlListReference*)self, (QQmlListReference*)param1);
}

bool q_qmllistreference_is_valid(void* self) {
    return QQmlListReference_IsValid((QQmlListReference*)self);
}

QObject* q_qmllistreference_object(void* self) {
    return QQmlListReference_Object((QQmlListReference*)self);
}

const QMetaObject* q_qmllistreference_list_element_type(void* self) {
    return QQmlListReference_ListElementType((QQmlListReference*)self);
}

bool q_qmllistreference_can_append(void* self) {
    return QQmlListReference_CanAppend((QQmlListReference*)self);
}

bool q_qmllistreference_can_at(void* self) {
    return QQmlListReference_CanAt((QQmlListReference*)self);
}

bool q_qmllistreference_can_clear(void* self) {
    return QQmlListReference_CanClear((QQmlListReference*)self);
}

bool q_qmllistreference_can_count(void* self) {
    return QQmlListReference_CanCount((QQmlListReference*)self);
}

bool q_qmllistreference_can_replace(void* self) {
    return QQmlListReference_CanReplace((QQmlListReference*)self);
}

bool q_qmllistreference_can_remove_last(void* self) {
    return QQmlListReference_CanRemoveLast((QQmlListReference*)self);
}

bool q_qmllistreference_is_manipulable(void* self) {
    return QQmlListReference_IsManipulable((QQmlListReference*)self);
}

bool q_qmllistreference_is_readable(void* self) {
    return QQmlListReference_IsReadable((QQmlListReference*)self);
}

bool q_qmllistreference_append(void* self, void* param1) {
    return QQmlListReference_Append((QQmlListReference*)self, (QObject*)param1);
}

QObject* q_qmllistreference_at(void* self, intptr_t param1) {
    return QQmlListReference_At((QQmlListReference*)self, param1);
}

bool q_qmllistreference_clear(void* self) {
    return QQmlListReference_Clear((QQmlListReference*)self);
}

intptr_t q_qmllistreference_count(void* self) {
    return QQmlListReference_Count((QQmlListReference*)self);
}

intptr_t q_qmllistreference_size(void* self) {
    return QQmlListReference_Size((QQmlListReference*)self);
}

bool q_qmllistreference_replace(void* self, intptr_t param1, void* param2) {
    return QQmlListReference_Replace((QQmlListReference*)self, param1, (QObject*)param2);
}

bool q_qmllistreference_remove_last(void* self) {
    return QQmlListReference_RemoveLast((QQmlListReference*)self);
}

bool q_qmllistreference_operator_equal(void* self, void* other) {
    return QQmlListReference_OperatorEqual((QQmlListReference*)self, (QQmlListReference*)other);
}

void q_qmllistreference_delete(void* self) {
    QQmlListReference_Delete((QQmlListReference*)(self));
}
