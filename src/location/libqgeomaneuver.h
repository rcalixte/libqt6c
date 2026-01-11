#pragma once
#ifndef SRC_LOCATION_QT6C_LIBQGEOMANEUVER_H
#define SRC_LOCATION_QT6C_LIBQGEOMANEUVER_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html)

/// q_geomaneuver_new constructs a new QGeoManeuver object.
///
QGeoManeuver* q_geomaneuver_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html)

/// q_geomaneuver_new2 constructs a new QGeoManeuver object.
///
/// @param other QGeoManeuver*
///
QGeoManeuver* q_geomaneuver_new2(void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#operator-eq)
///
/// @param self QGeoManeuver*
/// @param other QGeoManeuver*
///
void q_geomaneuver_operator_assign(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#swap)
///
/// @param self QGeoManeuver*
/// @param other QGeoManeuver*
///
void q_geomaneuver_swap(void* self, void* other);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#isValid)
///
/// @param self QGeoManeuver*
///
bool q_geomaneuver_is_valid(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setPosition)
///
/// @param self QGeoManeuver*
/// @param position QGeoCoordinate*
///
void q_geomaneuver_set_position(void* self, void* position);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#position)
///
/// @param self QGeoManeuver*
///
QGeoCoordinate* q_geomaneuver_position(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setInstructionText)
///
/// @param self QGeoManeuver*
/// @param instructionText const char*
///
void q_geomaneuver_set_instruction_text(void* self, const char* instructionText);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#instructionText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QGeoManeuver*
///
const char* q_geomaneuver_instruction_text(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDirection)
///
/// @param self QGeoManeuver*
/// @param direction enum QGeoManeuver__InstructionDirection
///
void q_geomaneuver_set_direction(void* self, int32_t direction);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#direction)
///
/// @param self QGeoManeuver*
///
/// @return enum QGeoManeuver__InstructionDirection
///
int32_t q_geomaneuver_direction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setTimeToNextInstruction)
///
/// @param self QGeoManeuver*
/// @param secs int
///
void q_geomaneuver_set_time_to_next_instruction(void* self, int secs);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#timeToNextInstruction)
///
/// @param self QGeoManeuver*
///
int32_t q_geomaneuver_time_to_next_instruction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setDistanceToNextInstruction)
///
/// @param self QGeoManeuver*
/// @param distance double
///
void q_geomaneuver_set_distance_to_next_instruction(void* self, double distance);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#distanceToNextInstruction)
///
/// @param self QGeoManeuver*
///
double q_geomaneuver_distance_to_next_instruction(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setWaypoint)
///
/// @param self QGeoManeuver*
/// @param coordinate QGeoCoordinate*
///
void q_geomaneuver_set_waypoint(void* self, void* coordinate);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#waypoint)
///
/// @param self QGeoManeuver*
///
QGeoCoordinate* q_geomaneuver_waypoint(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#setExtendedAttributes)
///
/// @param self QGeoManeuver*
/// @param extendedAttributes libqt_map /* of const char* to QVariant* */
///
void q_geomaneuver_set_extended_attributes(void* self, libqt_map /* of const char* to QVariant* */ extendedAttributes);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#extendedAttributes)
///
/// @warning Caller is responsible for freeing the returned memory using a similar sequence to:
/// ```c
/// // Example for freeing the returned map
/// for (size_t i = 0; i < map.len; ++i) {
///     libqt_free(map.keys[i]);
///     free(((QVariant*)map.values)[i]);
/// }
/// free(map.keys);
/// free(map.values);
/// ```
///
/// @param self QGeoManeuver*
///
libqt_map /* of const char* to QVariant* */ q_geomaneuver_extended_attributes(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#dtor.QGeoManeuver)
///
/// Delete this object from C++ memory.
///
/// @param self QGeoManeuver*
///
void q_geomaneuver_delete(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qgeomaneuver.html#public-types)

typedef enum {
    QGEOMANEUVER_INSTRUCTIONDIRECTION_NODIRECTION = 0,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONFORWARD = 1,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONBEARRIGHT = 2,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONLIGHTRIGHT = 3,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONRIGHT = 4,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONHARDRIGHT = 5,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONUTURNRIGHT = 6,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONUTURNLEFT = 7,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONHARDLEFT = 8,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONLEFT = 9,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONLIGHTLEFT = 10,
    QGEOMANEUVER_INSTRUCTIONDIRECTION_DIRECTIONBEARLEFT = 11
} QGeoManeuver__InstructionDirection;

#endif
