#include "../libqdatetime.hpp"
#include "libqgeoshape.hpp"
#include "../libqvariant.hpp"
#include "libqgeoareamonitorinfo.hpp"
#include "libqgeoareamonitorinfo.h"

QGeoAreaMonitorInfo* q_geoareamonitorinfo_new() {
    return QGeoAreaMonitorInfo_new();
}

QGeoAreaMonitorInfo* q_geoareamonitorinfo_new2(void* other) {
    return QGeoAreaMonitorInfo_new2((QGeoAreaMonitorInfo*)other);
}

QGeoAreaMonitorInfo* q_geoareamonitorinfo_new3(const char* name) {
    return QGeoAreaMonitorInfo_new3(qstring(name));
}

void q_geoareamonitorinfo_operator_assign(void* self, void* other) {
    QGeoAreaMonitorInfo_OperatorAssign((QGeoAreaMonitorInfo*)self, (QGeoAreaMonitorInfo*)other);
}

void q_geoareamonitorinfo_swap(void* self, void* other) {
    QGeoAreaMonitorInfo_Swap((QGeoAreaMonitorInfo*)self, (QGeoAreaMonitorInfo*)other);
}

const char* q_geoareamonitorinfo_name(void* self) {
    libqt_string _str = QGeoAreaMonitorInfo_Name((QGeoAreaMonitorInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geoareamonitorinfo_set_name(void* self, const char* name) {
    QGeoAreaMonitorInfo_SetName((QGeoAreaMonitorInfo*)self, qstring(name));
}

const char* q_geoareamonitorinfo_identifier(void* self) {
    libqt_string _str = QGeoAreaMonitorInfo_Identifier((QGeoAreaMonitorInfo*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_geoareamonitorinfo_is_valid(void* self) {
    return QGeoAreaMonitorInfo_IsValid((QGeoAreaMonitorInfo*)self);
}

QGeoShape* q_geoareamonitorinfo_area(void* self) {
    return QGeoAreaMonitorInfo_Area((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_set_area(void* self, void* newShape) {
    QGeoAreaMonitorInfo_SetArea((QGeoAreaMonitorInfo*)self, (QGeoShape*)newShape);
}

QDateTime* q_geoareamonitorinfo_expiration(void* self) {
    return QGeoAreaMonitorInfo_Expiration((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_set_expiration(void* self, void* expiry) {
    QGeoAreaMonitorInfo_SetExpiration((QGeoAreaMonitorInfo*)self, (QDateTime*)expiry);
}

bool q_geoareamonitorinfo_is_persistent(void* self) {
    return QGeoAreaMonitorInfo_IsPersistent((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_set_persistent(void* self, bool isPersistent) {
    QGeoAreaMonitorInfo_SetPersistent((QGeoAreaMonitorInfo*)self, isPersistent);
}

libqt_map /* of const char* to QVariant* */ q_geoareamonitorinfo_notification_parameters(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QGeoAreaMonitorInfo_NotificationParameters((QGeoAreaMonitorInfo*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_geoareamonitorinfo_notification_parameters\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_geoareamonitorinfo_notification_parameters\n");
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

void q_geoareamonitorinfo_set_notification_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map parameters_ret;
    parameters_ret.len = parameters.len;
    parameters_ret.keys = (libqt_string*)malloc(parameters_ret.len * sizeof(libqt_string));
    if (parameters_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geoareamonitorinfo_set_notification_parameters\n");
        abort();
    }
    parameters_ret.values = (QVariant**)malloc(parameters_ret.len * sizeof(QVariant*));
    if (parameters_ret.values == NULL) {
        free(parameters_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geoareamonitorinfo_set_notification_parameters\n");
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
    QGeoAreaMonitorInfo_SetNotificationParameters((QGeoAreaMonitorInfo*)self, parameters_ret);
    free(parameters_ret.keys);
    free(parameters_ret.values);
}

void q_geoareamonitorinfo_detach(void* self) {
    QGeoAreaMonitorInfo_Detach((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_delete(void* self) {
    QGeoAreaMonitorInfo_Delete((QGeoAreaMonitorInfo*)(self));
}
