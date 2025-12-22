#pragma once
#ifndef SRC_QT6C_LIBQLOGGINGCATEGORY_H
#define SRC_QT6C_LIBQLOGGINGCATEGORY_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html)

/// q_loggingcategory_new constructs a new QLoggingCategory object.
///
/// @param category const char*
///
QLoggingCategory* q_loggingcategory_new(const char* category);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
///
/// @param self QLoggingCategory*
///
bool q_loggingcategory_is_debug_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
///
/// @param self QLoggingCategory*
///
bool q_loggingcategory_is_info_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
///
/// @param self QLoggingCategory*
///
bool q_loggingcategory_is_warning_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
///
/// @param self QLoggingCategory*
///
bool q_loggingcategory_is_critical_enabled(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QLoggingCategory*
///
const char* q_loggingcategory_category_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
///
/// @param self QLoggingCategory*
///
QLoggingCategory* q_loggingcategory_operator_call(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
///
/// @param self QLoggingCategory*
///
const QLoggingCategory* q_loggingcategory_operator_call2(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
///
QLoggingCategory* q_loggingcategory_default_category();

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
///
/// @param rules const char*
///
void q_loggingcategory_set_filter_rules(const char* rules);

/// [Upstream resources](https://doc.qt.io/qt-6/qloggingcategory.html#dtor.QLoggingCategory)
///
/// Delete this object from C++ memory.
///
/// @param self QLoggingCategory*
///
void q_loggingcategory_delete(void* self);

#endif
