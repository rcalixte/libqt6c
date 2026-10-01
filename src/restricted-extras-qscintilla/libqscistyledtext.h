#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISTYLEDTEXT_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISTYLEDTEXT_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)

/// q_scistyledtext_new constructs a new QsciStyledText object.
///
/// @param text const char*
/// @param style int
///
QsciStyledText* q_scistyledtext_new(const char* text, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)

/// q_scistyledtext_new2 constructs a new QsciStyledText object.
///
/// @param text const char*
/// @param style QsciStyle*
///
QsciStyledText* q_scistyledtext_new2(const char* text, const void* style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)

/// q_scistyledtext_new3 constructs a new QsciStyledText object.
///
/// @param param1 QsciStyledText*
///
QsciStyledText* q_scistyledtext_new3(const void* param1);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
///
/// @param self const QsciStyledText*
/// @param sci QsciScintillaBase*
///
void q_scistyledtext_apply(const void* self, void* sci);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciStyledText*
///
const char* q_scistyledtext_text(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
///
/// @param self const QsciStyledText*
///
int32_t q_scistyledtext_style(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
///
/// @param self QsciStyledText*
/// @param param1 QsciStyledText*
///
void q_scistyledtext_operator_assign(void* self, const void* param1);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyledText.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciStyledText*
///
void q_scistyledtext_delete(void* self);

#endif
