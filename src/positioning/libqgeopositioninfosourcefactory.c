#include "libqgeoareamonitorsource.hpp"
#include "libqgeopositioninfosource.hpp"
#include "libqgeosatelliteinfosource.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeopositioninfosourcefactory.hpp"
#include "libqgeopositioninfosourcefactory.h"

void q_geopositioninfosourcefactory_delete(void* self) {
    QGeoPositionInfoSourceFactory_Delete((QGeoPositionInfoSourceFactory*)(self));
}
