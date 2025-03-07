#include <string.h>
#include "libqcborcommon.hpp"
#include "libqcborcommon.h"

/// https://doc.qt.io/qt-6/qcborerror.html

/// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#operator QCborError::Code)
///
/// ``` QCborError* self ```
int64_t q_cborerror_to_q_cbor_error___code(void* self) {
    return QCborError_ToQCborError__Code((QCborError*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcborerror.html#toString)
///
/// ``` QCborError* self ```
const char* q_cborerror_to_string(void* self) {
    libqt_string _str = QCborError_ToString((QCborError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QCborError* self ```
void q_cborerror_delete(void* self) {
    QCborError_Delete((QCborError*)(self));
}