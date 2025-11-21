#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIDOCUMENT_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCIDOCUMENT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html

/// q_scidocument_new constructs a new QsciDocument object.
///
QsciDocument* q_scidocument_new();

/// q_scidocument_new2 constructs a new QsciDocument object.
///
/// @param param1 QsciDocument*
QsciDocument* q_scidocument_new2(void* param1);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
///
/// @param self QsciDocument*
/// @param param1 QsciDocument*
void q_scidocument_operator_assign(void* self, void* param1);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciDocument.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciDocument*
void q_scidocument_delete(void* self);

#endif
