#include "libqgeosatelliteinfo.hpp"
#include "libqgeosatelliteinfo.h"

QGeoSatelliteInfo* q_geosatelliteinfo_new() {
    return QGeoSatelliteInfo_new();
}

QGeoSatelliteInfo* q_geosatelliteinfo_new2(void* other) {
    return QGeoSatelliteInfo_new2((QGeoSatelliteInfo*)other);
}

void q_geosatelliteinfo_operator_assign(void* self, void* other) {
    QGeoSatelliteInfo_OperatorAssign((QGeoSatelliteInfo*)self, (QGeoSatelliteInfo*)other);
}

void q_geosatelliteinfo_swap(void* self, void* other) {
    QGeoSatelliteInfo_Swap((QGeoSatelliteInfo*)self, (QGeoSatelliteInfo*)other);
}

void q_geosatelliteinfo_set_satellite_system(void* self, int32_t system) {
    QGeoSatelliteInfo_SetSatelliteSystem((QGeoSatelliteInfo*)self, system);
}

int32_t q_geosatelliteinfo_satellite_system(void* self) {
    return QGeoSatelliteInfo_SatelliteSystem((QGeoSatelliteInfo*)self);
}

void q_geosatelliteinfo_set_satellite_identifier(void* self, int satId) {
    QGeoSatelliteInfo_SetSatelliteIdentifier((QGeoSatelliteInfo*)self, satId);
}

int32_t q_geosatelliteinfo_satellite_identifier(void* self) {
    return QGeoSatelliteInfo_SatelliteIdentifier((QGeoSatelliteInfo*)self);
}

void q_geosatelliteinfo_set_signal_strength(void* self, int signalStrength) {
    QGeoSatelliteInfo_SetSignalStrength((QGeoSatelliteInfo*)self, signalStrength);
}

int32_t q_geosatelliteinfo_signal_strength(void* self) {
    return QGeoSatelliteInfo_SignalStrength((QGeoSatelliteInfo*)self);
}

void q_geosatelliteinfo_set_attribute(void* self, int32_t attribute, double value) {
    QGeoSatelliteInfo_SetAttribute((QGeoSatelliteInfo*)self, attribute, value);
}

double q_geosatelliteinfo_attribute(void* self, int32_t attribute) {
    return QGeoSatelliteInfo_Attribute((QGeoSatelliteInfo*)self, attribute);
}

void q_geosatelliteinfo_remove_attribute(void* self, int32_t attribute) {
    QGeoSatelliteInfo_RemoveAttribute((QGeoSatelliteInfo*)self, attribute);
}

bool q_geosatelliteinfo_has_attribute(void* self, int32_t attribute) {
    return QGeoSatelliteInfo_HasAttribute((QGeoSatelliteInfo*)self, attribute);
}

void q_geosatelliteinfo_detach(void* self) {
    QGeoSatelliteInfo_Detach((QGeoSatelliteInfo*)self);
}

void q_geosatelliteinfo_delete(void* self) {
    QGeoSatelliteInfo_Delete((QGeoSatelliteInfo*)(self));
}
