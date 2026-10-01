#include "libqfactoryinterface.hpp"
#include "libqfactoryinterface.h"

void q_factoryinterface_delete(void* self) {
    QFactoryInterface_Delete((QFactoryInterface*)(self));
}
