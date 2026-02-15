#include "libqabstractnativeeventfilter.hpp"
#include "libqabstractnativeeventfilter.h"

QAbstractNativeEventFilter* q_abstractnativeeventfilter_new() {
    return QAbstractNativeEventFilter_new();
}

bool q_abstractnativeeventfilter_native_event_filter(void* self, char* eventType, void* message, intptr_t* result) {
    return QAbstractNativeEventFilter_NativeEventFilter((QAbstractNativeEventFilter*)self, qstring(eventType), message, result);
}

void q_abstractnativeeventfilter_on_native_event_filter(void* self, bool (*callback)(void*, libqt_string, void*, intptr_t*)) {
    QAbstractNativeEventFilter_OnNativeEventFilter((QAbstractNativeEventFilter*)self, (intptr_t)callback);
}

bool q_abstractnativeeventfilter_qbase_native_event_filter(void* self, char* eventType, void* message, intptr_t* result) {
    return QAbstractNativeEventFilter_QBaseNativeEventFilter((QAbstractNativeEventFilter*)self, qstring(eventType), message, result);
}

void q_abstractnativeeventfilter_delete(void* self) {
    QAbstractNativeEventFilter_Delete((QAbstractNativeEventFilter*)(self));
}
