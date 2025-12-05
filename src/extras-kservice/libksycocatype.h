#pragma once
#ifndef SRC_EXTRAS_KSERVICE_QT6C_LIBKSYCOCATYPE_H
#define SRC_EXTRAS_KSERVICE_QT6C_LIBKSYCOCATYPE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://api.kde.org/ksycocatype.html#public-types)

typedef enum {
    KSYCOCATYPE_KST_KSYCOCAENTRY = 0,
    KSYCOCATYPE_KST_KSERVICE = 1,
    KSYCOCATYPE_KST_KSERVICETYPE = 2,
    KSYCOCATYPE_KST_KMIMETYPE = 3,
    KSYCOCATYPE_KST_KMIMETYPEENTRY = 6,
    KSYCOCATYPE_KST_KSERVICEGROUP = 7,
    KSYCOCATYPE_KST_KSERVICESEPARATOR = 10,
    KSYCOCATYPE_KST_KCUSTOM = 1000
} KSycocaType__;

/// [Upstream resources](https://api.kde.org/ksycocatype.html#public-types)

typedef enum {
    KSYCOCAFACTORYID_KST_KSERVICEFACTORY = 1,
    KSYCOCAFACTORYID_KST_KSERVICETYPEFACTORY = 2,
    KSYCOCAFACTORYID_KST_KSERVICEGROUPFACTORY = 3,
    KSYCOCAFACTORYID_KST_KMIMETYPEFACTORY = 6,
    KSYCOCAFACTORYID_KST_CTIMEINFO = 100
} KSycocaFactoryId__;

#endif
