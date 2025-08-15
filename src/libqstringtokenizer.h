#pragma once
#ifndef SRCQT6C_LIBQSTRINGTOKENIZER_H
#define SRCQT6C_LIBQSTRINGTOKENIZER_H

#include <stdbool.h>
#include <stddef.h>

#include "libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

/// https://doc.qt.io/qt-6/qstringtokenizerbasebase.html

/// q_stringtokenizerbasebase_new constructs a new QStringTokenizerBaseBase object.
///
/// @param other QStringTokenizerBaseBase*
QStringTokenizerBaseBase* q_stringtokenizerbasebase_new(void* other);

/// q_stringtokenizerbasebase_new2 constructs a new QStringTokenizerBaseBase object.
///
/// @param param1 QStringTokenizerBaseBase*
QStringTokenizerBaseBase* q_stringtokenizerbasebase_new2(void* param1);

/// q_stringtokenizerbasebase_copy_assign shallow copies `other` into `self`.
///
/// @param self QStringTokenizerBaseBase*
/// @param other QStringTokenizerBaseBase*
void q_stringtokenizerbasebase_copy_assign(void* self, void* other);

#endif
