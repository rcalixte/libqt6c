#include "libqwebenginefindtextresult.hpp"
#include "libqwebenginefindtextresult.h"

/// https://doc.qt.io/qt-6/qwebenginefindtextresult.html

/// q_webenginefindtextresult_new constructs a new QWebEngineFindTextResult object.
///
///
QWebEngineFindTextResult* q_webenginefindtextresult_new() {
    return QWebEngineFindTextResult_new();
}

/// q_webenginefindtextresult_new2 constructs a new QWebEngineFindTextResult object.
///
/// ``` QWebEngineFindTextResult* other ```
QWebEngineFindTextResult* q_webenginefindtextresult_new2(void* other) {
    return QWebEngineFindTextResult_new2((QWebEngineFindTextResult*)other);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#numberOfMatches)
///
/// ``` QWebEngineFindTextResult* self ```
int32_t q_webenginefindtextresult_number_of_matches(void* self) {
    return QWebEngineFindTextResult_NumberOfMatches((QWebEngineFindTextResult*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#activeMatch)
///
/// ``` QWebEngineFindTextResult* self ```
int32_t q_webenginefindtextresult_active_match(void* self) {
    return QWebEngineFindTextResult_ActiveMatch((QWebEngineFindTextResult*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qwebenginefindtextresult.html#operator=)
///
/// ``` QWebEngineFindTextResult* self, QWebEngineFindTextResult* other ```
void q_webenginefindtextresult_operator_assign(void* self, void* other) {
    QWebEngineFindTextResult_OperatorAssign((QWebEngineFindTextResult*)self, (QWebEngineFindTextResult*)other);
}

/// Delete this object from C++ memory.
///
/// ``` QWebEngineFindTextResult* self ```
void q_webenginefindtextresult_delete(void* self) {
    QWebEngineFindTextResult_Delete((QWebEngineFindTextResult*)(self));
}