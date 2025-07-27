#include "libqfactoryinterface.hpp"
#include "libqfactoryinterface.h"

const char** q_factoryinterface_keys(void* self) {
    libqt_list _arr = QFactoryInterface_Keys((QFactoryInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_factoryinterface_delete(void* self) {
    QFactoryInterface_Delete((QFactoryInterface*)(self));
}
