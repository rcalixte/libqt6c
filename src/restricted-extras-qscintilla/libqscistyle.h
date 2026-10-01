#pragma once
#ifndef RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISTYLE_H
#define RESTRICTED_EXTRAS_QSCINTILLA_LIBQSCISTYLE_H

#include <stdbool.h>
#include <stddef.h>

#include "../libqttypedefs.h"
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
QsciStyle* q_scistyle_new2(int style, const char* description, const void* color, const void* paper, const void* font);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)

/// q_scistyle_new3 constructs a new QsciStyle object.
///
/// @param param1 QsciStyle*
///
QsciStyle* q_scistyle_new3(const void* param1);

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
QsciStyle* q_scistyle_new5(int style, const char* description, const void* color, const void* paper, const void* font, bool eolFill);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
/// @param sci QsciScintillaBase*
///
void q_scistyle_apply(const void* self, void* sci);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param style int
///
void q_scistyle_set_style(void* self, int style);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
int32_t q_scistyle_style(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param description const char*
///
void q_scistyle_set_description(void* self, const char* description);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @warning Caller is responsible for freeing the returned memory using `libqt_free()`
///
/// @param self const QsciStyle*
///
const char* q_scistyle_description(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param color QColor*
///
void q_scistyle_set_color(void* self, const void* color);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
QColor* q_scistyle_color(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param paper QColor*
///
void q_scistyle_set_paper(void* self, const void* paper);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
QColor* q_scistyle_paper(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param font QFont*
///
void q_scistyle_set_font(void* self, const void* font);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
QFont* q_scistyle_font(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param fill bool
///
void q_scistyle_set_eol_fill(void* self, bool fill);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
bool q_scistyle_eol_fill(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param text_case enum QsciStyle__TextCase
///
void q_scistyle_set_text_case(void* self, int32_t text_case);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
/// @return enum QsciStyle__TextCase
///
int32_t q_scistyle_text_case(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param visible bool
///
void q_scistyle_set_visible(void* self, bool visible);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
bool q_scistyle_visible(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param changeable bool
///
void q_scistyle_set_changeable(void* self, bool changeable);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
bool q_scistyle_changeable(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param hotspot bool
///
void q_scistyle_set_hotspot(void* self, bool hotspot);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self const QsciStyle*
///
bool q_scistyle_hotspot(const void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
///
void q_scistyle_refresh(void* self);

/// [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciStyle.html)
///
/// @param self QsciStyle*
/// @param param1 QsciStyle*
///
void q_scistyle_operator_assign(void* self, const void* param1);

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
