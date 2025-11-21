#pragma once
#ifndef SRC_QT6C_LIBQTEXTDOCUMENTFRAGMENT_H
#define SRC_QT6C_LIBQTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qtextdocumentfragment.html

/// q_textdocumentfragment_new constructs a new QTextDocumentFragment object.
///
QTextDocumentFragment* q_textdocumentfragment_new();

/// q_textdocumentfragment_new2 constructs a new QTextDocumentFragment object.
///
/// @param document QTextDocument*
QTextDocumentFragment* q_textdocumentfragment_new2(void* document);

/// q_textdocumentfragment_new3 constructs a new QTextDocumentFragment object.
///
/// @param range QTextCursor*
QTextDocumentFragment* q_textdocumentfragment_new3(void* range);

/// q_textdocumentfragment_new4 constructs a new QTextDocumentFragment object.
///
/// @param rhs QTextDocumentFragment*
QTextDocumentFragment* q_textdocumentfragment_new4(void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator-eq)
///
/// @param self QTextDocumentFragment*
/// @param rhs QTextDocumentFragment*
void q_textdocumentfragment_operator_assign(void* self, void* rhs);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
///
/// @param self QTextDocumentFragment*
bool q_textdocumentfragment_is_empty(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocumentFragment*
const char* q_textdocumentfragment_to_plain_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocumentFragment*
const char* q_textdocumentfragment_to_raw_text(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocumentFragment*
const char* q_textdocumentfragment_to_html(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocumentFragment*
const char* q_textdocumentfragment_to_markdown(void* self);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
///
/// @param plainText const char*
QTextDocumentFragment* q_textdocumentfragment_from_plain_text(const char* plainText);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// @param html const char*
QTextDocumentFragment* q_textdocumentfragment_from_html(const char* html);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// @param markdown const char*
QTextDocumentFragment* q_textdocumentfragment_from_markdown(const char* markdown);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QTextDocumentFragment*
/// @param features flag of enum QTextDocument__MarkdownFeature
const char* q_textdocumentfragment_to_markdown1(void* self, int32_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// @param html const char*
/// @param resourceProvider QTextDocument*
QTextDocumentFragment* q_textdocumentfragment_from_html2(const char* html, void* resourceProvider);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// @param markdown const char*
/// @param features flag of enum QTextDocument__MarkdownFeature
QTextDocumentFragment* q_textdocumentfragment_from_markdown2(const char* markdown, int32_t features);

/// [Qt documentation](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
///
/// Delete this object from C++ memory.
///
/// @param self QTextDocumentFragment*
void q_textdocumentfragment_delete(void* self);

#endif
