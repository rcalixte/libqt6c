#include "libqstringconverter.hpp"
#include "libqstringconverter_base.hpp"
#include "libqstringconverter_base.h"

/// https://doc.qt.io/qt-6/qstringconverter.html

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringConverter* self ```
bool q_stringconverter_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringConverter* self ```
void q_stringconverter_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringConverter* self ```
bool q_stringconverter_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringConverter* self ```
const char* q_stringconverter_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringconverter_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

/// https://doc.qt.io/qt-6/qstringconverterbase-state.html

/// q_stringconverterbase__state_new constructs a new QStringConverterBase::State object.
///
///
QStringConverterBase__State* q_stringconverterbase__state_new() {
    return QStringConverterBase__State_new();
}

/// q_stringconverterbase__state_new2 constructs a new QStringConverterBase::State object.
///
/// ``` int f ```
QStringConverterBase__State* q_stringconverterbase__state_new2(int64_t f) {
    return QStringConverterBase__State_new2(f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#clear)
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_clear(void* self) {
    QStringConverterBase__State_Clear((QStringConverterBase__State*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverterbase__state.html#reset)
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_reset(void* self) {
    QStringConverterBase__State_Reset((QStringConverterBase__State*)self);
}

/// Delete this object from C++ memory.
///
/// ``` QStringConverterBase__State* self ```
void q_stringconverterbase__state_delete(void* self) {
    QStringConverterBase__State_Delete((QStringConverterBase__State*)(self));
}