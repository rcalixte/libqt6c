#pragma once
#ifndef SRC_QT6C_LIBQABSTRACTNATIVEEVENTFILTER_H
#define SRC_QT6C_LIBQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html)

/// q_abstractnativeeventfilter_new constructs a new QAbstractNativeEventFilter object.
///
QAbstractNativeEventFilter* q_abstractnativeeventfilter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// @param self QAbstractNativeEventFilter*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractnativeeventfilter_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// Allows for overriding the related default method
///
/// @param self QAbstractNativeEventFilter*
/// @param callback bool func(QAbstractNativeEventFilter* self, const char* eventType, void* message, intptr_t* result)
///
void q_abstractnativeeventfilter_on_native_event_filter(void* self, bool (*callback)(void*, const char*, void*, intptr_t*));

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// Base class method implementation
///
/// @param self QAbstractNativeEventFilter*
/// @param eventType const char*
/// @param message void*
/// @param result intptr_t*
///
bool q_abstractnativeeventfilter_qbase_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);

/// [Upstream resources](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#dtor.QAbstractNativeEventFilter)
///
/// Delete this object from C++ memory.
///
/// @param self QAbstractNativeEventFilter*
///
void q_abstractnativeeventfilter_delete(void* self);

#endif
