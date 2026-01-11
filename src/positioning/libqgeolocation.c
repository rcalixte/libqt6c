#include "libqgeoaddress.hpp"
#include "libqgeocoordinate.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeolocation.hpp"
#include "libqgeolocation.h"

QGeoLocation* q_geolocation_new() {
    return QGeoLocation_new();
}

QGeoLocation* q_geolocation_new2(void* other) {
    return QGeoLocation_new2((QGeoLocation*)other);
}

void q_geolocation_operator_assign(void* self, void* other) {
    QGeoLocation_OperatorAssign((QGeoLocation*)self, (QGeoLocation*)other);
}

void q_geolocation_swap(void* self, void* other) {
    QGeoLocation_Swap((QGeoLocation*)self, (QGeoLocation*)other);
}

QGeoAddress* q_geolocation_address(void* self) {
    return QGeoLocation_Address((QGeoLocation*)self);
}

void q_geolocation_set_address(void* self, void* address) {
    QGeoLocation_SetAddress((QGeoLocation*)self, (QGeoAddress*)address);
}

QGeoCoordinate* q_geolocation_coordinate(void* self) {
    return QGeoLocation_Coordinate((QGeoLocation*)self);
}

void q_geolocation_set_coordinate(void* self, void* position) {
    QGeoLocation_SetCoordinate((QGeoLocation*)self, (QGeoCoordinate*)position);
}

QGeoShape* q_geolocation_bounding_shape(void* self) {
    return QGeoLocation_BoundingShape((QGeoLocation*)self);
}

void q_geolocation_set_bounding_shape(void* self, void* shape) {
    QGeoLocation_SetBoundingShape((QGeoLocation*)self, (QGeoShape*)shape);
}

libqt_map /* of const char* to QVariant* */ q_geolocation_extended_attributes(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QGeoLocation_ExtendedAttributes((QGeoLocation*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_geolocation_extended_attributes");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_geolocation_extended_attributes");
            abort();
        }
        memcpy(_ret_keys[i], _out_keys[i].data, _out_keys[i].len);
        _ret_keys[i][_out_keys[i].len] = '\0';
    }
    _ret.keys = (void*)_ret_keys;
    _ret.values = _out.values;
    for (size_t i = 0; i < _out.len; ++i) {
        libqt_free(_out_keys[i].data);
    }
    free(_out.keys);
    return _ret;
}

void q_geolocation_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ data) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map data_ret;
    data_ret.len = data.len;
    data_ret.keys = (libqt_string*)malloc(data_ret.len * sizeof(libqt_string));
    if (data_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geolocation_set_extended_attributes\n");
        abort();
    }
    data_ret.values = (QVariant**)malloc(data_ret.len * sizeof(QVariant*));
    if (data_ret.values == NULL) {
        free(data_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geolocation_set_extended_attributes\n");
        abort();
    }
    const char** data_karr = (const char**)data.keys;
    libqt_string* data_kdest = (libqt_string*)data_ret.keys;
    QVariant** data_varr = (QVariant**)data.values;
    QVariant** data_vdest = (QVariant**)data_ret.values;
    for (size_t i = 0; i < data_ret.len; ++i) {
        data_kdest[i] = qstring(data_karr[i]);
        data_vdest[i] = data_varr[i];
    }
    QGeoLocation_SetExtendedAttributes((QGeoLocation*)self, data_ret);
    free(data_ret.keys);
    free(data_ret.values);
}

bool q_geolocation_is_empty(void* self) {
    return QGeoLocation_IsEmpty((QGeoLocation*)self);
}

void q_geolocation_delete(void* self) {
    QGeoLocation_Delete((QGeoLocation*)(self));
}
