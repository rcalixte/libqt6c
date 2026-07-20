#include <QChar>
#include <QStringConverter>
#include <QStringDecoder>
#include <QStringEncoder>
#include <qstringconverter.h>
#include "libqstringconverter.hpp"
#include "libqstringconverter.hxx"

QStringEncoder* QStringEncoder_New() {
    return new QStringEncoder();
}

QStringEncoder* QStringEncoder_New2(int encoding) {
    return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringEncoder* QStringEncoder_New3(const char* name) {
    return new QStringEncoder(QAnyStringView(name));
}

QStringEncoder* QStringEncoder_New4(int encoding, int flags) {
    return new QStringEncoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringEncoder* QStringEncoder_New5(const char* name, int flags) {
    return new QStringEncoder(QAnyStringView(name), static_cast<QStringConverterBase::Flags>(flags));
}

ptrdiff_t QStringEncoder_RequiredSpace(const QStringEncoder* self, ptrdiff_t inputLength) {
    return static_cast<ptrdiff_t>(self->requiredSpace((qsizetype)(inputLength)));
}

char* QStringEncoder_AppendToBuffer(QStringEncoder* self, char* out, libqt_string in) {
    QString in_QString = QString::fromUtf8(in.data, in.len);
    return self->appendToBuffer(out, in_QString);
}

void QStringEncoder_Delete(QStringEncoder* self) {
    delete self;
}

QStringDecoder* QStringDecoder_New(int encoding) {
    return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding));
}

QStringDecoder* QStringDecoder_New2() {
    return new QStringDecoder();
}

QStringDecoder* QStringDecoder_New3(const char* name) {
    return new QStringDecoder(QAnyStringView(name));
}

QStringDecoder* QStringDecoder_New4(int encoding, int flags) {
    return new QStringDecoder(static_cast<QStringConverter::Encoding>(encoding), static_cast<QStringConverterBase::Flags>(flags));
}

QStringDecoder* QStringDecoder_New5(const char* name, int f) {
    return new QStringDecoder(QAnyStringView(name), static_cast<QStringConverterBase::Flags>(f));
}

ptrdiff_t QStringDecoder_RequiredSpace(const QStringDecoder* self, ptrdiff_t inputLength) {
    return static_cast<ptrdiff_t>(self->requiredSpace((qsizetype)(inputLength)));
}

QChar* QStringDecoder_AppendToBuffer(QStringDecoder* self, QChar* out, libqt_string ba) {
    QByteArrayView ba_QByteArrayView(ba.data, ba.len);
    return self->appendToBuffer(out, ba_QByteArrayView);
}

QStringDecoder* QStringDecoder_DecoderForHtml(libqt_string data) {
    QByteArrayView data_QByteArrayView(data.data, data.len);
    return new QStringDecoder(QStringDecoder::decoderForHtml(data_QByteArrayView));
}

void QStringDecoder_Delete(QStringDecoder* self) {
    delete self;
}
