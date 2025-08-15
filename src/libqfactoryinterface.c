#include "libqfactoryinterface.hpp"
#include "libqfactoryinterface.h"

const char** q_factoryinterface_keys(void* self) {
    libqt_list _arr = QFactoryInterface_Keys((QFactoryInterface*)self);
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    if (_ret == NULL) {
        fprintf(stderr, "Memory allocation failed in q_factoryinterface_keys");
        abort();
    }
    for (size_t i = 0; i < _arr.len; ++i) {
        _ret[i] = qstring_to_char(_qstr[i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t i = 0; i < _arr.len; ++i) {
        libqt_string_free((libqt_string*)&_qstr[i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_factoryinterface_delete(void* self) {
    QFactoryInterface_Delete((QFactoryInterface*)(self));
}
