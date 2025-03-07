#include "libqobject.hpp"
#include <string.h>
#include "libqgenericpluginfactory.hpp"
#include "libqgenericpluginfactory.h"

/// https://doc.qt.io/qt-6/qgenericpluginfactory.html

/// q_genericpluginfactory_new constructs a new QGenericPluginFactory object.
///
/// ``` QGenericPluginFactory* other ```
QGenericPluginFactory* q_genericpluginfactory_new(void* other) {
    return QGenericPluginFactory_new((QGenericPluginFactory*)other);
}

/// q_genericpluginfactory_new2 constructs a new QGenericPluginFactory object and invalidates the source QGenericPluginFactory object.
///
/// ``` QGenericPluginFactory* other ```
QGenericPluginFactory* q_genericpluginfactory_new2(void* other) {
    return QGenericPluginFactory_new2((QGenericPluginFactory*)other);
}

/// q_genericpluginfactory_copy_assign shallow copies `other` into `self`.
///
/// ``` QGenericPluginFactory* self, QGenericPluginFactory* other ```
void q_genericpluginfactory_copy_assign(void* self, void* other) {
    QGenericPluginFactory_CopyAssign((QGenericPluginFactory*)self, (QGenericPluginFactory*)other);
}

/// q_genericpluginfactory_move_assign moves `other` into `self` and invalidates `other`.
///
/// ``` QGenericPluginFactory* self, QGenericPluginFactory* other ```
void q_genericpluginfactory_move_assign(void* self, void* other) {
    QGenericPluginFactory_MoveAssign((QGenericPluginFactory*)self, (QGenericPluginFactory*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#keys)
///
///
const char** q_genericpluginfactory_keys() {
    libqt_list _arr = QGenericPluginFactory_Keys();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    free((void*)_arr.data.ptr);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qgenericpluginfactory.html#create)
///
/// ``` const char* param1, const char* param2 ```
QObject* q_genericpluginfactory_create(const char* param1, const char* param2) {
    return QGenericPluginFactory_Create(qstring(param1), qstring(param2));
}

/// Delete this object from C++ memory.
///
/// ``` QGenericPluginFactory* self ```
void q_genericpluginfactory_delete(void* self) {
    QGenericPluginFactory_Delete((QGenericPluginFactory*)(self));
}