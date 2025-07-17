#pragma once
#ifndef SRCQT6C_LIBQLOGGINGCATEGORY_H
#define SRCQT6C_LIBQLOGGINGCATEGORY_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qloggingcategory.html

/// q_loggingcategory_new constructs a new QLoggingCategory object.
///
/// ``` const char* category ```
QLoggingCategory* q_loggingcategory_new(const char* category);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_debug_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_info_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_warning_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_critical_enabled(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
///
/// ``` QLoggingCategory* self ```
const char* q_loggingcategory_category_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
///
/// ``` QLoggingCategory* self ```
QLoggingCategory* q_loggingcategory_operator_call(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator-28-29)
///
/// ``` QLoggingCategory* self ```
const QLoggingCategory* q_loggingcategory_operator_call2(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
///
///
QLoggingCategory* q_loggingcategory_default_category();

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
///
/// ``` const char* rules ```
void q_loggingcategory_set_filter_rules(const char* rules);

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#dtor.QLoggingCategory)
///
/// Delete this object from C++ memory.
///
/// ``` QLoggingCategory* self ```
void q_loggingcategory_delete(void* self);

#endif
