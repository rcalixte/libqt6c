#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCISTYLE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLA_QT6C_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new constructs a new QsciStyle object.
///
QsciStyle* q_scistyle_new();

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new2 constructs a new QsciStyle object.
///
/// @param style int
/// @param description const char*
/// @param color QColor*
/// @param paper QColor*
/// @param font QFont*
///
QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new3 constructs a new QsciStyle object.
///
/// @param param1 QsciStyle*
///
QsciStyle* q_scistyle_new3(void* param1);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new4 constructs a new QsciStyle object.
///
/// @param style int
///
QsciStyle* q_scistyle_new4(int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new5 constructs a new QsciStyle object.
///
/// @param style int
/// @param description const char*
/// @param color QColor*
/// @param paper QColor*
/// @param font QFont*
/// @param eolFill bool
///
QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param sci QsciScintillaBase*
///
void q_scistyle_apply(void* self, void* sci);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param style int
///
void q_scistyle_set_style(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
int32_t q_scistyle_style(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param description const char*
///
void q_scistyle_set_description(void* self, const char* description);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciStyle*
///
const char* q_scistyle_description(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param color QColor*
///
void q_scistyle_set_color(void* self, void* color);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
QColor* q_scistyle_color(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param paper QColor*
///
void q_scistyle_set_paper(void* self, void* paper);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
QColor* q_scistyle_paper(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param font QFont*
///
void q_scistyle_set_font(void* self, void* font);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
QFont* q_scistyle_font(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param fill bool
///
void q_scistyle_set_eol_fill(void* self, bool fill);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
bool q_scistyle_eol_fill(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param text_case enum QsciStyle__TextCase
///
void q_scistyle_set_text_case(void* self, int32_t text_case);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
/// @return enum QsciStyle__TextCase
///
int32_t q_scistyle_text_case(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param visible bool
///
void q_scistyle_set_visible(void* self, bool visible);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
bool q_scistyle_visible(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param changeable bool
///
void q_scistyle_set_changeable(void* self, bool changeable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
bool q_scistyle_changeable(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param hotspot bool
///
void q_scistyle_set_hotspot(void* self, bool hotspot);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
bool q_scistyle_hotspot(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
void q_scistyle_refresh(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciStyle*
///
void q_scistyle_delete(void* self);

typedef enum {
    QSCISTYLE_TEXTCASE_ORIGINALCASE = 0,
    QSCISTYLE_TEXTCASE_UPPERCASE = 1,
    QSCISTYLE_TEXTCASE_LOWERCASE = 2
} QsciStyle__TextCase;

#endif
