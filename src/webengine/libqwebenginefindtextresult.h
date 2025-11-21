#pragma once
#ifndef SRC_WEBENGINE_QT6C_LIBQWEBENGINEFINDTEXTRESULT_H
#define SRC_WEBENGINE_QT6C_LIBQWEBENGINEFINDTEXTRESULT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://doc.qt.io/qt-6/qwebenginefindtextresult.html

/// q_webenginefindtextresult_new constructs a new QWebEngineFindTextResult object.
///
QWebEngineFindTextResult* q_webenginefindtextresult_new();

/// q_webenginefindtextresult_new2 constructs a new QWebEngineFindTextResult object.
///
/// @param other QWebEngineFindTextResult*
QWebEngineFindTextResult* q_webenginefindtextresult_new2(void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
///
/// @param self QWebEngineFindTextResult*
int32_t q_webenginefindtextresult_number_of_matches(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
///
/// @param self QWebEngineFindTextResult*
int32_t q_webenginefindtextresult_active_match(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator-eq)
///
/// @param self QWebEngineFindTextResult*
/// @param other QWebEngineFindTextResult*
void q_webenginefindtextresult_operator_assign(void* self, void* other);

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#dtor.QWebEngineFindTextResult)
///
/// Delete this object from C++ memory.
///
/// @param self QWebEngineFindTextResult*
void q_webenginefindtextresult_delete(void* self);

#endif
