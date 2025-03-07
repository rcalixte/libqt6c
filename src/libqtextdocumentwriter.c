#include "libqiodevice.hpp"
#include <string.h>
#include "libqtextdocument.hpp"
#include "libqtextdocumentfragment.hpp"
#include "libqtextdocumentwriter.hpp"
#include "libqtextdocumentwriter.h"

/// https://doc.qt.io/qt-6/qtextdocumentwriter.html

/// q_textdocumentwriter_new constructs a new QTextDocumentWriter object.
///
///
QTextDocumentWriter* q_textdocumentwriter_new() {
    return QTextDocumentWriter_new();
}

/// q_textdocumentwriter_new2 constructs a new QTextDocumentWriter object.
///
/// ``` QIODevice* device, const char* format ```
QTextDocumentWriter* q_textdocumentwriter_new2(void* device, const char* format) {
    return QTextDocumentWriter_new2((QIODevice*)device, qstring(format));
}

/// q_textdocumentwriter_new3 constructs a new QTextDocumentWriter object.
///
/// ``` const char* fileName ```
QTextDocumentWriter* q_textdocumentwriter_new3(const char* fileName) {
    return QTextDocumentWriter_new3(qstring(fileName));
}

/// q_textdocumentwriter_new4 constructs a new QTextDocumentWriter object.
///
/// ``` const char* fileName, const char* format ```
QTextDocumentWriter* q_textdocumentwriter_new4(const char* fileName, const char* format) {
    return QTextDocumentWriter_new4(qstring(fileName), qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
///
/// ``` QTextDocumentWriter* self, const char* format ```
void q_textdocumentwriter_set_format(void* self, const char* format) {
    QTextDocumentWriter_SetFormat((QTextDocumentWriter*)self, qstring(format));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
///
/// ``` QTextDocumentWriter* self ```
char* q_textdocumentwriter_format(void* self) {
    libqt_string _str = QTextDocumentWriter_Format((QTextDocumentWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
///
/// ``` QTextDocumentWriter* self, QIODevice* device ```
void q_textdocumentwriter_set_device(void* self, void* device) {
    QTextDocumentWriter_SetDevice((QTextDocumentWriter*)self, (QIODevice*)device);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
///
/// ``` QTextDocumentWriter* self ```
QIODevice* q_textdocumentwriter_device(void* self) {
    return QTextDocumentWriter_Device((QTextDocumentWriter*)self);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
///
/// ``` QTextDocumentWriter* self, const char* fileName ```
void q_textdocumentwriter_set_file_name(void* self, const char* fileName) {
    QTextDocumentWriter_SetFileName((QTextDocumentWriter*)self, qstring(fileName));
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
///
/// ``` QTextDocumentWriter* self ```
const char* q_textdocumentwriter_file_name(void* self) {
    libqt_string _str = QTextDocumentWriter_FileName((QTextDocumentWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// ``` QTextDocumentWriter* self, QTextDocument* document ```
bool q_textdocumentwriter_write(void* self, void* document) {
    return QTextDocumentWriter_Write((QTextDocumentWriter*)self, (QTextDocument*)document);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// ``` QTextDocumentWriter* self, QTextDocumentFragment* fragment ```
bool q_textdocumentwriter_write_with_fragment(void* self, void* fragment) {
    return QTextDocumentWriter_WriteWithFragment((QTextDocumentWriter*)self, (QTextDocumentFragment*)fragment);
}

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
///
///
const char** q_textdocumentwriter_supported_document_formats() {
    libqt_list _arr = QTextDocumentWriter_SupportedDocumentFormats();
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

/// Delete this object from C++ memory.
///
/// ``` QTextDocumentWriter* self ```
void q_textdocumentwriter_delete(void* self) {
    QTextDocumentWriter_Delete((QTextDocumentWriter*)(self));
}