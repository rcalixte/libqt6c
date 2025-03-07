#include <qvarlengtharray.h>
#include "libqvarlengtharray.hpp"
#include "libqvarlengtharray.hxx"

ptrdiff_t QVLABaseBase_Capacity(const QVLABaseBase* self) {
    return static_cast<ptrdiff_t>(self->capacity());
}

ptrdiff_t QVLABaseBase_Size(const QVLABaseBase* self) {
    return static_cast<ptrdiff_t>(self->size());
}

bool QVLABaseBase_Empty(const QVLABaseBase* self) {
    return self->empty();
}
