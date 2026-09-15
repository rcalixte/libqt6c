#include "libqqmlmoduleregistration.hpp"
#include "libqqmlmoduleregistration.h"

QQmlModuleRegistration* q_qmlmoduleregistration_new(const char* uri, void (*registerFunction)()) {
    return QQmlModuleRegistration_New(uri, (intptr_t)registerFunction);
}

QQmlModuleRegistration* q_qmlmoduleregistration_new2(const char* uri, int majorVersion, void (*registerFunction)()) {
    return QQmlModuleRegistration_New2(uri, majorVersion, (intptr_t)registerFunction);
}

void q_qmlmoduleregistration_delete(void* self) {
    QQmlModuleRegistration_Delete((QQmlModuleRegistration*)(self));
}
