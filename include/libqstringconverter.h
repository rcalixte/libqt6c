#pragma once
#ifndef SRCQT6C_LIBQSTRINGCONVERTER_H
#define SRCQT6C_LIBQSTRINGCONVERTER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"
#include "libqchar.h"
#include "libqstringconverter_base.h"

QStringEncoder* q_stringencoder_new();
QStringEncoder* q_stringencoder_new2(int64_t encoding);
QStringEncoder* q_stringencoder_new3(const char* name);
QStringEncoder* q_stringencoder_new4(int64_t encoding, int64_t flags);
QStringEncoder* q_stringencoder_new5(const char* name, int64_t flags);
int64_t q_stringencoder_required_space(void* self, int64_t inputLength);
bool q_stringencoder_is_valid(void* self);
void q_stringencoder_reset_state(void* self);
bool q_stringencoder_has_error(void* self);
const char* q_stringencoder_name(void* self);
const char* q_stringencoder_name_for_encoding(int64_t e);
void q_stringencoder_delete(void* self);

QStringDecoder* q_stringdecoder_new(int64_t encoding);
QStringDecoder* q_stringdecoder_new2();
QStringDecoder* q_stringdecoder_new3(const char* name);
QStringDecoder* q_stringdecoder_new4(int64_t encoding, int64_t flags);
QStringDecoder* q_stringdecoder_new5(const char* name, int64_t f);
int64_t q_stringdecoder_required_space(void* self, int64_t inputLength);
QChar* q_stringdecoder_append_to_buffer(void* self, void* out, const char* ba);
QStringDecoder* q_stringdecoder_decoder_for_html(const char* data);
bool q_stringdecoder_is_valid(void* self);
void q_stringdecoder_reset_state(void* self);
bool q_stringdecoder_has_error(void* self);
const char* q_stringdecoder_name(void* self);
const char* q_stringdecoder_name_for_encoding(int64_t e);
void q_stringdecoder_delete(void* self);

#endif
