#pragma once
#ifndef SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H
#define SRC_RESTRICTED_EXTRAS_QSCINTILLAQT6C_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

/// https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html

/// q_scistyle_new constructs a new QsciStyle object.
///
QsciStyle* q_scistyle_new();

/// q_scistyle_new2 constructs a new QsciStyle object.
///
/// @param style int
/// @param description const char*
/// @param color QColor*
/// @param paper QColor*
/// @param font QFont*
QsciStyle* q_scistyle_new2(int style, const char* description, void* color, void* paper, void* font);

/// q_scistyle_new3 constructs a new QsciStyle object.
///
/// @param param1 QsciStyle*
QsciStyle* q_scistyle_new3(void* param1);

/// q_scistyle_new4 constructs a new QsciStyle object.
///
/// @param style int
QsciStyle* q_scistyle_new4(int style);

/// q_scistyle_new5 constructs a new QsciStyle object.
///
/// @param style int
/// @param description const char*
/// @param color QColor*
/// @param paper QColor*
/// @param font QFont*
/// @param eolFill bool
QsciStyle* q_scistyle_new5(int style, const char* description, void* color, void* paper, void* font, bool eolFill);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param sci QsciScintillaBase*
void q_scistyle_apply(void* self, void* sci);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param style int
void q_scistyle_set_style(void* self, int style);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
int32_t q_scistyle_style(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param description const char*
void q_scistyle_set_description(void* self, const char* description);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// Caller is responsible for freeing the returned memory
///
/// @param self QsciStyle*
const char* q_scistyle_description(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param color QColor*
void q_scistyle_set_color(void* self, void* color);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
QColor* q_scistyle_color(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param paper QColor*
void q_scistyle_set_paper(void* self, void* paper);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
QColor* q_scistyle_paper(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param font QFont*
void q_scistyle_set_font(void* self, void* font);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
QFont* q_scistyle_font(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param fill bool
void q_scistyle_set_eol_fill(void* self, bool fill);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
bool q_scistyle_eol_fill(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param text_case enum QsciStyle__TextCase
void q_scistyle_set_text_case(void* self, int64_t text_case);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
/// @return enum QsciStyle__TextCase
int64_t q_scistyle_text_case(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param visible bool
void q_scistyle_set_visible(void* self, bool visible);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
bool q_scistyle_visible(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param changeable bool
void q_scistyle_set_changeable(void* self, bool changeable);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
bool q_scistyle_changeable(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param hotspot bool
void q_scistyle_set_hotspot(void* self, bool hotspot);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
bool q_scistyle_hotspot(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
void q_scistyle_refresh(void* self);

/// [Qt documentation](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// Delete this object from C++ memory.
///
/// @param self QsciStyle*
void q_scistyle_delete(void* self);

typedef enum {
    QSCISTYLE_TEXTCASE_ORIGINALCASE = 0,
    QSCISTYLE_TEXTCASE_UPPERCASE = 1,
    QSCISTYLE_TEXTCASE_LOWERCASE = 2
} QsciStyle__TextCase;

#endif
