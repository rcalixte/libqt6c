#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIDOCUMENT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCIDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html

/// q_scidocument_new constructs a new QsciDocument object.
///
///
QsciDocument* q_scidocument_new();

/// q_scidocument_new2 constructs a new QsciDocument object.
///
/// ``` QsciDocument* param1 ```
QsciDocument* q_scidocument_new2(void* param1);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
///
/// ``` QsciDocument* self, QsciDocument* param1 ```
void q_scidocument_operator_assign(void* self, void* param1);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
///
/// Delete this object from C++ memory.
///
/// ``` QsciDocument* self ```
void q_scidocument_delete(void* self);

#endif
