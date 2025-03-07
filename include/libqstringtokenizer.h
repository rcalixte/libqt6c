#pragma once
#ifndef SRCQT6C_LIBQSTRINGTOKENIZER_H
#define SRCQT6C_LIBQSTRINGTOKENIZER_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

QStringTokenizerBaseBase* q_stringtokenizerbasebase_new(void* other);
QStringTokenizerBaseBase* q_stringtokenizerbasebase_new2(void* param1);
void q_stringtokenizerbasebase_copy_assign(void* self, void* other);
#endif
