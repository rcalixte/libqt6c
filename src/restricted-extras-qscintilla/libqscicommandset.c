#include "../libqsettings.hpp"
#include "libqscicommandset.hpp"
#include "libqscicommandset.h"

/// https://doc.qt.io/qt-6/qscicommandset.html

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#readSettings)
///
/// ``` QsciCommandSet* self, QSettings* qs ```
bool q_scicommandset_read_settings(void* self, void* qs) {
    return QsciCommandSet_ReadSettings((QsciCommandSet*)self, (QSettings*)qs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#writeSettings)
///
/// ``` QsciCommandSet* self, QSettings* qs ```
bool q_scicommandset_write_settings(void* self, void* qs) {
    return QsciCommandSet_WriteSettings((QsciCommandSet*)self, (QSettings*)qs);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#commands)
///
/// ``` QsciCommandSet* self ```
libqt_list /* of QsciCommand* */ q_scicommandset_commands(void* self) {
    libqt_list _arr = QsciCommandSet_Commands((QsciCommandSet*)self);
    return _arr;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#clearKeys)
///
/// ``` QsciCommandSet* self ```
void q_scicommandset_clear_keys(void* self) {
    QsciCommandSet_ClearKeys((QsciCommandSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#clearAlternateKeys)
///
/// ``` QsciCommandSet* self ```
void q_scicommandset_clear_alternate_keys(void* self) {
    QsciCommandSet_ClearAlternateKeys((QsciCommandSet*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#boundTo)
///
/// ``` QsciCommandSet* self, int key ```
QsciCommand* q_scicommandset_bound_to(void* self, int key) {
    return QsciCommandSet_BoundTo((QsciCommandSet*)self, key);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#find)
///
/// ``` QsciCommandSet* self, enum QsciCommand__Command command ```
QsciCommand* q_scicommandset_find(void* self, int64_t command) {
    return QsciCommandSet_Find((QsciCommandSet*)self, command);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#readSettings)
///
/// ``` QsciCommandSet* self, QSettings* qs, const char* prefix ```
bool q_scicommandset_read_settings2(void* self, void* qs, const char* prefix) {
    return QsciCommandSet_ReadSettings2((QsciCommandSet*)self, (QSettings*)qs, prefix);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qscicommandset.html#writeSettings)
///
/// ``` QsciCommandSet* self, QSettings* qs, const char* prefix ```
bool q_scicommandset_write_settings2(void* self, void* qs, const char* prefix) {
    return QsciCommandSet_WriteSettings2((QsciCommandSet*)self, (QSettings*)qs, prefix);
}
