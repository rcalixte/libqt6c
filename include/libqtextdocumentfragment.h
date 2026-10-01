#pragma once
#ifndef LIBQTEXTDOCUMENTFRAGMENT_H
#define LIBQTEXTDOCUMENTFRAGMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"
#include "qtlibc.h"

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)

/// q_textdocumentfragment_new constructs a new QTextDocumentFragment object.
///
QTextDocumentFragment* q_textdocumentfragment_new();

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)

/// q_textdocumentfragment_new2 constructs a new QTextDocumentFragment object.
///
/// @param document QTextDocument*
///
QTextDocumentFragment* q_textdocumentfragment_new2(const void* document);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)

/// q_textdocumentfragment_new3 constructs a new QTextDocumentFragment object.
///
/// @param range QTextCursor*
///
QTextDocumentFragment* q_textdocumentfragment_new3(const void* range);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html)

/// q_textdocumentfragment_new4 constructs a new QTextDocumentFragment object.
///
/// @param rhs QTextDocumentFragment*
///
QTextDocumentFragment* q_textdocumentfragment_new4(const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#operator-eq)
///
/// @param self QTextDocumentFragment*
/// @param rhs QTextDocumentFragment*
///
void q_textdocumentfragment_operator_assign(void* self, const void* rhs);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#isEmpty)
///
/// @param self const QTextDocumentFragment*
///
bool q_textdocumentfragment_is_empty(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toPlainText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocumentFragment*
///
const char* q_textdocumentfragment_to_plain_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toRawText)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocumentFragment*
///
const char* q_textdocumentfragment_to_raw_text(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toHtml)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocumentFragment*
///
const char* q_textdocumentfragment_to_html(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocumentFragment*
///
const char* q_textdocumentfragment_to_markdown(const void* self);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromPlainText)
///
/// @param plainText const char*
///
QTextDocumentFragment* q_textdocumentfragment_from_plain_text(const char* plainText);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// @param html const char*
///
QTextDocumentFragment* q_textdocumentfragment_from_html(const char* html);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// @param markdown const char*
///
QTextDocumentFragment* q_textdocumentfragment_from_markdown(const char* markdown);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#toMarkdown)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QTextDocumentFragment*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
const char* q_textdocumentfragment_to_markdown1(const void* self, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromHtml)
///
/// @param html const char*
/// @param resourceProvider QTextDocument*
///
QTextDocumentFragment* q_textdocumentfragment_from_html2(const char* html, const void* resourceProvider);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#fromMarkdown)
///
/// @param markdown const char*
/// @param features flag of enum QTextDocument__MarkdownFeature
///
QTextDocumentFragment* q_textdocumentfragment_from_markdown2(const char* markdown, int32_t features);

/// [Upstream resources](https://doc.qt.io/qt-6/qtextdocumentfragment.html#dtor.QTextDocumentFragment)
///
/// Delete this object from C++ memory.
///
/// @param self QTextDocumentFragment*
///
void q_textdocumentfragment_delete(void* self);

#endif
