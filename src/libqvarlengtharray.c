#include "libqvarlengtharray.hpp"
#include "libqvarlengtharray.h"

int64_t q_vlabasebase_capacity(void* self) {
    return QVLABaseBase_Capacity((QVLABaseBase*)self);
}

int64_t q_vlabasebase_size(void* self) {
    return QVLABaseBase_Size((QVLABaseBase*)self);
}

bool q_vlabasebase_empty(void* self) {
    return QVLABaseBase_Empty((QVLABaseBase*)self);
}
