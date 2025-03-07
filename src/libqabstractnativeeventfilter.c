#include "libqabstractnativeeventfilter.hpp"
#include "libqabstractnativeeventfilter.h"

/// https://doc.qt.io/qt-6/qabstractnativeeventfilter.html

/// q_abstractnativeeventfilter_new constructs a new QAbstractNativeEventFilter object.
///
///
QAbstractNativeEventFilter* q_abstractnativeeventfilter_new() {
    return QAbstractNativeEventFilter_new();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qabstractnativeeventfilter.html#nativeEventFilter)
///
/// ``` QAbstractNativeEventFilter* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractnativeeventfilter_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractNativeEventFilter_NativeEventFilter((QAbstractNativeEventFilter*)self, qstring(eventType), message, result);
}

/// Allows for overriding the related default method
///
/// ``` QAbstractNativeEventFilter* self, bool (*slot)(QAbstractNativeEventFilter*, const char*, void*, intptr_t*) ```
void q_abstractnativeeventfilter_on_native_event_filter(void* self, bool (*slot)(void*, const char*, void*, intptr_t*)) {
    QAbstractNativeEventFilter_OnNativeEventFilter((QAbstractNativeEventFilter*)self, (intptr_t)slot);
}

/// Base class method implementation
///
/// ``` QAbstractNativeEventFilter* self, const char* eventType, void* message, intptr_t* result ```
bool q_abstractnativeeventfilter_qbase_native_event_filter(void* self, const char* eventType, void* message, intptr_t* result) {
    return QAbstractNativeEventFilter_QBaseNativeEventFilter((QAbstractNativeEventFilter*)self, qstring(eventType), message, result);
}

/// Delete this object from C++ memory.
///
/// ``` QAbstractNativeEventFilter* self ```
void q_abstractnativeeventfilter_delete(void* self) {
    QAbstractNativeEventFilter_Delete((QAbstractNativeEventFilter*)(self));
}