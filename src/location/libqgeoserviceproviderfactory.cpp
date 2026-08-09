#include <QGeoServiceProviderFactory>
#include <qgeoserviceproviderfactory.h>
#include "libqgeoserviceproviderfactory.hpp"
#include "libqgeoserviceproviderfactory.hxx"

QGeoServiceProviderFactory* QGeoServiceProviderFactory_New() {
    return new QGeoServiceProviderFactory();
}

void QGeoServiceProviderFactory_OperatorAssign(QGeoServiceProviderFactory* self, const QGeoServiceProviderFactory* param1) {
    self->operator=(*param1);
}

void QGeoServiceProviderFactory_Delete(QGeoServiceProviderFactory* self) {
    delete self;
}
