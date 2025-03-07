#include "../libqvariant.hpp"
#include "libqprintengine.hpp"
#include "libqprintengine.h"

/// https://doc.qt.io/qt-6/qprintengine.html

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#setProperty)
///
/// ``` QPrintEngine* self, enum QPrintEngine__PrintEnginePropertyKey key, QVariant* value ```
void q_printengine_set_property(void* self, int64_t key, void* value) {
    QPrintEngine_SetProperty((QPrintEngine*)self, key, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#property)
///
/// ``` QPrintEngine* self, enum QPrintEngine__PrintEnginePropertyKey key ```
QVariant* q_printengine_property(void* self, int64_t key) {
    return QPrintEngine_Property((QPrintEngine*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#newPage)
///
/// ``` QPrintEngine* self ```
bool q_printengine_new_page(void* self) {
    return QPrintEngine_NewPage((QPrintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#abort)
///
/// ``` QPrintEngine* self ```
bool q_printengine_abort(void* self) {
    return QPrintEngine_Abort((QPrintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#metric)
///
/// ``` QPrintEngine* self, enum QPaintDevice__PaintDeviceMetric param1 ```
int32_t q_printengine_metric(void* self, int64_t param1) {
    return QPrintEngine_Metric((QPrintEngine*)self, param1);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#printerState)
///
/// ``` QPrintEngine* self ```
int64_t q_printengine_printer_state(void* self) {
    return QPrintEngine_PrinterState((QPrintEngine*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qprintengine.html#operator=)
///
/// ``` QPrintEngine* self, QPrintEngine* param1 ```
void q_printengine_operator_assign(void* self, void* param1) {
    QPrintEngine_OperatorAssign((QPrintEngine*)self, (QPrintEngine*)param1);
}

/// Delete this object from C++ memory.
///
/// ``` QPrintEngine* self ```
void q_printengine_delete(void* self) {
    QPrintEngine_Delete((QPrintEngine*)(self));
}