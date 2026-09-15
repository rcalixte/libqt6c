#include "libqgeoserviceproviderfactory.hpp"
#include "libqgeoserviceproviderfactory.h"

QGeoServiceProviderFactory* q_geoserviceproviderfactory_new() {
    return QGeoServiceProviderFactory_New();
}

void q_geoserviceproviderfactory_set_qml_engine(void* self, void* engine) {
    QGeoServiceProviderFactory_SetQmlEngine((QGeoServiceProviderFactory*)self, (QQmlEngine*)engine);
}

void q_geoserviceproviderfactory_on_set_qml_engine(void* self, void (*callback)(void*, void*)) {
    QGeoServiceProviderFactory_OnSetQmlEngine((QGeoServiceProviderFactory*)self, (intptr_t)callback);
}

void q_geoserviceproviderfactory_super_set_qml_engine(void* self, void* engine) {
    QGeoServiceProviderFactory_SuperSetQmlEngine((QGeoServiceProviderFactory*)self, (QQmlEngine*)engine);
}

void q_geoserviceproviderfactory_operator_assign(void* self, void* param1) {
    QGeoServiceProviderFactory_OperatorAssign((QGeoServiceProviderFactory*)self, (QGeoServiceProviderFactory*)param1);
}

void q_geoserviceproviderfactory_delete(void* self) {
    QGeoServiceProviderFactory_Delete((QGeoServiceProviderFactory*)(self));
}
