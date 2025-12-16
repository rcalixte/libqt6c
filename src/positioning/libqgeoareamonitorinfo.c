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
    return QGeoAreaMonitorInfo_NotificationParameters((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_set_notification_parameters(void* self, libqt_map /* of const char* to QVariant* */ parameters) {
    QGeoAreaMonitorInfo_SetNotificationParameters((QGeoAreaMonitorInfo*)self, parameters);
}

void q_geoareamonitorinfo_detach(void* self) {
    QGeoAreaMonitorInfo_Detach((QGeoAreaMonitorInfo*)self);
}

void q_geoareamonitorinfo_delete(void* self) {
    QGeoAreaMonitorInfo_Delete((QGeoAreaMonitorInfo*)(self));
}
