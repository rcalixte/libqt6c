#include "libqvarlengtharray.hpp"
#include "libqvarlengtharray.h"

intptr_t q_vlabasebase_capacity(void* self) {
    return QVLABaseBase_Capacity((QVLABaseBase*)self);
}

intptr_t q_vlabasebase_size(void* self) {
    return QVLABaseBase_Size((QVLABaseBase*)self);
}

bool q_vlabasebase_empty(void* self) {
    return QVLABaseBase_Empty((QVLABaseBase*)self);
}
