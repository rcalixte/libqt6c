#pragma once
#ifndef SRCQT6C_LIBQABSTRACTNATIVEEVENTFILTER_H
#define SRCQT6C_LIBQABSTRACTNATIVEEVENTFILTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qabstractnativeeventfilter.html

/// q_abstractnativeeventfilter_new constructs a new QAbstractNativeEventFilter object.
///
///
QAbstractNativeEventFilter* q_abstractnativeeventfilter_new();

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// ``` QAbstractNativeEventFilter* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractnativeeventfilter_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// Allows for overriding the related default method
///
/// ``` QAbstractNativeEventFilter* self, bool (*slot)(QAbstractNativeEventFilter*, const char*, void*, intptr_t*) ```
void q_abstractnativeeventfilter_on_native_event_filter(void* self, bool (*slot)(void*, const char*, void*, intptr_t*));

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// Base class method implementation
///
/// ``` QAbstractNativeEventFilter* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractnativeeventfilter_qbase_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result);

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#dtor.QAbstractNativeEventFilter)
///
/// Delete this object from C++ memory.
///
/// ``` QAbstractNativeEventFilter* self ```
void q_abstractnativeeventfilter_delete(void* self);

#endif
