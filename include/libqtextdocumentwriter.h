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

QTextDocumentWriter* q_textdocumentwriter_new();
QTextDocumentWriter* q_textdocumentwriter_new2(void* device, const char* format);
QTextDocumentWriter* q_textdocumentwriter_new3(const char* fileName);
QTextDocumentWriter* q_textdocumentwriter_new4(const char* fileName, const char* format);
void q_textdocumentwriter_set_format(void* self, const char* format);
char* q_textdocumentwriter_format(void* self);
void q_textdocumentwriter_set_device(void* self, void* device);
QIODevice* q_textdocumentwriter_device(void* self);
void q_textdocumentwriter_set_file_name(void* self, const char* fileName);
const char* q_textdocumentwriter_file_name(void* self);
bool q_textdocumentwriter_write(void* self, void* document);
bool q_textdocumentwriter_write_with_fragment(void* self, void* fragment);
const char** q_textdocumentwriter_supported_document_formats();
void q_textdocumentwriter_delete(void* self);

#endif
