#include "libqiodevice.hpp"
#include <string.h>
#include "libqtextdocument.hpp"
#include "libqtextdocumentfragment.hpp"
#include "libqtextdocumentwriter.hpp"
#include "libqtextdocumentwriter.h"

QTextDocumentWriter* q_textdocumentwriter_new() {
    return QTextDocumentWriter_new();
}

QTextDocumentWriter* q_textdocumentwriter_new2(void* device, const char* format) {
    return QTextDocumentWriter_new2((QIODevice*)device, qstring(format));
}

QTextDocumentWriter* q_textdocumentwriter_new3(const char* fileName) {
    return QTextDocumentWriter_new3(qstring(fileName));
}

QTextDocumentWriter* q_textdocumentwriter_new4(const char* fileName, const char* format) {
    return QTextDocumentWriter_new4(qstring(fileName), qstring(format));
}

void q_textdocumentwriter_set_format(void* self, const char* format) {
    QTextDocumentWriter_SetFormat((QTextDocumentWriter*)self, qstring(format));
}

char* q_textdocumentwriter_format(void* self) {
    libqt_string _str = QTextDocumentWriter_Format((QTextDocumentWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

void q_textdocumentwriter_set_device(void* self, void* device) {
    QTextDocumentWriter_SetDevice((QTextDocumentWriter*)self, (QIODevice*)device);
}

QIODevice* q_textdocumentwriter_device(void* self) {
    return QTextDocumentWriter_Device((QTextDocumentWriter*)self);
}

void q_textdocumentwriter_set_file_name(void* self, const char* fileName) {
    QTextDocumentWriter_SetFileName((QTextDocumentWriter*)self, qstring(fileName));
}

const char* q_textdocumentwriter_file_name(void* self) {
    libqt_string _str = QTextDocumentWriter_FileName((QTextDocumentWriter*)self);
    char* _ret = qstring_to_char(_str);
    libqt_string_free(&_str);
    return _ret;
}

bool q_textdocumentwriter_write(void* self, void* document) {
    return QTextDocumentWriter_Write((QTextDocumentWriter*)self, (QTextDocument*)document);
}

bool q_textdocumentwriter_write2(void* self, void* fragment) {
    return QTextDocumentWriter_Write2((QTextDocumentWriter*)self, (QTextDocumentFragment*)fragment);
}

const char** q_textdocumentwriter_supported_document_formats() {
    libqt_list _arr = QTextDocumentWriter_SupportedDocumentFormats();
    const libqt_string* _qstr = (libqt_string*)_arr.data.ptr;
    const char** _ret = (const char**)malloc((_arr.len + 1) * sizeof(const char*));
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        _ret[_i] = qstring_to_char(_qstr[_i]);
    }
    _ret[_arr.len] = NULL;
    for (size_t _i = 0; _i < _arr.len; ++_i) {
        libqt_string_free((libqt_string*)&_qstr[_i]);
    }
    libqt_free(_arr.data.ptr);
    return _ret;
}

void q_textdocumentwriter_delete(void* self) {
    QTextDocumentWriter_Delete((QTextDocumentWriter*)(self));
}
