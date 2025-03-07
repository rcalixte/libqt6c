#include <string.h>
#include "../libqvariant.hpp"
#include "libqmediametadata.hpp"
#include "libqmediametadata.h"

/// https://doc.qt.io/qt-6/qmediametadata.html

/// q_mediametadata_new constructs a new QMediaMetaData object.
///
/// ``` QMediaMetaData* param1 ```
QMediaMetaData* q_mediametadata_new(void* param1) {
    return QMediaMetaData_new((QMediaMetaData*)param1);
}

/// q_mediametadata_new2 constructs a new QMediaMetaData object.
///
///
QMediaMetaData* q_mediametadata_new2() {
    return QMediaMetaData_new2();
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#value)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
QVariant* q_mediametadata_value(void* self, int64_t k) {
    return QMediaMetaData_Value((QMediaMetaData*)self, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#insert)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k, QVariant* value ```
void q_mediametadata_insert(void* self, int64_t k, void* value) {
    QMediaMetaData_Insert((QMediaMetaData*)self, k, (QVariant*)value);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#remove)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
void q_mediametadata_remove(void* self, int64_t k) {
    QMediaMetaData_Remove((QMediaMetaData*)self, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#keys)
///
/// ``` QMediaMetaData* self ```
libqt_list /* of int64_t */ q_mediametadata_keys(void* self) {
    libqt_list _arr = QMediaMetaData_Keys((QMediaMetaData*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#operator[])
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
QVariant* q_mediametadata_operator_subscript(void* self, int64_t k) {
    return QMediaMetaData_OperatorSubscript((QMediaMetaData*)self, k);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#clear)
///
/// ``` QMediaMetaData* self ```
void q_mediametadata_clear(void* self) {
    QMediaMetaData_Clear((QMediaMetaData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#isEmpty)
///
/// ``` QMediaMetaData* self ```
bool q_mediametadata_is_empty(void* self) {
    return QMediaMetaData_IsEmpty((QMediaMetaData*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#stringValue)
///
/// ``` QMediaMetaData* self, enum QMediaMetaData__Key k ```
const char* q_mediametadata_string_value(void* self, int64_t k) {
    libqt_string _str = QMediaMetaData_StringValue((QMediaMetaData*)self, k);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qmediametadata.html#metaDataKeyToString)
///
/// ``` enum QMediaMetaData__Key k ```
const char* q_mediametadata_meta_data_key_to_string(int64_t k) {
    libqt_string _str = QMediaMetaData_MetaDataKeyToString(k);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QMediaMetaData* self ```
void q_mediametadata_delete(void* self) {
    QMediaMetaData_Delete((QMediaMetaData*)(self));
}