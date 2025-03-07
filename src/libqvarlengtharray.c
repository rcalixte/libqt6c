#include "libqvarlengtharray.hpp"
#include "libqvarlengtharray.h"

/// https://doc.qt.io/qt-6/qvlabasebase.html

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#capacity)
///
/// ``` QVLABaseBase* self ```
int64_t q_vlabasebase_capacity(void* self) {
    return QVLABaseBase_Capacity((QVLABaseBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#size)
///
/// ``` QVLABaseBase* self ```
int64_t q_vlabasebase_size(void* self) {
    return QVLABaseBase_Size((QVLABaseBase*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qvlabasebase.html#empty)
///
/// ``` QVLABaseBase* self ```
bool q_vlabasebase_empty(void* self) {
    return QVLABaseBase_Empty((QVLABaseBase*)self);
}
