#include "libqgeoareamonitorsource.hpp"
#include "libqgeopositioninfosource.hpp"
#include "libqgeosatelliteinfosource.hpp"
#include "../libqobject.hpp"
#include "../libqvariant.hpp"
#include "libqgeopositioninfosourcefactory.hpp"
#include "libqgeopositioninfosourcefactory.h"

QGeoPositionInfoSource* q_geopositioninfosourcefactory_position_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }
    QGeoPositionInfoSource* _out = QGeoPositionInfoSourceFactory_PositionInfoSource((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters_ret);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
    return _out;
}

QGeoSatelliteInfoSource* q_geopositioninfosourcefactory_satellite_info_source(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }
    QGeoSatelliteInfoSource* _out = QGeoPositionInfoSourceFactory_SatelliteInfoSource((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters_ret);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
    return _out;
}

QGeoAreaMonitorSource* q_geopositioninfosourcefactory_area_monitor(void* self, void* parent, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys\n");
        abort();
    }
    parameters_ret.values = malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values\n");
        abort();
    }
    const char** parameters_karr = (const char**)parameters.keys;
    libqt_string* parameters_kdest = (libqt_string*)parameters_ret.keys;
    QVariant** parameters_varr = (QVariant**)parameters.values;
    QVariant** parameters_vdest = (QVariant**)parameters_ret.values;
    for (size_t i = 0; i < parameters_ret.len; ++i) {
        parameters_kdest[i] = qstring(parameters_karr[i]);
        parameters_vdest[i] = parameters_varr[i];
    }
    QGeoAreaMonitorSource* _out = QGeoPositionInfoSourceFactory_AreaMonitor((QGeoPositionInfoSourceFactory*)self, (QObject*)parent, parameters_ret);
    libqt_free(parameters_ret.keys);
    libqt_free(parameters_ret.values);
    return _out;
}

void q_geopositioninfosourcefactory_operator_assign(void* self, void* param1) {
    QGeoPositionInfoSourceFactory_OperatorAssign((QGeoPositionInfoSourceFactory*)self, (QGeoPositionInfoSourceFactory*)param1);
}

void q_geopositioninfosourcefactory_delete(void* self) {
    QGeoPositionInfoSourceFactory_Delete((QGeoPositionInfoSourceFactory*)(self));
}
