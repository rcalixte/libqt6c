#pragma once
#ifndef SRC_QT6C_LIBQTEXTDOCUMENTWRITER_H
#define SRC_QT6C_LIBQTEXTDOCUMENTWRITER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)

/// q_textdocumentwriter_new constructs a new QTextDocumentWriter object.
///
QTextDocumentWriter* q_textdocumentwriter_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)

/// q_textdocumentwriter_new2 constructs a new QTextDocumentWriter object.
///
/// @param device QIODevice*
/// @param format char*
///
QTextDocumentWriter* q_textdocumentwriter_new2(void* device, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)

/// q_textdocumentwriter_new3 constructs a new QTextDocumentWriter object.
///
/// @param fileName const char*
///
QTextDocumentWriter* q_textdocumentwriter_new3(const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html)

/// q_textdocumentwriter_new4 constructs a new QTextDocumentWriter object.
///
/// @param fileName const char*
/// @param format char*
///
QTextDocumentWriter* q_textdocumentwriter_new4(const char* fileName, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFormat)
///
/// @param self QTextDocumentWriter*
/// @param format char*
///
void q_textdocumentwriter_set_format(void* self, char* format);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#format)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
/// @param self QTextDocumentWriter*
///
char* q_textdocumentwriter_format(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setDevice)
///
/// @param self QTextDocumentWriter*
/// @param device QIODevice*
///
void q_textdocumentwriter_set_device(void* self, void* device);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#device)
///
/// @param self QTextDocumentWriter*
///
QIODevice* q_textdocumentwriter_device(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#setFileName)
///
/// @param self QTextDocumentWriter*
/// @param fileName const char*
///
void q_textdocumentwriter_set_file_name(void* self, const char* fileName);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#fileName)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self QTextDocumentWriter*
///
const char* q_textdocumentwriter_file_name(void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// @param self QTextDocumentWriter*
/// @param document QTextDocument*
///
bool q_textdocumentwriter_write(void* self, void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#write)
///
/// @param self QTextDocumentWriter*
/// @param fragment QTextDocumentFragment*
///
bool q_textdocumentwriter_write2(void* self, void* fragment);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#supportedDocumentFormats)
///
/// @warning Caller is responsible for freeing the returned memory using `free()`
///
const char** q_textdocumentwriter_supported_document_formats();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentwriter.html#dtor.QTextDocumentWriter)
///
/// Delete this object from C++ memory.
///
/// @param self QTextDocumentWriter*
///
void q_textdocumentwriter_delete(void* self);

#endif
