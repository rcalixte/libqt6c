#pragma once
#ifndef SRCQT6C_LIBQBYTEARRAYMATCHER_H
#define SRCQT6C_LIBQBYTEARRAYMATCHER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#include "libqbytearrayview.h"

QByteArrayMatcher* q_bytearraymatcher_new();
QByteArrayMatcher* q_bytearraymatcher_new2(const char* pattern);
QByteArrayMatcher* q_bytearraymatcher_new3(const char* pattern);
QByteArrayMatcher* q_bytearraymatcher_new4(const char* pattern);
QByteArrayMatcher* q_bytearraymatcher_new5(void* other);
QByteArrayMatcher* q_bytearraymatcher_new6(const char* pattern, int64_t length);
void q_bytearraymatcher_operator_assign(void* self, void* other);
void q_bytearraymatcher_set_pattern(void* self, const char* pattern);
int64_t q_bytearraymatcher_index_in(void* self, const char* str, int64_t lenVal);
int64_t q_bytearraymatcher_index_in_with_data(void* self, const char* data);
char* q_bytearraymatcher_pattern(void* self);
int64_t q_bytearraymatcher_index_in3(void* self, const char* str, int64_t lenVal, int64_t from);
int64_t q_bytearraymatcher_index_in2(void* self, const char* data, int64_t from);
void q_bytearraymatcher_delete(void* self);

QStaticByteArrayMatcherBase* q_staticbytearraymatcherbase_new(void* other);
void q_staticbytearraymatcherbase_copy_assign(void* self, void* other);
#endif
