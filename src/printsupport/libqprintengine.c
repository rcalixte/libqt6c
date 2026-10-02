#include "../libqvariant.hpp"
#include "libqprintengine.hpp"
#include "libqprintengine.h"

void q_printengine_delete(void* self) {
    QPrintEngine_Delete((QPrintEngine*)(self));
}
