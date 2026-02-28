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

int32_t q_messagelogcontext_version(void* self) {
    return QMessageLogContext_Version((QMessageLogContext*)self);
}

void q_messagelogcontext_set_version(void* self, int version) {
    QMessageLogContext_SetVersion((QMessageLogContext*)self, version);
}

int32_t q_messagelogcontext_line(void* self) {
    return QMessageLogContext_Line((QMessageLogContext*)self);
}

void q_messagelogcontext_set_line(void* self, int line) {
    QMessageLogContext_SetLine((QMessageLogContext*)self, line);
}

const char* q_messagelogcontext_file(void* self) {
    return QMessageLogContext_File((QMessageLogContext*)self);
}

void q_messagelogcontext_set_file(void* self, const char* file) {
    QMessageLogContext_SetFile((QMessageLogContext*)self, file);
}

const char* q_messagelogcontext_function(void* self) {
    return QMessageLogContext_Function((QMessageLogContext*)self);
}

void q_messagelogcontext_set_function(void* self, const char* function) {
    QMessageLogContext_SetFunction((QMessageLogContext*)self, function);
}

const char* q_messagelogcontext_category(void* self) {
    return QMessageLogContext_Category((QMessageLogContext*)self);
}

void q_messagelogcontext_set_category(void* self, const char* category) {
    QMessageLogContext_SetCategory((QMessageLogContext*)self, category);
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

QDebug* q_messagelogger_debug3(void* self, QLoggingCategory* (*catFunc)()) {
    return QMessageLogger_Debug3((QMessageLogger*)self, (intptr_t)catFunc);
}

QDebug* q_messagelogger_info(void* self) {
    return QMessageLogger_Info((QMessageLogger*)self);
}

QDebug* q_messagelogger_info2(void* self, void* cat) {
    return QMessageLogger_Info2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_info3(void* self, QLoggingCategory* (*catFunc)()) {
    return QMessageLogger_Info3((QMessageLogger*)self, (intptr_t)catFunc);
}

QDebug* q_messagelogger_warning(void* self) {
    return QMessageLogger_Warning((QMessageLogger*)self);
}

QDebug* q_messagelogger_warning2(void* self, void* cat) {
    return QMessageLogger_Warning2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_warning3(void* self, QLoggingCategory* (*catFunc)()) {
    return QMessageLogger_Warning3((QMessageLogger*)self, (intptr_t)catFunc);
}

QDebug* q_messagelogger_critical(void* self) {
    return QMessageLogger_Critical((QMessageLogger*)self);
}

QDebug* q_messagelogger_critical2(void* self, void* cat) {
    return QMessageLogger_Critical2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_critical3(void* self, QLoggingCategory* (*catFunc)()) {
    return QMessageLogger_Critical3((QMessageLogger*)self, (intptr_t)catFunc);
}

QDebug* q_messagelogger_fatal(void* self) {
    return QMessageLogger_Fatal((QMessageLogger*)self);
}

QDebug* q_messagelogger_fatal2(void* self, void* cat) {
    return QMessageLogger_Fatal2((QMessageLogger*)self, (QLoggingCategory*)cat);
}

QDebug* q_messagelogger_fatal3(void* self, QLoggingCategory* (*catFunc)()) {
    return QMessageLogger_Fatal3((QMessageLogger*)self, (intptr_t)catFunc);
}

QNoDebug* q_messagelogger_no_debug(void* self) {
    return QMessageLogger_NoDebug((QMessageLogger*)self);
}

void q_messagelogger_delete(void* self) {
    QMessageLogger_Delete((QMessageLogger*)(self));
}
