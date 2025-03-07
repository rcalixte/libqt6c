#include <string.h>
#include "libqloggingcategory.hpp"
#include "libqloggingcategory.h"

/// https://doc.qt.io/qt-6/qloggingcategory.html

/// q_loggingcategory_new constructs a new QLoggingCategory object.
///
/// ``` const char* category ```
QLoggingCategory* q_loggingcategory_new(const char* category) {
    return QLoggingCategory_new(category);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isDebugEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_debug_enabled(void* self) {
    return QLoggingCategory_IsDebugEnabled((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isInfoEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_info_enabled(void* self) {
    return QLoggingCategory_IsInfoEnabled((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isWarningEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_warning_enabled(void* self) {
    return QLoggingCategory_IsWarningEnabled((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#isCriticalEnabled)
///
/// ``` QLoggingCategory* self ```
bool q_loggingcategory_is_critical_enabled(void* self) {
    return QLoggingCategory_IsCriticalEnabled((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#categoryName)
///
/// ``` QLoggingCategory* self ```
const char* q_loggingcategory_category_name(void* self) {
    return QLoggingCategory_CategoryName((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator())
///
/// ``` QLoggingCategory* self ```
QLoggingCategory* q_loggingcategory_operator_call(void* self) {
    return QLoggingCategory_OperatorCall((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#operator())
///
/// ``` QLoggingCategory* self ```
QLoggingCategory* q_loggingcategory_operator_call2(void* self) {
    return QLoggingCategory_OperatorCall2((QLoggingCategory*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#defaultCategory)
///
///
QLoggingCategory* q_loggingcategory_default_category() {
    return QLoggingCategory_DefaultCategory();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qloggingcategory.html#setFilterRules)
///
/// ``` const char* rules ```
void q_loggingcategory_set_filter_rules(const char* rules) {
    QLoggingCategory_SetFilterRules(qstring(rules));
}

/// Delete this object from C++ memory.
///
/// ``` QLoggingCategory* self ```
void q_loggingcategory_delete(void* self) {
    QLoggingCategory_Delete((QLoggingCategory*)(self));
}