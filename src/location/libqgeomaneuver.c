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
    // Convert libqt_map to QMap<QString,QVariant>
    libqt_map extendedAttributes_ret;
    extendedAttributes_ret.len = extendedAttributes.len;
    extendedAttributes_ret.keys = (libqt_string*)malloc(extendedAttributes_ret.len * sizeof(libqt_string));
    if (extendedAttributes_ret.keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map keys in q_geomaneuver_set_extended_attributes\n");
        abort();
    }
    extendedAttributes_ret.values = (QVariant**)malloc(extendedAttributes_ret.len * sizeof(QVariant*));
    if (extendedAttributes_ret.values == NULL) {
        free(extendedAttributes_ret.keys);
        fprintf(stderr, "Failed to allocate memory for map values in q_geomaneuver_set_extended_attributes\n");
        abort();
    }
    const char** extendedAttributes_karr = (const char**)extendedAttributes.keys;
    libqt_string* extendedAttributes_kdest = (libqt_string*)extendedAttributes_ret.keys;
    QVariant** extendedAttributes_varr = (QVariant**)extendedAttributes.values;
    QVariant** extendedAttributes_vdest = (QVariant**)extendedAttributes_ret.values;
    for (size_t i = 0; i < extendedAttributes_ret.len; ++i) {
        extendedAttributes_kdest[i] = qstring(extendedAttributes_karr[i]);
        extendedAttributes_vdest[i] = extendedAttributes_varr[i];
    }
    QGeoManeuver_SetExtendedAttributes((QGeoManeuver*)self, extendedAttributes_ret);
    free(extendedAttributes_ret.keys);
    free(extendedAttributes_ret.values);
}

libqt_map /* of const char* to QVariant* */ q_geomaneuver_extended_attributes(void* self) {
    // Convert QMap<QString,QVariant> to libqt_map
    libqt_map _out = QGeoManeuver_ExtendedAttributes((QGeoManeuver*)self);
    libqt_map _ret;
    _ret.len = _out.len;
    libqt_string* _out_keys = (libqt_string*)_out.keys;
    char** _ret_keys = (char**)malloc(_ret.len * sizeof(char*));
    if (_ret_keys == NULL) {
        fprintf(stderr, "Failed to allocate memory for map string keys in q_geomaneuver_extended_attributes\n");
        abort();
    }
    for (size_t i = 0; i < _ret.len; ++i) {
        _ret_keys[i] = (char*)malloc(_out_keys[i].len + 1);
        if (_ret_keys[i] == NULL) {
            for (size_t j = 0; j < i; j++) {
                libqt_free(_ret_keys[j]);
            }
            free(_ret_keys);
            fprintf(stderr, "Failed to allocate memory for map keys in q_geomaneuver_extended_attributes\n");
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

void q_geomaneuver_delete(void* self) {
    QGeoManeuver_Delete((QGeoManeuver*)(self));
}
