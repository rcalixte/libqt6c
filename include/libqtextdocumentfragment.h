#pragma once
#ifndef SRCQT6C_LIBQTEXTDOCUMENTFRAGMENT_H
#define SRCQT6C_LIBQTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include <string.h>
#include "libqtextcursor.h"
#include "libqtextdocument.h"

/// https://doc.qt.io/qt-6/qtextdocumentfragment.html

/// q_textdocumentfragment_new constructs a new QTextDocumentFragment object.
///
///
QTextDocumentFragment* q_textdocumentfragment_new();

/// q_textdocumentfragment_new2 constructs a new QTextDocumentFragment object.
///
/// ``` QTextDocument* document ```
QTextDocumentFragment* q_textdocumentfragment_new2(void* document);

/// q_textdocumentfragment_new3 constructs a new QTextDocumentFragment object.
///
/// ``` QTextCursor* range ```
QTextDocumentFragment* q_textdocumentfragment_new3(void* range);

/// q_textdocumentfragment_new4 constructs a new QTextDocumentFragment object.
///
/// ``` QTextDocumentFragment* rhs ```
QTextDocumentFragment* q_textdocumentfragment_new4(void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator=)
///
/// ``` QTextDocumentFragment* self, QTextDocumentFragment* rhs ```
void q_textdocumentfragment_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
///
/// ``` QTextDocumentFragment* self ```
bool q_textdocumentfragment_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
///
/// ``` QTextDocumentFragment* self ```
const char* q_textdocumentfragment_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
///
/// ``` QTextDocumentFragment* self ```
const char* q_textdocumentfragment_to_raw_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
///
/// ``` QTextDocumentFragment* self ```
const char* q_textdocumentfragment_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// ``` QTextDocumentFragment* self ```
const char* q_textdocumentfragment_to_markdown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
///
/// ``` const char* plainText ```
QTextDocumentFragment* q_textdocumentfragment_from_plain_text(const char* plainText);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// ``` const char* html ```
QTextDocumentFragment* q_textdocumentfragment_from_html(const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// ``` const char* markdown ```
QTextDocumentFragment* q_textdocumentfragment_from_markdown(const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// ``` QTextDocumentFragment* self, int features ```
const char* q_textdocumentfragment_to_markdown1(void* self, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// ``` const char* html, QTextDocument* resourceProvider ```
QTextDocumentFragment* q_textdocumentfragment_from_html2(const char* html, void* resourceProvider);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// ``` const char* markdown, int features ```
QTextDocumentFragment* q_textdocumentfragment_from_markdown2(const char* markdown, int64_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
///
/// Delete this object from C++ memory.
///
/// ``` QTextDocumentFragment* self ```
void q_textdocumentfragment_delete(void* self);

#endif
