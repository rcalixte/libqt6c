#include "../libqvariant.hpp"
#include "libqprintengine.hpp"
#include "libqprintengine.h"

void q_printengine_set_property(void* self, int64_t key, void* value) {
    QPrintEngine_SetProperty((QPrintEngine*)self, key, (QVariant*)value);
}

QVariant* q_printengine_property(void* self, int64_t key) {
    return QPrintEngine_Property((QPrintEngine*)self, key);
}

bool q_printengine_new_page(void* self) {
    return QPrintEngine_NewPage((QPrintEngine*)self);
}

bool q_printengine_abort(void* self) {
    return QPrintEngine_Abort((QPrintEngine*)self);
}

int32_t q_printengine_metric(void* self, int64_t param1) {
    return QPrintEngine_Metric((QPrintEngine*)self, param1);
}

int64_t q_printengine_printer_state(void* self) {
    return QPrintEngine_PrinterState((QPrintEngine*)self);
}

void q_printengine_operator_assign(void* self, void* param1) {
    QPrintEngine_OperatorAssign((QPrintEngine*)self, (QPrintEngine*)param1);
}

void q_printengine_delete(void* self) {
    QPrintEngine_Delete((QPrintEngine*)(self));
}
