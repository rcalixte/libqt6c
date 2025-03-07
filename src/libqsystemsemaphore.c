#include <string.h>
#include "libqsystemsemaphore.hpp"
#include "libqsystemsemaphore.h"

/// https://doc.qt.io/qt-6/qsystemsemaphore.html

/// q_systemsemaphore_new constructs a new QSystemSemaphore object.
///
/// ``` const char* key ```
QSystemSemaphore* q_systemsemaphore_new(const char* key) {
    return QSystemSemaphore_new(qstring(key));
}

/// q_systemsemaphore_new2 constructs a new QSystemSemaphore object.
///
/// ``` const char* key, int initialValue ```
QSystemSemaphore* q_systemsemaphore_new2(const char* key, int initialValue) {
    return QSystemSemaphore_new2(qstring(key), initialValue);
}

/// q_systemsemaphore_new3 constructs a new QSystemSemaphore object.
///
/// ``` const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode ```
QSystemSemaphore* q_systemsemaphore_new3(const char* key, int initialValue, int64_t mode) {
    return QSystemSemaphore_new3(qstring(key), initialValue, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText ```
const char* q_systemsemaphore_tr(const char* sourceText) {
    libqt_string _str = QSystemSemaphore_Tr(sourceText);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key ```
void q_systemsemaphore_set_key(void* self, const char* key) {
    QSystemSemaphore_SetKey((QSystemSemaphore*)self, qstring(key));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#key)
///
/// ``` QSystemSemaphore* self ```
const char* q_systemsemaphore_key(void* self) {
    libqt_string _str = QSystemSemaphore_Key((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#acquire)
///
/// ``` QSystemSemaphore* self ```
bool q_systemsemaphore_acquire(void* self) {
    return QSystemSemaphore_Acquire((QSystemSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// ``` QSystemSemaphore* self ```
bool q_systemsemaphore_release(void* self) {
    return QSystemSemaphore_Release((QSystemSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#error)
///
/// ``` QSystemSemaphore* self ```
int64_t q_systemsemaphore_error(void* self) {
    return QSystemSemaphore_Error((QSystemSemaphore*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#errorString)
///
/// ``` QSystemSemaphore* self ```
const char* q_systemsemaphore_error_string(void* self) {
    libqt_string _str = QSystemSemaphore_ErrorString((QSystemSemaphore*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation ```
const char* q_systemsemaphore_tr2(const char* sourceText, const char* disambiguation) {
    libqt_string _str = QSystemSemaphore_Tr2(sourceText, disambiguation);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qobject.html#tr)
///
/// ``` const char* sourceText, const char* disambiguation, int n ```
const char* q_systemsemaphore_tr3(const char* sourceText, const char* disambiguation, int n) {
    libqt_string _str = QSystemSemaphore_Tr3(sourceText, disambiguation, n);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue ```
void q_systemsemaphore_set_key2(void* self, const char* key, int initialValue) {
    QSystemSemaphore_SetKey2((QSystemSemaphore*)self, qstring(key), initialValue);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#setKey)
///
/// ``` QSystemSemaphore* self, const char* key, int initialValue, enum QSystemSemaphore__AccessMode mode ```
void q_systemsemaphore_set_key3(void* self, const char* key, int initialValue, int64_t mode) {
    QSystemSemaphore_SetKey3((QSystemSemaphore*)self, qstring(key), initialValue, mode);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qsystemsemaphore.html#release)
///
/// ``` QSystemSemaphore* self, int n ```
bool q_systemsemaphore_release1(void* self, int n) {
    return QSystemSemaphore_Release1((QSystemSemaphore*)self, n);
}

/// Delete this object from C++ memory.
///
/// ``` QSystemSemaphore* self ```
void q_systemsemaphore_delete(void* self) {
    QSystemSemaphore_Delete((QSystemSemaphore*)(self));
}