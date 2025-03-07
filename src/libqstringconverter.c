#include "libqbytearrayview.hpp"
#include "libqchar.hpp"
#include "libqstringconverter_base.hpp"
#include "libqstringconverter.hpp"
#include "libqstringconverter.h"

/// https://doc.qt.io/qt-6/qstringencoder.html

/// q_stringencoder_new constructs a new QStringEncoder object.
///
///
QStringEncoder* q_stringencoder_new() {
    return QStringEncoder_new();
}

/// q_stringencoder_new2 constructs a new QStringEncoder object.
///
/// ``` enum QStringConverter__Encoding encoding ```
QStringEncoder* q_stringencoder_new2(int64_t encoding) {
    return QStringEncoder_new2(encoding);
}

/// q_stringencoder_new3 constructs a new QStringEncoder object.
///
/// ``` const char* name ```
QStringEncoder* q_stringencoder_new3(const char* name) {
    return QStringEncoder_new3(name);
}

/// q_stringencoder_new4 constructs a new QStringEncoder object.
///
/// ``` enum QStringConverter__Encoding encoding, int flags ```
QStringEncoder* q_stringencoder_new4(int64_t encoding, int64_t flags) {
    return QStringEncoder_new4(encoding, flags);
}

/// q_stringencoder_new5 constructs a new QStringEncoder object.
///
/// ``` const char* name, int flags ```
QStringEncoder* q_stringencoder_new5(const char* name, int64_t flags) {
    return QStringEncoder_new5(name, flags);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringencoder.html#requiredSpace)
///
/// ``` QStringEncoder* self, int64_t inputLength ```
int64_t q_stringencoder_required_space(void* self, int64_t inputLength) {
    return QStringEncoder_RequiredSpace((QStringEncoder*)self, inputLength);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringEncoder* self ```
bool q_stringencoder_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringEncoder* self ```
void q_stringencoder_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringEncoder* self ```
bool q_stringencoder_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringEncoder* self ```
const char* q_stringencoder_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringencoder_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

/// Delete this object from C++ memory.
///
/// ``` QStringEncoder* self ```
void q_stringencoder_delete(void* self) {
    QStringEncoder_Delete((QStringEncoder*)(self));
}

/// https://doc.qt.io/qt-6/qstringdecoder.html

/// q_stringdecoder_new constructs a new QStringDecoder object.
///
/// ``` enum QStringConverter__Encoding encoding ```
QStringDecoder* q_stringdecoder_new(int64_t encoding) {
    return QStringDecoder_new(encoding);
}

/// q_stringdecoder_new2 constructs a new QStringDecoder object.
///
///
QStringDecoder* q_stringdecoder_new2() {
    return QStringDecoder_new2();
}

/// q_stringdecoder_new3 constructs a new QStringDecoder object.
///
/// ``` const char* name ```
QStringDecoder* q_stringdecoder_new3(const char* name) {
    return QStringDecoder_new3(name);
}

/// q_stringdecoder_new4 constructs a new QStringDecoder object.
///
/// ``` enum QStringConverter__Encoding encoding, int flags ```
QStringDecoder* q_stringdecoder_new4(int64_t encoding, int64_t flags) {
    return QStringDecoder_new4(encoding, flags);
}

/// q_stringdecoder_new5 constructs a new QStringDecoder object.
///
/// ``` const char* name, int f ```
QStringDecoder* q_stringdecoder_new5(const char* name, int64_t f) {
    return QStringDecoder_new5(name, f);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#requiredSpace)
///
/// ``` QStringDecoder* self, int64_t inputLength ```
int64_t q_stringdecoder_required_space(void* self, int64_t inputLength) {
    return QStringDecoder_RequiredSpace((QStringDecoder*)self, inputLength);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#appendToBuffer)
///
/// ``` QStringDecoder* self, QChar* out, const char* ba ```
QChar* q_stringdecoder_append_to_buffer(void* self, void* out, const char* ba) {
    libqt_strview ba_strview = qstrview(ba);
    return QStringDecoder_AppendToBuffer((QStringDecoder*)self, (QChar*)out, (QByteArrayView*)&ba_strview);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qstringdecoder.html#decoderForHtml)
///
/// ``` const char* data ```
QStringDecoder* q_stringdecoder_decoder_for_html(const char* data) {
    libqt_strview data_strview = qstrview(data);
    return QStringDecoder_DecoderForHtml((QByteArrayView*)&data_strview);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#isValid)
///
/// ``` QStringDecoder* self ```
bool q_stringdecoder_is_valid(void* self) {
    return QStringConverter_IsValid((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#resetState)
///
/// ``` QStringDecoder* self ```
void q_stringdecoder_reset_state(void* self) {
    QStringConverter_ResetState((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#hasError)
///
/// ``` QStringDecoder* self ```
bool q_stringdecoder_has_error(void* self) {
    return QStringConverter_HasError((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#name)
///
/// ``` QStringDecoder* self ```
const char* q_stringdecoder_name(void* self) {
    return QStringConverter_Name((QStringConverter*)self);
}

/// Inherited from QStringConverter
///
/// [Qt documentation](https://doc.qt.io/qt-6/qstringconverter.html#nameForEncoding)
///
/// ``` enum QStringConverter__Encoding e ```
const char* q_stringdecoder_name_for_encoding(int64_t e) {
    return QStringConverter_NameForEncoding(e);
}

/// Delete this object from C++ memory.
///
/// ``` QStringDecoder* self ```
void q_stringdecoder_delete(void* self) {
    QStringDecoder_Delete((QStringDecoder*)(self));
}