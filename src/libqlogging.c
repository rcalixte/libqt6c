#include "libqdebug.hpp"
#include "libqloggingcategory.hpp"
#include "libqlogging.hpp"
#include "libqlogging.h"

QMessageLogContext* q_messagelogcontext_new() {
    return QMessageLogContext_new();
}

QMessageLogContext* q_messagelogcontext_new2(const char* fileName, int lineNumber, const char* functionName, const char* categoryName) {
    return QMessageLogContext_new2(fileName, lineNumber, functionName, categoryName);
}

void q_messagelogcontext_delete(void* self) {
    QMessageLogContext_Delete((QMessageLogContext*)(self));
}

QMessageLogger* q_messagelogger_new() {
    return QMessageLogger_new();
}

QMessageLogger* q_messagelogger_new2(const char* file, int line, const char* function) {
    return QMessageLogger_new2(file, line, function);
}

QMessageLogger* q_messagelogger_new3(const char* file, int line, const char* function, const char* category) {
    return QMessageLogger_new3(file, line, function, category);
}

QDebug* q_messagelogger_debug(void* self) {
    return QMessageLogger_Debug((QMessageLogger*)self);
}

QDebug* q_messagelogger_debug2(void* self, void* cat) {
    return QMessageLogger_Debug2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_info(void* self) {
    return QMessageLogger_Info((QMessageLogger*)self);
}

QDebug* q_messagelogger_info2(void* self, void* cat) {
    return QMessageLogger_Info2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_warning(void* self) {
    return QMessageLogger_Warning((QMessageLogger*)self);
}

QDebug* q_messagelogger_warning2(void* self, void* cat) {
    return QMessageLogger_Warning2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_critical(void* self) {
    return QMessageLogger_Critical((QMessageLogger*)self);
}

QDebug* q_messagelogger_critical2(void* self, void* cat) {
    return QMessageLogger_Critical2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_fatal(void* self) {
    return QMessageLogger_Fatal((QMessageLogger*)self);
}

QDebug* q_messagelogger_fatal2(void* self, void* cat) {
    return QMessageLogger_Fatal2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QNoDebug* q_messagelogger_no_debug(void* self) {
    return QMessageLogger_NoDebug((QMessageLogger*)self);
}

void q_messagelogger_delete(void* self) {
    QMessageLogger_Delete((QMessageLogger*)(self));
}
