#include "libqgeoareamonitorsource.hpp"
#include "libqgeopositioninfosource.hpp"
#include "libqgeosatelliteinfosource.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeopositioninfosourcefactory.hpp"
#include "libqgeopositioninfosourcefactory.h"

QGeoPositionInfoSource* q_geopositioninfosourcefactory_position_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    return QGeoPositionInfoSourceFactory_PositionInfoSource((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters);
}

QGeoSatelliteInfoSource* q_geopositioninfosourcefactory_satellite_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    return QGeoPositionInfoSourceFactory_SatelliteInfoSource((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters);
}

QGeoAreaMonitorSource* q_geopositioninfosourcefactory_area_monitor(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    return QGeoPositionInfoSourceFactory_AreaMonitor((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters);
}

void q_geopositioninfosourcefactory_operator_assign(void* self, void* param1) {
    QGeoPositionInfoSourceFactory_OperatorAssign((QGeoPositionInfoSourceFactory*)self, (QGeoPositionInfoSourceFactory*)param1);
}

void q_geopositioninfosourcefactory_delete(void* self) {
    QGeoPositionInfoSourceFactory_Delete((QGeoPositionInfoSourceFactory*)(self));
}
