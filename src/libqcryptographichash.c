#include "libqbytearrayview.hpp"
#include "libqiodevice.hpp"
#include "libqcryptographichash.hpp"
#include "libqcryptographichash.h"

/// https://doc.qt.io/qt-6/qcryptographichash.html

/// q_cryptographichash_new constructs a new QCryptographicHash object.
///
/// ``` enum QCryptographicHash__Algorithm method ```
QCryptographicHash* q_cryptographichash_new(int64_t method) {
    return QCryptographicHash_new(method);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#reset)
///
/// ``` QCryptographicHash* self ```
void q_cryptographichash_reset(void* self) {
    QCryptographicHash_Reset((QCryptographicHash*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, const char* data, int64_t length ```
void q_cryptographichash_add_data(void* self, const char* data, int64_t length) {
    QCryptographicHash_AddData((QCryptographicHash*)self, data, length);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, const char* data ```
void q_cryptographichash_add_data_with_data(void* self, const char* data) {
    libqt_strview data_strview = qstrview(data);
    QCryptographicHash_AddDataWithData((QCryptographicHash*)self, (QByteArrayView*)&data_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#addData)
///
/// ``` QCryptographicHash* self, QIODevice* device ```
bool q_cryptographichash_add_data_with_device(void* self, void* device) {
    return QCryptographicHash_AddDataWithDevice((QCryptographicHash*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#result)
///
/// ``` QCryptographicHash* self ```
char* q_cryptographichash_result(void* self) {
    libqt_string _str = QCryptographicHash_Result((QCryptographicHash*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#resultView)
///
/// ``` QCryptographicHash* self ```
const char* q_cryptographichash_result_view(void* self) {
    QByteArrayView* _view = QCryptographicHash_ResultView((QCryptographicHash*)self);
    libqt_strview _ret = {
        .ptr = QByteArrayView_Data(_view),
        .len = QByteArrayView_Size(_view),
    };
    return _ret.ptr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hash)
///
/// ``` const char* data, enum QCryptographicHash__Algorithm method ```
char* q_cryptographichash_hash(const char* data, int64_t method) {
    libqt_strview data_strview = qstrview(data);
    libqt_string _str = QCryptographicHash_Hash((QByteArrayView*)&data_strview, method);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qcryptographichash.html#hashLength)
///
/// ``` enum QCryptographicHash__Algorithm method ```
int32_t q_cryptographichash_hash_length(int64_t method) {
    return QCryptographicHash_HashLength(method);
}

/// Delete this object from C++ memory.
///
/// ``` QCryptographicHash* self ```
void q_cryptographichash_delete(void* self) {
    QCryptographicHash_Delete((QCryptographicHash*)(self));
}