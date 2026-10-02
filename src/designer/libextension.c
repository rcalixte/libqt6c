#include "../libqobject.hpp"
#include "libextension.hpp"
#include "libextension.h"

QObject* q_abstractextensionfactory_extension(const void* self, void* object, const char* iid) {
    return QAbstractExtensionFactory_Extension((QAbstractExtensionFactory*)self, (QObject*)object, qstring(iid));
}

void q_abstractextensionfactory_delete(void* self) {
    QAbstractExtensionFactory_Delete((QAbstractExtensionFactory*)(self));
}

void q_abstractextensionmanager_delete(void* self) {
    QAbstractExtensionManager_Delete((QAbstractExtensionManager*)(self));
}
