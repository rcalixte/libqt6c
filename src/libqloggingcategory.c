#include "libqloggingcategory.hpp"
#include "libqloggingcategory.h"

QLoggingCategory* q_loggingcategory_new(const char* category) {
    return QLoggingCategory_new(category);
}

bool q_loggingcategory_is_debug_enabled(void* self) {
    return QLoggingCategory_IsDebugEnabled((QLoggingCategory*)self);
}

bool q_loggingcategory_is_info_enabled(void* self) {
    return QLoggingCategory_IsInfoEnabled((QLoggingCategory*)self);
}

bool q_loggingcategory_is_warning_enabled(void* self) {
    return QLoggingCategory_IsWarningEnabled((QLoggingCategory*)self);
}

bool q_loggingcategory_is_critical_enabled(void* self) {
    return QLoggingCategory_IsCriticalEnabled((QLoggingCategory*)self);
}

const char* q_loggingcategory_category_name(void* self) {
    return QLoggingCategory_CategoryName((QLoggingCategory*)self);
}

QLoggingCategory* q_loggingcategory_operator_call(void* self) {
    return QLoggingCategory_OperatorCall((QLoggingCategory*)self);
}

const QLoggingCategory* q_loggingcategory_operator_call2(void* self) {
    return QLoggingCategory_OperatorCall2((QLoggingCategory*)self);
}

QLoggingCategory* q_loggingcategory_default_category() {
    return QLoggingCategory_DefaultCategory();
}

void q_loggingcategory_set_filter_rules(const char* rules) {
    QLoggingCategory_SetFilterRules(qstring(rules));
}

void q_loggingcategory_delete(void* self) {
    QLoggingCategory_Delete((QLoggingCategory*)(self));
}
