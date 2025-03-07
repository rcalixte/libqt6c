#include <string.h>
#include "libqscicommand.hpp"
#include "libqscicommand.h"

/// https://doc.qt.io/qt-6/qscicommand.html

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#command)
///
/// ``` QsciCommand* self ```
int64_t q_scicommand_command(void* self) {
    return QsciCommand_Command((QsciCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#execute)
///
/// ``` QsciCommand* self ```
void q_scicommand_execute(void* self) {
    QsciCommand_Execute((QsciCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#setKey)
///
/// ``` QsciCommand* self, int key ```
void q_scicommand_set_key(void* self, int key) {
    QsciCommand_SetKey((QsciCommand*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#setAlternateKey)
///
/// ``` QsciCommand* self, int altkey ```
void q_scicommand_set_alternate_key(void* self, int altkey) {
    QsciCommand_SetAlternateKey((QsciCommand*)self, altkey);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#key)
///
/// ``` QsciCommand* self ```
int32_t q_scicommand_key(void* self) {
    return QsciCommand_Key((QsciCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#alternateKey)
///
/// ``` QsciCommand* self ```
int32_t q_scicommand_alternate_key(void* self) {
    return QsciCommand_AlternateKey((QsciCommand*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#validKey)
///
/// ``` int key ```
bool q_scicommand_valid_key(int key) {
    return QsciCommand_ValidKey(key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommand.html#description)
///
/// ``` QsciCommand* self ```
const char* q_scicommand_description(void* self) {
    libqt_string _str = QsciCommand_Description((QsciCommand*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// Delete this object from C++ memory.
///
/// ``` QsciCommand* self ```
void q_scicommand_delete(void* self) {
    QsciCommand_Delete((QsciCommand*)(self));
}