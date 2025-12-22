#include "../libqvariant.hpp"
#include "libqgeomaneuver.hpp"
#include "libqgeomaneuver.h"

QGeoManeuver* q_geomaneuver_new() {
    return QGeoManeuver_new();
}

QGeoManeuver* q_geomaneuver_new2(void* other) {
    return QGeoManeuver_new2((QGeoManeuver*)other);
}

void q_geomaneuver_operator_assign(void* self, void* other) {
    QGeoManeuver_OperatorAssign((QGeoManeuver*)self, (QGeoManeuver*)other);
}

void q_geomaneuver_swap(void* self, void* other) {
    QGeoManeuver_Swap((QGeoManeuver*)self, (QGeoManeuver*)other);
}

bool q_geomaneuver_is_valid(void* self) {
    return QGeoManeuver_IsValid((QGeoManeuver*)self);
}

void q_geomaneuver_set_position(void* self, void* position) {
    QGeoManeuver_SetPosition((QGeoManeuver*)self, (QGeoCoordinate*)position);
}

QGeoCoordinate* q_geomaneuver_position(void* self) {
    return QGeoManeuver_Position((QGeoManeuver*)self);
}

void q_geomaneuver_set_instruction_text(void* self, const char* instructionText) {
    QGeoManeuver_SetInstructionText((QGeoManeuver*)self, qstring(instructionText));
}

const char* q_geomaneuver_instruction_text(void* self) {
    libqt_string _str = QGeoManeuver_InstructionText((QGeoManeuver*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_geomaneuver_set_direction(void* self, int32_t direction) {
    QGeoManeuver_SetDirection((QGeoManeuver*)self, direction);
}

int32_t q_geomaneuver_direction(void* self) {
    return QGeoManeuver_Direction((QGeoManeuver*)self);
}

void q_geomaneuver_set_time_to_next_instruction(void* self, int secs) {
    QGeoManeuver_SetTimeToNextInstruction((QGeoManeuver*)self, secs);
}

int32_t q_geomaneuver_time_to_next_instruction(void* self) {
    return QGeoManeuver_TimeToNextInstruction((QGeoManeuver*)self);
}

void q_geomaneuver_set_distance_to_next_instruction(void* self, double distance) {
    QGeoManeuver_SetDistanceToNextInstruction((QGeoManeuver*)self, distance);
}

double q_geomaneuver_distance_to_next_instruction(void* self) {
    return QGeoManeuver_DistanceToNextInstruction((QGeoManeuver*)self);
}

void q_geomaneuver_set_waypoint(void* self, void* coordinate) {
    QGeoManeuver_SetWaypoint((QGeoManeuver*)self, (QGeoCoordinate*)coordinate);
}

QGeoCoordinate* q_geomaneuver_waypoint(void* self) {
    return QGeoManeuver_Waypoint((QGeoManeuver*)self);
}

void q_geomaneuver_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ extendedAttributes) {
    QGeoManeuver_SetExtendedAttributes((QGeoManeuver*)self, extendedAttributes);
}

libqt_map /* of const char* to QVariant* */ q_geomaneuver_extended_attributes(void* self) {
    return QGeoManeuver_ExtendedAttributes((QGeoManeuver*)self);
}

void q_geomaneuver_delete(void* self) {
    QGeoManeuver_Delete((QGeoManeuver*)(self));
}
