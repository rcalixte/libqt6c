#pragma once
#ifndef SRCQT6C_LIBQTEXTDOCUMENTWRITER_H
#define SRCQT6C_LIBQTEXTDOCUMENTWRITER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqiodevice.h"
#include <string.h>
#include "libqtextdocument.h"
#include "libqtextdocumentfragment.h"

/// https://doc.qt.io/qt-6/qtextdocumentwriter.html

/// q_textdocumentwriter_new constructs a new QTextDocumentWriter object.
///
///
QTextDocumentWriter* q_textdocumentwriter_new();

/// q_textdocumentwriter_new2 constructs a new QTextDocumentWriter object.
///
/// ``` QIODevice* device, const char* format ```
QTextDocumentWriter* q_textdocumentwriter_new2(void* device, const char* format);

/// q_textdocumentwriter_new3 constructs a new QTextDocumentWriter object.
///
/// ``` const char* fileName ```
QTextDocumentWriter* q_textdocumentwriter_new3(const char* fileName);

/// q_textdocumentwriter_new4 constructs a new QTextDocumentWriter object.
///
/// ``` const char* fileName, const char* format ```
QTextDocumentWriter* q_textdocumentwriter_new4(const char* fileName, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
///
/// ``` QTextDocumentWriter* self, const char* format ```
void q_textdocumentwriter_set_format(void* self, const char* format);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
///
/// ``` QTextDocumentWriter* self ```
char* q_textdocumentwriter_format(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
///
/// ``` QTextDocumentWriter* self, QIODevice* device ```
void q_textdocumentwriter_set_device(void* self, void* device);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
///
/// ``` QTextDocumentWriter* self ```
QIODevice* q_textdocumentwriter_device(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
///
/// ``` QTextDocumentWriter* self, const char* fileName ```
void q_textdocumentwriter_set_file_name(void* self, const char* fileName);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
///
/// ``` QTextDocumentWriter* self ```
const char* q_textdocumentwriter_file_name(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// ``` QTextDocumentWriter* self, QTextDocument* document ```
bool q_textdocumentwriter_write(void* self, void* document);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// ``` QTextDocumentWriter* self, QTextDocumentFragment* fragment ```
bool q_textdocumentwriter_write_with_fragment(void* self, void* fragment);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
///
///
const char** q_textdocumentwriter_supported_document_formats();

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentwriter.html#dtor.QTextDocumentWriter)
///
/// Delete this object from C++ memory.
///
/// ``` QTextDocumentWriter* self ```
void q_textdocumentwriter_delete(void* self);

#endif
