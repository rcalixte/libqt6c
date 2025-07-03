#include "libqobject.hpp"
#include <string.h>
#include "libqgenericpluginfactory.hpp"
#include "libqgenericpluginfactory.h"

QGenericPluginFactory* q_genericpluginfactory_new(void* other) {
    return QGenericPluginFactory_new((QGenericPluginFactory*)other);
}

QGenericPluginFactory* q_genericpluginfactory_new2(void* other) {
    return QGenericPluginFactory_new2((QGenericPluginFactory*)other);
}

void q_genericpluginfactory_copy_assign(void* self, void* other) {
    QGenericPluginFactory_CopyAssign((QGenericPluginFactory*)self, (QGenericPluginFactory*)other);
}

void q_genericpluginfactory_move_assign(void* self, void* other) {
    QGenericPluginFactory_MoveAssign((QGenericPluginFactory*)self, (QGenericPluginFactory*)other);
}

const char** q_genericpluginfactory_keys() {
    libqt_list _arr = QGenericPluginFactory_Keys();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

QObject* q_genericpluginfactory_create(const char* param1, const char* param2) {
    return QGenericPluginFactory_Create(qstring(param1), qstring(param2));
}

void q_genericpluginfactory_delete(void* self) {
    QGenericPluginFactory_Delete((QGenericPluginFactory*)(self));
}
