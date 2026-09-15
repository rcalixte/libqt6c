#include "../network/libqnetworkaccessmanager.hpp"
#include "../libqobject.hpp"
#include "libqqmlnetworkaccessmanagerfactory.hpp"
#include "libqqmlnetworkaccessmanagerfactory.h"

QNetworkAccessManager* q_qmlnetworkaccessmanagerfactory_create(void* self, void* parent) {
    return QQmlNetworkAccessManagerFactory_Create((QQmlNetworkAccessManagerFactory*)self, (QObject*)parent);
}

void q_qmlnetworkaccessmanagerfactory_operator_assign(void* self, void* param1) {
    QQmlNetworkAccessManagerFactory_OperatorAssign((QQmlNetworkAccessManagerFactory*)self, (QQmlNetworkAccessManagerFactory*)param1);
}

void q_qmlnetworkaccessmanagerfactory_delete(void* self) {
    QQmlNetworkAccessManagerFactory_Delete((QQmlNetworkAccessManagerFactory*)(self));
}
