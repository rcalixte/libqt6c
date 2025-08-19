#include "libqcborcommon.hpp"
#include "libqcborcommon.h"

int32_t q_cborerror_to_q_cbor_error___code(void* self) {
    return QCborError_ToQCborError__Code((QCborError*)self);
}

const char* q_cborerror_to_string(void* self) {
    libqt_string _str = QCborError_ToString((QCborError*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_cborerror_delete(void* self) {
    QCborError_Delete((QCborError*)(self));
}
