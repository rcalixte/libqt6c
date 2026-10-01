#include "../libqvariant.hpp"
#include "libqprintengine.hpp"
#include "libqprintengine.h"

void q_printengine_operator_assign(void* self, const void* param1) {
    QPrintEngine_OperatorAssign((QPrintEngine*)self, (QPrintEngine*)param1);
}

void q_printengine_delete(void* self) {
    QPrintEngine_Delete((QPrintEngine*)(self));
}
