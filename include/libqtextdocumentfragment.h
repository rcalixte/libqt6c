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

QTextDocumentFragment* q_textdocumentfragment_new();
QTextDocumentFragment* q_textdocumentfragment_new2(void* document);
QTextDocumentFragment* q_textdocumentfragment_new3(void* range);
QTextDocumentFragment* q_textdocumentfragment_new4(void* rhs);
void q_textdocumentfragment_operator_assign(void* self, void* rhs);
bool q_textdocumentfragment_is_empty(void* self);
const char* q_textdocumentfragment_to_plain_text(void* self);
const char* q_textdocumentfragment_to_raw_text(void* self);
const char* q_textdocumentfragment_to_html(void* self);
const char* q_textdocumentfragment_to_markdown(void* self);
QTextDocumentFragment* q_textdocumentfragment_from_plain_text(const char* plainText);
QTextDocumentFragment* q_textdocumentfragment_from_html(const char* html);
QTextDocumentFragment* q_textdocumentfragment_from_markdown(const char* markdown);
const char* q_textdocumentfragment_to_markdown1(void* self, int64_t features);
QTextDocumentFragment* q_textdocumentfragment_from_html2(const char* html, void* resourceProvider);
QTextDocumentFragment* q_textdocumentfragment_from_markdown2(const char* markdown, int64_t features);
void q_textdocumentfragment_delete(void* self);

#endif
