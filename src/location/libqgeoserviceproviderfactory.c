#include "libqgeoserviceproviderfactory.hpp"
#include "libqgeoserviceproviderfactory.h"

QGeoServiceProviderFactory* q_geoserviceproviderfactory_new() {
    return QGeoServiceProviderFactory_New();
}

void q_geoserviceproviderfactory_operator_assign(void* self, void* param1) {
    QGeoServiceProviderFactory_OperatorAssign((QGeoServiceProviderFactory*)self, (QGeoServiceProviderFactory*)param1);
}

void q_geoserviceproviderfactory_delete(void* self) {
    QGeoServiceProviderFactory_Delete((QGeoServiceProviderFactory*)(self));
}
