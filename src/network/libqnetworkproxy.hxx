#pragma once
#ifndef SRC_NETWORKC_LIBVIRTUALQNETWORKPROXY_H
#define SRC_NETWORKC_LIBVIRTUALQNETWORKPROXY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

// This class is a subclass of QNetworkProxyFactory so that we can call protected methods
class VirtualQNetworkProxyFactory : public QNetworkProxyFactory {

  public:
    // Virtual class public types (including callbacks)
    using QNetworkProxyFactory_QueryProxy_Callback = QList<QNetworkProxy> (*)(QNetworkProxyFactory*, const QNetworkProxyQuery&);

  protected:
    // Instance callback storage
    QNetworkProxyFactory_QueryProxy_Callback qnetworkproxyfactory_queryproxy_callback = nullptr;

    // Instance base flags
    mutable bool qnetworkproxyfactory_queryproxy_isbase = false;

  public:
    VirtualQNetworkProxyFactory() : QNetworkProxyFactory(){};

    ~VirtualQNetworkProxyFactory() {
        qnetworkproxyfactory_queryproxy_callback = nullptr;
    }

    // Callback setters
    void setQNetworkProxyFactory_QueryProxy_Callback(QNetworkProxyFactory_QueryProxy_Callback cb) { qnetworkproxyfactory_queryproxy_callback = cb; }

    // Base flag setters
    void setQNetworkProxyFactory_QueryProxy_IsBase(bool value) const { qnetworkproxyfactory_queryproxy_isbase = value; }

    // Virtual method for C ABI access and custom callback
    virtual QList<QNetworkProxy> queryProxy(const QNetworkProxyQuery& query) override {
        return qnetworkproxyfactory_queryproxy_callback(this, query);
    }
};

#endif
